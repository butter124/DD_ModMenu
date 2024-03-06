/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: Core_functions.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Basic Functions
# ========================================================================================= #
*/

#include <string>

TArray< UObject* >* UObject::GObjObjects() 
{ 
	TArray< UObject* >* ObjectArray = (TArray< UObject* >*) GObjects; 
	return ObjectArray; 
} 

char* UObject::GetName() 
{ 
	static char cOutBuffer[ 256 ]; 

	sprintf_s ( cOutBuffer, "%s", this->Name.GetName() ); 

	return cOutBuffer; 
} 

char* UObject::GetNameCPP() 
{ 
	static char cOutBuffer[ 256 ]; 

	if ( this->IsA ( UClass::StaticClass() ) ) 
	{ 
		UClass* pClass = (UClass*) this; 
		while ( pClass ) 
		{ 
			if ( ! strcmp ( pClass->GetName(), "Actor" ) ) 
			{ 
				strcpy_s ( cOutBuffer, "A" ); 
				break; 
			} 
			else if ( ! strcmp ( pClass->GetName(), "Object" ) ) 
			{ 
				strcpy_s ( cOutBuffer, "U" ); 
				break; 
			} 

			pClass = (UClass*) pClass->SuperField; 
		} 
	} 
	else 
	{ 
		strcpy_s ( cOutBuffer, "F" ); 
	} 

	strcat_s ( cOutBuffer, this->GetName() ); 

	return cOutBuffer; 
} 

char* UObject::GetFullName() 
{ 
	if ( this->Class && this->Outer ) 
	{ 
		static char cOutBuffer[ 512 ]; 
		std::string t;
		if ( this->Outer->Outer ) 
		{
			//strcpy_s ( cOutBuffer, this->Class->GetName() ); 
			//strcat_s ( cOutBuffer, " " ); 
			t += this->Class->GetName();
			t += " ";

			//strcat_s ( cOutBuffer, this->Outer->Outer->GetName() ); 
			//strcat_s ( cOutBuffer, "." ); 
			t += this->Outer->Outer->GetName();
			t += ".";

			//strcat_s ( cOutBuffer, this->Outer->GetName() ); 
			//strcat_s ( cOutBuffer, "." ); 
			t += this->Outer->GetName();
			t += ".";

			//strcat_s ( cOutBuffer, this->GetName() ); 
			t += this->GetName();

			if(t.find("þ") != std::string::npos)
				return (char*)"(null)";
			strcpy_s(cOutBuffer, t.c_str());
		} 
		else 
		{ 
			//strcpy_s ( cOutBuffer, this->Class->GetName() ); 
			//strcat_s ( cOutBuffer, " " ); 
			t += this->Class->GetName();
			t += " ";

			//strcat_s ( cOutBuffer, this->Outer->GetName() ); 
			//strcat_s ( cOutBuffer, "." ); 
			t += this->Outer->GetName();
			t += ".";

			//strcat_s ( cOutBuffer, this->GetName() ); 
			t += this->GetName();

			if(t.find("þ") != std::string::npos)
				return (char*)"(null)";

			strcpy_s(cOutBuffer, t.c_str());
		} 

		return cOutBuffer; 
	} 

	return (char*)"(null)"; 
}
 
template< class T > T* UObject::FindObject ( char* ObjectFullName ) 
{ 
	while ( ! UObject::GObjObjects() ) 
		Sleep ( 100 ); 

	while ( ! FName::Names() ) 
		Sleep( 100 ); 

	for ( int i = 0; i < UObject::GObjObjects()->Count; ++i ) 
	{ 
		UObject* Object = UObject::GObjObjects()->Data[ i ]; 

		// skip no T class objects 
		if 
		( 
				! Object 
			||	! Object->IsA ( T::StaticClass() ) 
		) 
			continue; 

		// check 
		if ( ! _stricmp ( Object->GetFullName(), ObjectFullName ) ) 
			return (T*) Object; 
	} 

	return NULL; 
} 

UClass* UObject::FindClass ( char* ClassFullName ) 
{ 
	while ( ! UObject::GObjObjects() ) 
		Sleep ( 100 ); 

	while ( ! FName::Names() ) 
		Sleep ( 100 ); 

	for ( int i = 0; i < UObject::GObjObjects()->Count; ++i ) 
	{ 
		UObject* Object = UObject::GObjObjects()->Data[ i ]; 

		if ( ! Object ) 
			continue; 

		if ( ! _stricmp ( Object->GetFullName(), ClassFullName ) ) 
			return (UClass*) Object; 
	} 

	return NULL; 
} 

bool UObject::IsA ( UClass* pClass ) 
{ 
	for ( UClass* SuperClass = this->Class; SuperClass; SuperClass = ( UClass* ) SuperClass->SuperField ) 
	{ 
		if ( SuperClass == pClass ) 
			return true; 
	} 

	return false; 
} 

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function Core.Object.ToHDI
// [0x00822003] ( FUNC_Final )
// Parameters infos:
// struct FHighDigitInt           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 In                             ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

struct FHighDigitInt UObject::ToHDI ( struct FString In )
{
	static UFunction* pFnToHDI = NULL;

	if ( ! pFnToHDI )
		pFnToHDI = (UFunction*) UObject::GObjObjects()->Data[ 1382 ];

	UObject_execToHDI_Parms ToHDI_Parms;
	memcpy ( &ToHDI_Parms.In, &In, 0xC );

	this->ProcessEvent ( pFnToHDI, &ToHDI_Parms, NULL );

	return ToHDI_Parms.ReturnValue;
};

// Function Core.Object.ClampHDI
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// struct FHighDigitInt           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           Value                          ( CPF_Parm )
// struct FHighDigitInt           Min                            ( CPF_Parm )
// struct FHighDigitInt           Max                            ( CPF_Parm )

struct FHighDigitInt UObject::ClampHDI ( struct FHighDigitInt Value, struct FHighDigitInt Min, struct FHighDigitInt Max )
{
	static UFunction* pFnClampHDI = NULL;

	if ( ! pFnClampHDI )
		pFnClampHDI = (UFunction*) UObject::GObjObjects()->Data[ 1383 ];

	UObject_execClampHDI_Parms ClampHDI_Parms;
	memcpy ( &ClampHDI_Parms.Value, &Value, 0x10 );
	memcpy ( &ClampHDI_Parms.Min, &Min, 0x10 );
	memcpy ( &ClampHDI_Parms.Max, &Max, 0x10 );

	this->ProcessEvent ( pFnClampHDI, &ClampHDI_Parms, NULL );

	return ClampHDI_Parms.ReturnValue;
};

// Function Core.Object.AsInt
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           toConvert                      ( CPF_Parm )

int UObject::AsInt ( struct FHighDigitInt toConvert )
{
	static UFunction* pFnAsInt = NULL;

	if ( ! pFnAsInt )
		pFnAsInt = (UFunction*) UObject::GObjObjects()->Data[ 1399 ];

	UObject_execAsInt_Parms AsInt_Parms;
	memcpy ( &AsInt_Parms.toConvert, &toConvert, 0x10 );

	this->ProcessEvent ( pFnAsInt, &AsInt_Parms, NULL );

	return AsInt_Parms.ReturnValue;
};

// Function Core.Object.MultiplyByInt
// [0x00422003] ( FUNC_Final )
// Parameters infos:
// int                            Mult                           ( CPF_Parm )
// struct FHighDigitInt           A                              ( CPF_Parm | CPF_OutParm )

void UObject::MultiplyByInt ( int Mult, struct FHighDigitInt* A )
{
	static UFunction* pFnMultiplyByInt = NULL;

	if ( ! pFnMultiplyByInt )
		pFnMultiplyByInt = (UFunction*) UObject::GObjObjects()->Data[ 1406 ];

	UObject_execMultiplyByInt_Parms MultiplyByInt_Parms;
	MultiplyByInt_Parms.Mult = Mult;

	this->ProcessEvent ( pFnMultiplyByInt, &MultiplyByInt_Parms, NULL );

	if ( A )
		memcpy ( A, &MultiplyByInt_Parms.A, 0x10 );
};

// Function Core.Object.DivideByInt
// [0x00422003] ( FUNC_Final )
// Parameters infos:
// int                            divisor                        ( CPF_Parm )
// struct FHighDigitInt           A                              ( CPF_Parm | CPF_OutParm )

void UObject::DivideByInt ( int divisor, struct FHighDigitInt* A )
{
	static UFunction* pFnDivideByInt = NULL;

	if ( ! pFnDivideByInt )
		pFnDivideByInt = (UFunction*) UObject::GObjObjects()->Data[ 1410 ];

	UObject_execDivideByInt_Parms DivideByInt_Parms;
	DivideByInt_Parms.divisor = divisor;

	this->ProcessEvent ( pFnDivideByInt, &DivideByInt_Parms, NULL );

	if ( A )
		memcpy ( A, &DivideByInt_Parms.A, 0x10 );
};

// Function Core.Object.GetHighIntThousandsSeparator
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// float                          Value                          ( CPF_Parm )

struct FString UObject::GetHighIntThousandsSeparator ( float Value )
{
	static UFunction* pFnGetHighIntThousandsSeparator = NULL;

	if ( ! pFnGetHighIntThousandsSeparator )
		pFnGetHighIntThousandsSeparator = (UFunction*) UObject::GObjObjects()->Data[ 1416 ];

	UObject_execGetHighIntThousandsSeparator_Parms GetHighIntThousandsSeparator_Parms;
	GetHighIntThousandsSeparator_Parms.Value = Value;

	this->ProcessEvent ( pFnGetHighIntThousandsSeparator, &GetHighIntThousandsSeparator_Parms, NULL );

	return GetHighIntThousandsSeparator_Parms.ReturnValue;
};

// Function Core.Object.GetHighIntNumberFormatInDecimal
// [0x00426003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// float                          Value                          ( CPF_Parm )
// struct FString                 suffix                         ( CPF_Parm | CPF_NeedCtorLink )
// float                          suffixValue                    ( CPF_Parm )
// float                          nextValue                      ( CPF_Parm )
// int                            sigFigs                        ( CPF_OptionalParm | CPF_Parm )
// float                          outFloat                       ( CPF_Parm | CPF_OutParm )

struct FString UObject::GetHighIntNumberFormatInDecimal ( float Value, struct FString suffix, float suffixValue, float nextValue, int sigFigs, float* outFloat )
{
	static UFunction* pFnGetHighIntNumberFormatInDecimal = NULL;

	if ( ! pFnGetHighIntNumberFormatInDecimal )
		pFnGetHighIntNumberFormatInDecimal = (UFunction*) UObject::GObjObjects()->Data[ 1422 ];

	UObject_execGetHighIntNumberFormatInDecimal_Parms GetHighIntNumberFormatInDecimal_Parms;
	GetHighIntNumberFormatInDecimal_Parms.Value = Value;
	memcpy ( &GetHighIntNumberFormatInDecimal_Parms.suffix, &suffix, 0xC );
	GetHighIntNumberFormatInDecimal_Parms.suffixValue = suffixValue;
	GetHighIntNumberFormatInDecimal_Parms.nextValue = nextValue;
	GetHighIntNumberFormatInDecimal_Parms.sigFigs = sigFigs;

	this->ProcessEvent ( pFnGetHighIntNumberFormatInDecimal, &GetHighIntNumberFormatInDecimal_Parms, NULL );

	if ( outFloat )
		*outFloat = GetHighIntNumberFormatInDecimal_Parms.outFloat;

	return GetHighIntNumberFormatInDecimal_Parms.ReturnValue;
};

// Function Core.Object.GetHighDigitIntNumberFormat
// [0x00026003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            num1                           ( CPF_Parm )
// int                            num2                           ( CPF_OptionalParm | CPF_Parm )
// int                            num3                           ( CPF_OptionalParm | CPF_Parm )
// int                            num4                           ( CPF_OptionalParm | CPF_Parm )
// int                            sigFigs                        ( CPF_OptionalParm | CPF_Parm )

struct FString UObject::GetHighDigitIntNumberFormat ( int num1, int num2, int num3, int num4, int sigFigs )
{
	static UFunction* pFnGetHighDigitIntNumberFormat = NULL;

	if ( ! pFnGetHighDigitIntNumberFormat )
		pFnGetHighDigitIntNumberFormat = (UFunction*) UObject::GObjObjects()->Data[ 1426 ];

	UObject_execGetHighDigitIntNumberFormat_Parms GetHighDigitIntNumberFormat_Parms;
	GetHighDigitIntNumberFormat_Parms.num1 = num1;
	GetHighDigitIntNumberFormat_Parms.num2 = num2;
	GetHighDigitIntNumberFormat_Parms.num3 = num3;
	GetHighDigitIntNumberFormat_Parms.num4 = num4;
	GetHighDigitIntNumberFormat_Parms.sigFigs = sigFigs;

	this->ProcessEvent ( pFnGetHighDigitIntNumberFormat, &GetHighDigitIntNumberFormat_Parms, NULL );

	return GetHighDigitIntNumberFormat_Parms.ReturnValue;
};

// Function Core.Object.GetHighDigitIntNumberFormatHDI
// [0x00026003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FHighDigitInt           theInt                         ( CPF_Parm )
// int                            sigFigs                        ( CPF_OptionalParm | CPF_Parm )

struct FString UObject::GetHighDigitIntNumberFormatHDI ( struct FHighDigitInt theInt, int sigFigs )
{
	static UFunction* pFnGetHighDigitIntNumberFormatHDI = NULL;

	if ( ! pFnGetHighDigitIntNumberFormatHDI )
		pFnGetHighDigitIntNumberFormatHDI = (UFunction*) UObject::GObjObjects()->Data[ 1438 ];

	UObject_execGetHighDigitIntNumberFormatHDI_Parms GetHighDigitIntNumberFormatHDI_Parms;
	memcpy ( &GetHighDigitIntNumberFormatHDI_Parms.theInt, &theInt, 0x10 );
	GetHighDigitIntNumberFormatHDI_Parms.sigFigs = sigFigs;

	this->ProcessEvent ( pFnGetHighDigitIntNumberFormatHDI, &GetHighDigitIntNumberFormatHDI_Parms, NULL );

	return GetHighDigitIntNumberFormatHDI_Parms.ReturnValue;
};

// Function Core.Object.CompareHighDigitInt
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           num1                           ( CPF_Parm )
// struct FHighDigitInt           num2                           ( CPF_Parm )

int UObject::CompareHighDigitInt ( struct FHighDigitInt num1, struct FHighDigitInt num2 )
{
	static UFunction* pFnCompareHighDigitInt = NULL;

	if ( ! pFnCompareHighDigitInt )
		pFnCompareHighDigitInt = (UFunction*) UObject::GObjObjects()->Data[ 1464 ];

	UObject_execCompareHighDigitInt_Parms CompareHighDigitInt_Parms;
	memcpy ( &CompareHighDigitInt_Parms.num1, &num1, 0x10 );
	memcpy ( &CompareHighDigitInt_Parms.num2, &num2, 0x10 );

	this->ProcessEvent ( pFnCompareHighDigitInt, &CompareHighDigitInt_Parms, NULL );

	return CompareHighDigitInt_Parms.ReturnValue;
};

// Function Core.Object.CalculateHighDigitInt
// [0x00822003] ( FUNC_Final )
// Parameters infos:
// struct FHighDigitInt           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           HighInt                        ( CPF_Parm )

struct FHighDigitInt UObject::CalculateHighDigitInt ( struct FHighDigitInt HighInt )
{
	static UFunction* pFnCalculateHighDigitInt = NULL;

	if ( ! pFnCalculateHighDigitInt )
		pFnCalculateHighDigitInt = (UFunction*) UObject::GObjObjects()->Data[ 1468 ];

	UObject_execCalculateHighDigitInt_Parms CalculateHighDigitInt_Parms;
	memcpy ( &CalculateHighDigitInt_Parms.HighInt, &HighInt, 0x10 );

	this->ProcessEvent ( pFnCalculateHighDigitInt, &CalculateHighDigitInt_Parms, NULL );

	return CalculateHighDigitInt_Parms.ReturnValue;
};

// Function Core.Object.SetHighIntValue
// [0x00426003] ( FUNC_Final )
// Parameters infos:
// int                            val1                           ( CPF_Parm )
// int                            val2                           ( CPF_OptionalParm | CPF_Parm )
// int                            val3                           ( CPF_OptionalParm | CPF_Parm )
// int                            val4                           ( CPF_OptionalParm | CPF_Parm )
// struct FHighDigitInt           A                              ( CPF_Parm | CPF_OutParm )

void UObject::SetHighIntValue ( int val1, int val2, int val3, int val4, struct FHighDigitInt* A )
{
	static UFunction* pFnSetHighIntValue = NULL;

	if ( ! pFnSetHighIntValue )
		pFnSetHighIntValue = (UFunction*) UObject::GObjObjects()->Data[ 1387 ];

	UObject_execSetHighIntValue_Parms SetHighIntValue_Parms;
	SetHighIntValue_Parms.val1 = val1;
	SetHighIntValue_Parms.val2 = val2;
	SetHighIntValue_Parms.val3 = val3;
	SetHighIntValue_Parms.val4 = val4;

	this->ProcessEvent ( pFnSetHighIntValue, &SetHighIntValue_Parms, NULL );

	if ( A )
		memcpy ( A, &SetHighIntValue_Parms.A, 0x10 );
};

// Function Core.Object.NotEqual_HighDigitIntHighDigitInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           A                              ( CPF_Parm )
// struct FHighDigitInt           B                              ( CPF_Parm )

bool UObject::NotEqual_HighDigitIntHighDigitInt ( struct FHighDigitInt A, struct FHighDigitInt B )
{
	static UFunction* pFnNotEqual_HighDigitIntHighDigitInt = NULL;

	if ( ! pFnNotEqual_HighDigitIntHighDigitInt )
		pFnNotEqual_HighDigitIntHighDigitInt = (UFunction*) UObject::GObjObjects()->Data[ 1480 ];

	UObject_execNotEqual_HighDigitIntHighDigitInt_Parms NotEqual_HighDigitIntHighDigitInt_Parms;
	memcpy ( &NotEqual_HighDigitIntHighDigitInt_Parms.A, &A, 0x10 );
	memcpy ( &NotEqual_HighDigitIntHighDigitInt_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnNotEqual_HighDigitIntHighDigitInt, &NotEqual_HighDigitIntHighDigitInt_Parms, NULL );

	return NotEqual_HighDigitIntHighDigitInt_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_HighDigitIntHighDigitInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           A                              ( CPF_Parm )
// struct FHighDigitInt           B                              ( CPF_Parm )

bool UObject::EqualEqual_HighDigitIntHighDigitInt ( struct FHighDigitInt A, struct FHighDigitInt B )
{
	static UFunction* pFnEqualEqual_HighDigitIntHighDigitInt = NULL;

	if ( ! pFnEqualEqual_HighDigitIntHighDigitInt )
		pFnEqualEqual_HighDigitIntHighDigitInt = (UFunction*) UObject::GObjObjects()->Data[ 1486 ];

	UObject_execEqualEqual_HighDigitIntHighDigitInt_Parms EqualEqual_HighDigitIntHighDigitInt_Parms;
	memcpy ( &EqualEqual_HighDigitIntHighDigitInt_Parms.A, &A, 0x10 );
	memcpy ( &EqualEqual_HighDigitIntHighDigitInt_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnEqualEqual_HighDigitIntHighDigitInt, &EqualEqual_HighDigitIntHighDigitInt_Parms, NULL );

	return EqualEqual_HighDigitIntHighDigitInt_Parms.ReturnValue;
};

// Function Core.Object.GreaterEqual_HighDigitIntHighDigitInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           A                              ( CPF_Parm )
// struct FHighDigitInt           B                              ( CPF_Parm )

bool UObject::GreaterEqual_HighDigitIntHighDigitInt ( struct FHighDigitInt A, struct FHighDigitInt B )
{
	static UFunction* pFnGreaterEqual_HighDigitIntHighDigitInt = NULL;

	if ( ! pFnGreaterEqual_HighDigitIntHighDigitInt )
		pFnGreaterEqual_HighDigitIntHighDigitInt = (UFunction*) UObject::GObjObjects()->Data[ 1490 ];

	UObject_execGreaterEqual_HighDigitIntHighDigitInt_Parms GreaterEqual_HighDigitIntHighDigitInt_Parms;
	memcpy ( &GreaterEqual_HighDigitIntHighDigitInt_Parms.A, &A, 0x10 );
	memcpy ( &GreaterEqual_HighDigitIntHighDigitInt_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnGreaterEqual_HighDigitIntHighDigitInt, &GreaterEqual_HighDigitIntHighDigitInt_Parms, NULL );

	return GreaterEqual_HighDigitIntHighDigitInt_Parms.ReturnValue;
};

// Function Core.Object.LessEqual_HighDigitIntHighDigitInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           A                              ( CPF_Parm )
// struct FHighDigitInt           B                              ( CPF_Parm )

bool UObject::LessEqual_HighDigitIntHighDigitInt ( struct FHighDigitInt A, struct FHighDigitInt B )
{
	static UFunction* pFnLessEqual_HighDigitIntHighDigitInt = NULL;

	if ( ! pFnLessEqual_HighDigitIntHighDigitInt )
		pFnLessEqual_HighDigitIntHighDigitInt = (UFunction*) UObject::GObjObjects()->Data[ 1494 ];

	UObject_execLessEqual_HighDigitIntHighDigitInt_Parms LessEqual_HighDigitIntHighDigitInt_Parms;
	memcpy ( &LessEqual_HighDigitIntHighDigitInt_Parms.A, &A, 0x10 );
	memcpy ( &LessEqual_HighDigitIntHighDigitInt_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnLessEqual_HighDigitIntHighDigitInt, &LessEqual_HighDigitIntHighDigitInt_Parms, NULL );

	return LessEqual_HighDigitIntHighDigitInt_Parms.ReturnValue;
};

// Function Core.Object.Less_HighDigitIntHighDigitInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           A                              ( CPF_Parm )
// struct FHighDigitInt           B                              ( CPF_Parm )

bool UObject::Less_HighDigitIntHighDigitInt ( struct FHighDigitInt A, struct FHighDigitInt B )
{
	static UFunction* pFnLess_HighDigitIntHighDigitInt = NULL;

	if ( ! pFnLess_HighDigitIntHighDigitInt )
		pFnLess_HighDigitIntHighDigitInt = (UFunction*) UObject::GObjObjects()->Data[ 1401 ];

	UObject_execLess_HighDigitIntHighDigitInt_Parms Less_HighDigitIntHighDigitInt_Parms;
	memcpy ( &Less_HighDigitIntHighDigitInt_Parms.A, &A, 0x10 );
	memcpy ( &Less_HighDigitIntHighDigitInt_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnLess_HighDigitIntHighDigitInt, &Less_HighDigitIntHighDigitInt_Parms, NULL );

	return Less_HighDigitIntHighDigitInt_Parms.ReturnValue;
};

// Function Core.Object.Greater_HighDigitIntHighDigitInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           A                              ( CPF_Parm )
// struct FHighDigitInt           B                              ( CPF_Parm )

bool UObject::Greater_HighDigitIntHighDigitInt ( struct FHighDigitInt A, struct FHighDigitInt B )
{
	static UFunction* pFnGreater_HighDigitIntHighDigitInt = NULL;

	if ( ! pFnGreater_HighDigitIntHighDigitInt )
		pFnGreater_HighDigitIntHighDigitInt = (UFunction*) UObject::GObjObjects()->Data[ 1403 ];

	UObject_execGreater_HighDigitIntHighDigitInt_Parms Greater_HighDigitIntHighDigitInt_Parms;
	memcpy ( &Greater_HighDigitIntHighDigitInt_Parms.A, &A, 0x10 );
	memcpy ( &Greater_HighDigitIntHighDigitInt_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnGreater_HighDigitIntHighDigitInt, &Greater_HighDigitIntHighDigitInt_Parms, NULL );

	return Greater_HighDigitIntHighDigitInt_Parms.ReturnValue;
};

// Function Core.Object.Subtract_HighDigitIntHighDigitInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// struct FHighDigitInt           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           A                              ( CPF_Parm )
// struct FHighDigitInt           B                              ( CPF_Parm )

struct FHighDigitInt UObject::Subtract_HighDigitIntHighDigitInt ( struct FHighDigitInt A, struct FHighDigitInt B )
{
	static UFunction* pFnSubtract_HighDigitIntHighDigitInt = NULL;

	if ( ! pFnSubtract_HighDigitIntHighDigitInt )
		pFnSubtract_HighDigitIntHighDigitInt = (UFunction*) UObject::GObjObjects()->Data[ 1504 ];

	UObject_execSubtract_HighDigitIntHighDigitInt_Parms Subtract_HighDigitIntHighDigitInt_Parms;
	memcpy ( &Subtract_HighDigitIntHighDigitInt_Parms.A, &A, 0x10 );
	memcpy ( &Subtract_HighDigitIntHighDigitInt_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnSubtract_HighDigitIntHighDigitInt, &Subtract_HighDigitIntHighDigitInt_Parms, NULL );

	return Subtract_HighDigitIntHighDigitInt_Parms.ReturnValue;
};

// Function Core.Object.Add_HighDigitIntHighDigitInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// struct FHighDigitInt           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           A                              ( CPF_Parm )
// struct FHighDigitInt           B                              ( CPF_Parm )

struct FHighDigitInt UObject::Add_HighDigitIntHighDigitInt ( struct FHighDigitInt A, struct FHighDigitInt B )
{
	static UFunction* pFnAdd_HighDigitIntHighDigitInt = NULL;

	if ( ! pFnAdd_HighDigitIntHighDigitInt )
		pFnAdd_HighDigitIntHighDigitInt = (UFunction*) UObject::GObjObjects()->Data[ 1508 ];

	UObject_execAdd_HighDigitIntHighDigitInt_Parms Add_HighDigitIntHighDigitInt_Parms;
	memcpy ( &Add_HighDigitIntHighDigitInt_Parms.A, &A, 0x10 );
	memcpy ( &Add_HighDigitIntHighDigitInt_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnAdd_HighDigitIntHighDigitInt, &Add_HighDigitIntHighDigitInt_Parms, NULL );

	return Add_HighDigitIntHighDigitInt_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_HighDigitIntInt
// [0x00423003] ( FUNC_Final )
// Parameters infos:
// struct FHighDigitInt           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            B                              ( CPF_Parm )
// struct FHighDigitInt           A                              ( CPF_Parm | CPF_OutParm )

struct FHighDigitInt UObject::MultiplyEqual_HighDigitIntInt ( int B, struct FHighDigitInt* A )
{
	static UFunction* pFnMultiplyEqual_HighDigitIntInt = NULL;

	if ( ! pFnMultiplyEqual_HighDigitIntInt )
		pFnMultiplyEqual_HighDigitIntInt = (UFunction*) UObject::GObjObjects()->Data[ 1393 ];

	UObject_execMultiplyEqual_HighDigitIntInt_Parms MultiplyEqual_HighDigitIntInt_Parms;
	MultiplyEqual_HighDigitIntInt_Parms.B = B;

	this->ProcessEvent ( pFnMultiplyEqual_HighDigitIntInt, &MultiplyEqual_HighDigitIntInt_Parms, NULL );

	if ( A )
		memcpy ( A, &MultiplyEqual_HighDigitIntInt_Parms.A, 0x10 );

	return MultiplyEqual_HighDigitIntInt_Parms.ReturnValue;
};

// Function Core.Object.DivideEqual_HighDigitIntInt
// [0x00423003] ( FUNC_Final )
// Parameters infos:
// struct FHighDigitInt           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            B                              ( CPF_Parm )
// struct FHighDigitInt           A                              ( CPF_Parm | CPF_OutParm )

struct FHighDigitInt UObject::DivideEqual_HighDigitIntInt ( int B, struct FHighDigitInt* A )
{
	static UFunction* pFnDivideEqual_HighDigitIntInt = NULL;

	if ( ! pFnDivideEqual_HighDigitIntInt )
		pFnDivideEqual_HighDigitIntInt = (UFunction*) UObject::GObjObjects()->Data[ 1515 ];

	UObject_execDivideEqual_HighDigitIntInt_Parms DivideEqual_HighDigitIntInt_Parms;
	DivideEqual_HighDigitIntInt_Parms.B = B;

	this->ProcessEvent ( pFnDivideEqual_HighDigitIntInt, &DivideEqual_HighDigitIntInt_Parms, NULL );

	if ( A )
		memcpy ( A, &DivideEqual_HighDigitIntInt_Parms.A, 0x10 );

	return DivideEqual_HighDigitIntInt_Parms.ReturnValue;
};

// Function Core.Object.Multiply_HighDigitIntInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// struct FHighDigitInt           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

struct FHighDigitInt UObject::Multiply_HighDigitIntInt ( struct FHighDigitInt A, int B )
{
	static UFunction* pFnMultiply_HighDigitIntInt = NULL;

	if ( ! pFnMultiply_HighDigitIntInt )
		pFnMultiply_HighDigitIntInt = (UFunction*) UObject::GObjObjects()->Data[ 1519 ];

	UObject_execMultiply_HighDigitIntInt_Parms Multiply_HighDigitIntInt_Parms;
	memcpy ( &Multiply_HighDigitIntInt_Parms.A, &A, 0x10 );
	Multiply_HighDigitIntInt_Parms.B = B;

	this->ProcessEvent ( pFnMultiply_HighDigitIntInt, &Multiply_HighDigitIntInt_Parms, NULL );

	return Multiply_HighDigitIntInt_Parms.ReturnValue;
};

// Function Core.Object.Divide_HighDigitIntInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// struct FHighDigitInt           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

struct FHighDigitInt UObject::Divide_HighDigitIntInt ( struct FHighDigitInt A, int B )
{
	static UFunction* pFnDivide_HighDigitIntInt = NULL;

	if ( ! pFnDivide_HighDigitIntInt )
		pFnDivide_HighDigitIntInt = (UFunction*) UObject::GObjObjects()->Data[ 1523 ];

	UObject_execDivide_HighDigitIntInt_Parms Divide_HighDigitIntInt_Parms;
	memcpy ( &Divide_HighDigitIntInt_Parms.A, &A, 0x10 );
	Divide_HighDigitIntInt_Parms.B = B;

	this->ProcessEvent ( pFnDivide_HighDigitIntInt, &Divide_HighDigitIntInt_Parms, NULL );

	return Divide_HighDigitIntInt_Parms.ReturnValue;
};

// Function Core.Object.LessEqual_HighDigitIntInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

bool UObject::LessEqual_HighDigitIntInt ( struct FHighDigitInt A, int B )
{
	static UFunction* pFnLessEqual_HighDigitIntInt = NULL;

	if ( ! pFnLessEqual_HighDigitIntInt )
		pFnLessEqual_HighDigitIntInt = (UFunction*) UObject::GObjObjects()->Data[ 1527 ];

	UObject_execLessEqual_HighDigitIntInt_Parms LessEqual_HighDigitIntInt_Parms;
	memcpy ( &LessEqual_HighDigitIntInt_Parms.A, &A, 0x10 );
	LessEqual_HighDigitIntInt_Parms.B = B;

	this->ProcessEvent ( pFnLessEqual_HighDigitIntInt, &LessEqual_HighDigitIntInt_Parms, NULL );

	return LessEqual_HighDigitIntInt_Parms.ReturnValue;
};

// Function Core.Object.GreaterEqual_IntHighDigitInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// struct FHighDigitInt           B                              ( CPF_Parm )

bool UObject::GreaterEqual_IntHighDigitInt ( int A, struct FHighDigitInt B )
{
	static UFunction* pFnGreaterEqual_IntHighDigitInt = NULL;

	if ( ! pFnGreaterEqual_IntHighDigitInt )
		pFnGreaterEqual_IntHighDigitInt = (UFunction*) UObject::GObjObjects()->Data[ 1531 ];

	UObject_execGreaterEqual_IntHighDigitInt_Parms GreaterEqual_IntHighDigitInt_Parms;
	GreaterEqual_IntHighDigitInt_Parms.A = A;
	memcpy ( &GreaterEqual_IntHighDigitInt_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnGreaterEqual_IntHighDigitInt, &GreaterEqual_IntHighDigitInt_Parms, NULL );

	return GreaterEqual_IntHighDigitInt_Parms.ReturnValue;
};

// Function Core.Object.GreaterEqual_HighDigitIntInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

bool UObject::GreaterEqual_HighDigitIntInt ( struct FHighDigitInt A, int B )
{
	static UFunction* pFnGreaterEqual_HighDigitIntInt = NULL;

	if ( ! pFnGreaterEqual_HighDigitIntInt )
		pFnGreaterEqual_HighDigitIntInt = (UFunction*) UObject::GObjObjects()->Data[ 1535 ];

	UObject_execGreaterEqual_HighDigitIntInt_Parms GreaterEqual_HighDigitIntInt_Parms;
	memcpy ( &GreaterEqual_HighDigitIntInt_Parms.A, &A, 0x10 );
	GreaterEqual_HighDigitIntInt_Parms.B = B;

	this->ProcessEvent ( pFnGreaterEqual_HighDigitIntInt, &GreaterEqual_HighDigitIntInt_Parms, NULL );

	return GreaterEqual_HighDigitIntInt_Parms.ReturnValue;
};

// Function Core.Object.LessEqual_IntHighDigitInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// struct FHighDigitInt           B                              ( CPF_Parm )

bool UObject::LessEqual_IntHighDigitInt ( int A, struct FHighDigitInt B )
{
	static UFunction* pFnLessEqual_IntHighDigitInt = NULL;

	if ( ! pFnLessEqual_IntHighDigitInt )
		pFnLessEqual_IntHighDigitInt = (UFunction*) UObject::GObjObjects()->Data[ 1539 ];

	UObject_execLessEqual_IntHighDigitInt_Parms LessEqual_IntHighDigitInt_Parms;
	LessEqual_IntHighDigitInt_Parms.A = A;
	memcpy ( &LessEqual_IntHighDigitInt_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnLessEqual_IntHighDigitInt, &LessEqual_IntHighDigitInt_Parms, NULL );

	return LessEqual_IntHighDigitInt_Parms.ReturnValue;
};

// Function Core.Object.Less_HighDigitIntInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

bool UObject::Less_HighDigitIntInt ( struct FHighDigitInt A, int B )
{
	static UFunction* pFnLess_HighDigitIntInt = NULL;

	if ( ! pFnLess_HighDigitIntInt )
		pFnLess_HighDigitIntInt = (UFunction*) UObject::GObjObjects()->Data[ 1543 ];

	UObject_execLess_HighDigitIntInt_Parms Less_HighDigitIntInt_Parms;
	memcpy ( &Less_HighDigitIntInt_Parms.A, &A, 0x10 );
	Less_HighDigitIntInt_Parms.B = B;

	this->ProcessEvent ( pFnLess_HighDigitIntInt, &Less_HighDigitIntInt_Parms, NULL );

	return Less_HighDigitIntInt_Parms.ReturnValue;
};

// Function Core.Object.Greater_IntHighDigitInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// struct FHighDigitInt           B                              ( CPF_Parm )

bool UObject::Greater_IntHighDigitInt ( int A, struct FHighDigitInt B )
{
	static UFunction* pFnGreater_IntHighDigitInt = NULL;

	if ( ! pFnGreater_IntHighDigitInt )
		pFnGreater_IntHighDigitInt = (UFunction*) UObject::GObjObjects()->Data[ 1547 ];

	UObject_execGreater_IntHighDigitInt_Parms Greater_IntHighDigitInt_Parms;
	Greater_IntHighDigitInt_Parms.A = A;
	memcpy ( &Greater_IntHighDigitInt_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnGreater_IntHighDigitInt, &Greater_IntHighDigitInt_Parms, NULL );

	return Greater_IntHighDigitInt_Parms.ReturnValue;
};

// Function Core.Object.Greater_HighDigitIntInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

bool UObject::Greater_HighDigitIntInt ( struct FHighDigitInt A, int B )
{
	static UFunction* pFnGreater_HighDigitIntInt = NULL;

	if ( ! pFnGreater_HighDigitIntInt )
		pFnGreater_HighDigitIntInt = (UFunction*) UObject::GObjObjects()->Data[ 1408 ];

	UObject_execGreater_HighDigitIntInt_Parms Greater_HighDigitIntInt_Parms;
	memcpy ( &Greater_HighDigitIntInt_Parms.A, &A, 0x10 );
	Greater_HighDigitIntInt_Parms.B = B;

	this->ProcessEvent ( pFnGreater_HighDigitIntInt, &Greater_HighDigitIntInt_Parms, NULL );

	return Greater_HighDigitIntInt_Parms.ReturnValue;
};

// Function Core.Object.Less_IntHighDigitInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// struct FHighDigitInt           B                              ( CPF_Parm )

bool UObject::Less_IntHighDigitInt ( int A, struct FHighDigitInt B )
{
	static UFunction* pFnLess_IntHighDigitInt = NULL;

	if ( ! pFnLess_IntHighDigitInt )
		pFnLess_IntHighDigitInt = (UFunction*) UObject::GObjObjects()->Data[ 1554 ];

	UObject_execLess_IntHighDigitInt_Parms Less_IntHighDigitInt_Parms;
	Less_IntHighDigitInt_Parms.A = A;
	memcpy ( &Less_IntHighDigitInt_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnLess_IntHighDigitInt, &Less_IntHighDigitInt_Parms, NULL );

	return Less_IntHighDigitInt_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_IntHighDigitInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// struct FHighDigitInt           B                              ( CPF_Parm )

bool UObject::NotEqual_IntHighDigitInt ( int A, struct FHighDigitInt B )
{
	static UFunction* pFnNotEqual_IntHighDigitInt = NULL;

	if ( ! pFnNotEqual_IntHighDigitInt )
		pFnNotEqual_IntHighDigitInt = (UFunction*) UObject::GObjObjects()->Data[ 1558 ];

	UObject_execNotEqual_IntHighDigitInt_Parms NotEqual_IntHighDigitInt_Parms;
	NotEqual_IntHighDigitInt_Parms.A = A;
	memcpy ( &NotEqual_IntHighDigitInt_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnNotEqual_IntHighDigitInt, &NotEqual_IntHighDigitInt_Parms, NULL );

	return NotEqual_IntHighDigitInt_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_HighDigitIntInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

bool UObject::NotEqual_HighDigitIntInt ( struct FHighDigitInt A, int B )
{
	static UFunction* pFnNotEqual_HighDigitIntInt = NULL;

	if ( ! pFnNotEqual_HighDigitIntInt )
		pFnNotEqual_HighDigitIntInt = (UFunction*) UObject::GObjObjects()->Data[ 1562 ];

	UObject_execNotEqual_HighDigitIntInt_Parms NotEqual_HighDigitIntInt_Parms;
	memcpy ( &NotEqual_HighDigitIntInt_Parms.A, &A, 0x10 );
	NotEqual_HighDigitIntInt_Parms.B = B;

	this->ProcessEvent ( pFnNotEqual_HighDigitIntInt, &NotEqual_HighDigitIntInt_Parms, NULL );

	return NotEqual_HighDigitIntInt_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_IntHighDigitInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// struct FHighDigitInt           B                              ( CPF_Parm )

bool UObject::EqualEqual_IntHighDigitInt ( int A, struct FHighDigitInt B )
{
	static UFunction* pFnEqualEqual_IntHighDigitInt = NULL;

	if ( ! pFnEqualEqual_IntHighDigitInt )
		pFnEqualEqual_IntHighDigitInt = (UFunction*) UObject::GObjObjects()->Data[ 1566 ];

	UObject_execEqualEqual_IntHighDigitInt_Parms EqualEqual_IntHighDigitInt_Parms;
	EqualEqual_IntHighDigitInt_Parms.A = A;
	memcpy ( &EqualEqual_IntHighDigitInt_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnEqualEqual_IntHighDigitInt, &EqualEqual_IntHighDigitInt_Parms, NULL );

	return EqualEqual_IntHighDigitInt_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_HighDigitIntInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

bool UObject::EqualEqual_HighDigitIntInt ( struct FHighDigitInt A, int B )
{
	static UFunction* pFnEqualEqual_HighDigitIntInt = NULL;

	if ( ! pFnEqualEqual_HighDigitIntInt )
		pFnEqualEqual_HighDigitIntInt = (UFunction*) UObject::GObjObjects()->Data[ 1570 ];

	UObject_execEqualEqual_HighDigitIntInt_Parms EqualEqual_HighDigitIntInt_Parms;
	memcpy ( &EqualEqual_HighDigitIntInt_Parms.A, &A, 0x10 );
	EqualEqual_HighDigitIntInt_Parms.B = B;

	this->ProcessEvent ( pFnEqualEqual_HighDigitIntInt, &EqualEqual_HighDigitIntInt_Parms, NULL );

	return EqualEqual_HighDigitIntInt_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_HighDigitIntHighDigitInt
// [0x00423003] ( FUNC_Final )
// Parameters infos:
// struct FHighDigitInt           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           B                              ( CPF_Parm )
// struct FHighDigitInt           A                              ( CPF_Parm | CPF_OutParm )

struct FHighDigitInt UObject::SubtractEqual_HighDigitIntHighDigitInt ( struct FHighDigitInt B, struct FHighDigitInt* A )
{
	static UFunction* pFnSubtractEqual_HighDigitIntHighDigitInt = NULL;

	if ( ! pFnSubtractEqual_HighDigitIntHighDigitInt )
		pFnSubtractEqual_HighDigitIntHighDigitInt = (UFunction*) UObject::GObjObjects()->Data[ 1574 ];

	UObject_execSubtractEqual_HighDigitIntHighDigitInt_Parms SubtractEqual_HighDigitIntHighDigitInt_Parms;
	memcpy ( &SubtractEqual_HighDigitIntHighDigitInt_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnSubtractEqual_HighDigitIntHighDigitInt, &SubtractEqual_HighDigitIntHighDigitInt_Parms, NULL );

	if ( A )
		memcpy ( A, &SubtractEqual_HighDigitIntHighDigitInt_Parms.A, 0x10 );

	return SubtractEqual_HighDigitIntHighDigitInt_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_HighDigitIntInt
// [0x00423003] ( FUNC_Final )
// Parameters infos:
// struct FHighDigitInt           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            B                              ( CPF_Parm )
// struct FHighDigitInt           A                              ( CPF_Parm | CPF_OutParm )

struct FHighDigitInt UObject::SubtractEqual_HighDigitIntInt ( int B, struct FHighDigitInt* A )
{
	static UFunction* pFnSubtractEqual_HighDigitIntInt = NULL;

	if ( ! pFnSubtractEqual_HighDigitIntInt )
		pFnSubtractEqual_HighDigitIntInt = (UFunction*) UObject::GObjObjects()->Data[ 1578 ];

	UObject_execSubtractEqual_HighDigitIntInt_Parms SubtractEqual_HighDigitIntInt_Parms;
	SubtractEqual_HighDigitIntInt_Parms.B = B;

	this->ProcessEvent ( pFnSubtractEqual_HighDigitIntInt, &SubtractEqual_HighDigitIntInt_Parms, NULL );

	if ( A )
		memcpy ( A, &SubtractEqual_HighDigitIntInt_Parms.A, 0x10 );

	return SubtractEqual_HighDigitIntInt_Parms.ReturnValue;
};

// Function Core.Object.Subtract_HighDigitIntInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// struct FHighDigitInt           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

struct FHighDigitInt UObject::Subtract_HighDigitIntInt ( struct FHighDigitInt A, int B )
{
	static UFunction* pFnSubtract_HighDigitIntInt = NULL;

	if ( ! pFnSubtract_HighDigitIntInt )
		pFnSubtract_HighDigitIntInt = (UFunction*) UObject::GObjObjects()->Data[ 1582 ];

	UObject_execSubtract_HighDigitIntInt_Parms Subtract_HighDigitIntInt_Parms;
	memcpy ( &Subtract_HighDigitIntInt_Parms.A, &A, 0x10 );
	Subtract_HighDigitIntInt_Parms.B = B;

	this->ProcessEvent ( pFnSubtract_HighDigitIntInt, &Subtract_HighDigitIntInt_Parms, NULL );

	return Subtract_HighDigitIntInt_Parms.ReturnValue;
};

// Function Core.Object.Subtract_IntHighDigitInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// struct FHighDigitInt           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// struct FHighDigitInt           B                              ( CPF_Parm )

struct FHighDigitInt UObject::Subtract_IntHighDigitInt ( int A, struct FHighDigitInt B )
{
	static UFunction* pFnSubtract_IntHighDigitInt = NULL;

	if ( ! pFnSubtract_IntHighDigitInt )
		pFnSubtract_IntHighDigitInt = (UFunction*) UObject::GObjObjects()->Data[ 1586 ];

	UObject_execSubtract_IntHighDigitInt_Parms Subtract_IntHighDigitInt_Parms;
	Subtract_IntHighDigitInt_Parms.A = A;
	memcpy ( &Subtract_IntHighDigitInt_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnSubtract_IntHighDigitInt, &Subtract_IntHighDigitInt_Parms, NULL );

	return Subtract_IntHighDigitInt_Parms.ReturnValue;
};

// Function Core.Object.AddEqual_HighDigitIntHighDigitInt
// [0x00423003] ( FUNC_Final )
// Parameters infos:
// struct FHighDigitInt           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           B                              ( CPF_Parm )
// struct FHighDigitInt           A                              ( CPF_Parm | CPF_OutParm )

struct FHighDigitInt UObject::AddEqual_HighDigitIntHighDigitInt ( struct FHighDigitInt B, struct FHighDigitInt* A )
{
	static UFunction* pFnAddEqual_HighDigitIntHighDigitInt = NULL;

	if ( ! pFnAddEqual_HighDigitIntHighDigitInt )
		pFnAddEqual_HighDigitIntHighDigitInt = (UFunction*) UObject::GObjObjects()->Data[ 1590 ];

	UObject_execAddEqual_HighDigitIntHighDigitInt_Parms AddEqual_HighDigitIntHighDigitInt_Parms;
	memcpy ( &AddEqual_HighDigitIntHighDigitInt_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnAddEqual_HighDigitIntHighDigitInt, &AddEqual_HighDigitIntHighDigitInt_Parms, NULL );

	if ( A )
		memcpy ( A, &AddEqual_HighDigitIntHighDigitInt_Parms.A, 0x10 );

	return AddEqual_HighDigitIntHighDigitInt_Parms.ReturnValue;
};

// Function Core.Object.AddEqual_HighDigitIntInt
// [0x00423003] ( FUNC_Final )
// Parameters infos:
// struct FHighDigitInt           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            B                              ( CPF_Parm )
// struct FHighDigitInt           A                              ( CPF_Parm | CPF_OutParm )

struct FHighDigitInt UObject::AddEqual_HighDigitIntInt ( int B, struct FHighDigitInt* A )
{
	static UFunction* pFnAddEqual_HighDigitIntInt = NULL;

	if ( ! pFnAddEqual_HighDigitIntInt )
		pFnAddEqual_HighDigitIntInt = (UFunction*) UObject::GObjObjects()->Data[ 1594 ];

	UObject_execAddEqual_HighDigitIntInt_Parms AddEqual_HighDigitIntInt_Parms;
	AddEqual_HighDigitIntInt_Parms.B = B;

	this->ProcessEvent ( pFnAddEqual_HighDigitIntInt, &AddEqual_HighDigitIntInt_Parms, NULL );

	if ( A )
		memcpy ( A, &AddEqual_HighDigitIntInt_Parms.A, 0x10 );

	return AddEqual_HighDigitIntInt_Parms.ReturnValue;
};

// Function Core.Object.Add_HighDigitIntInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// struct FHighDigitInt           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FHighDigitInt           A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

struct FHighDigitInt UObject::Add_HighDigitIntInt ( struct FHighDigitInt A, int B )
{
	static UFunction* pFnAdd_HighDigitIntInt = NULL;

	if ( ! pFnAdd_HighDigitIntInt )
		pFnAdd_HighDigitIntInt = (UFunction*) UObject::GObjObjects()->Data[ 1598 ];

	UObject_execAdd_HighDigitIntInt_Parms Add_HighDigitIntInt_Parms;
	memcpy ( &Add_HighDigitIntInt_Parms.A, &A, 0x10 );
	Add_HighDigitIntInt_Parms.B = B;

	this->ProcessEvent ( pFnAdd_HighDigitIntInt, &Add_HighDigitIntInt_Parms, NULL );

	return Add_HighDigitIntInt_Parms.ReturnValue;
};

// Function Core.Object.Add_IntHighDigitInt
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// struct FHighDigitInt           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// struct FHighDigitInt           B                              ( CPF_Parm )

struct FHighDigitInt UObject::Add_IntHighDigitInt ( int A, struct FHighDigitInt B )
{
	static UFunction* pFnAdd_IntHighDigitInt = NULL;

	if ( ! pFnAdd_IntHighDigitInt )
		pFnAdd_IntHighDigitInt = (UFunction*) UObject::GObjObjects()->Data[ 1602 ];

	UObject_execAdd_IntHighDigitInt_Parms Add_IntHighDigitInt_Parms;
	Add_IntHighDigitInt_Parms.A = A;
	memcpy ( &Add_IntHighDigitInt_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnAdd_IntHighDigitInt, &Add_IntHighDigitInt_Parms, NULL );

	return Add_IntHighDigitInt_Parms.ReturnValue;
};

// Function Core.Object.IsTemplate
// [0x00020401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UObject::IsTemplate ( )
{
	static UFunction* pFnIsTemplate = NULL;

	if ( ! pFnIsTemplate )
		pFnIsTemplate = (UFunction*) UObject::GObjObjects()->Data[ 1611 ];

	UObject_execIsTemplate_Parms IsTemplate_Parms;

	this->ProcessEvent ( pFnIsTemplate, &IsTemplate_Parms, NULL );

	return IsTemplate_Parms.ReturnValue;
};

// Function Core.Object.IsDefaultObject
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 anObject                       ( CPF_Parm )

bool UObject::IsDefaultObject ( class UObject* anObject )
{
	static UFunction* pFnIsDefaultObject = NULL;

	if ( ! pFnIsDefaultObject )
		pFnIsDefaultObject = (UFunction*) UObject::GObjObjects()->Data[ 1612 ];

	UObject_execIsDefaultObject_Parms IsDefaultObject_Parms;
	IsDefaultObject_Parms.anObject = anObject;

	this->ProcessEvent ( pFnIsDefaultObject, &IsDefaultObject_Parms, NULL );

	return IsDefaultObject_Parms.ReturnValue;
};

// Function Core.Object.GetBaseArchetype
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class UObject*                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UObject* UObject::GetBaseArchetype ( )
{
	static UFunction* pFnGetBaseArchetype = NULL;

	if ( ! pFnGetBaseArchetype )
		pFnGetBaseArchetype = (UFunction*) UObject::GObjObjects()->Data[ 1614 ];

	UObject_execGetBaseArchetype_Parms GetBaseArchetype_Parms;

	this->ProcessEvent ( pFnGetBaseArchetype, &GetBaseArchetype_Parms, NULL );

	return GetBaseArchetype_Parms.ReturnValue;
};

// Function Core.Object.IsInteger
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          val                            ( CPF_Parm )

bool UObject::IsInteger ( float val )
{
	static UFunction* pFnIsInteger = NULL;

	if ( ! pFnIsInteger )
		pFnIsInteger = (UFunction*) UObject::GObjObjects()->Data[ 1617 ];

	UObject_execIsInteger_Parms IsInteger_Parms;
	IsInteger_Parms.val = val;

	this->ProcessEvent ( pFnIsInteger, &IsInteger_Parms, NULL );

	return IsInteger_Parms.ReturnValue;
};

// Function Core.Object.SignedIntFromByteInt
// [0x00022002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            val                            ( CPF_Parm )

int UObject::SignedIntFromByteInt ( int val )
{
	static UFunction* pFnSignedIntFromByteInt = NULL;

	if ( ! pFnSignedIntFromByteInt )
		pFnSignedIntFromByteInt = (UFunction*) UObject::GObjObjects()->Data[ 1621 ];

	UObject_execSignedIntFromByteInt_Parms SignedIntFromByteInt_Parms;
	SignedIntFromByteInt_Parms.val = val;

	this->ProcessEvent ( pFnSignedIntFromByteInt, &SignedIntFromByteInt_Parms, NULL );

	return SignedIntFromByteInt_Parms.ReturnValue;
};

// Function Core.Object.SignedIntToByteInt
// [0x00022002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            val                            ( CPF_Parm )

int UObject::SignedIntToByteInt ( int val )
{
	static UFunction* pFnSignedIntToByteInt = NULL;

	if ( ! pFnSignedIntToByteInt )
		pFnSignedIntToByteInt = (UFunction*) UObject::GObjObjects()->Data[ 1624 ];

	UObject_execSignedIntToByteInt_Parms SignedIntToByteInt_Parms;
	SignedIntToByteInt_Parms.val = val;

	this->ProcessEvent ( pFnSignedIntToByteInt, &SignedIntToByteInt_Parms, NULL );

	return SignedIntToByteInt_Parms.ReturnValue;
};

// Function Core.Object.SignedIntFromByte
// [0x00022002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  val                            ( CPF_Parm )

int UObject::SignedIntFromByte ( unsigned char val )
{
	static UFunction* pFnSignedIntFromByte = NULL;

	if ( ! pFnSignedIntFromByte )
		pFnSignedIntFromByte = (UFunction*) UObject::GObjObjects()->Data[ 1627 ];

	UObject_execSignedIntFromByte_Parms SignedIntFromByte_Parms;
	SignedIntFromByte_Parms.val = val;

	this->ProcessEvent ( pFnSignedIntFromByte, &SignedIntFromByte_Parms, NULL );

	return SignedIntFromByte_Parms.ReturnValue;
};

// Function Core.Object.SignedIntToByte
// [0x00022002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            val                            ( CPF_Parm )

unsigned char UObject::SignedIntToByte ( int val )
{
	static UFunction* pFnSignedIntToByte = NULL;

	if ( ! pFnSignedIntToByte )
		pFnSignedIntToByte = (UFunction*) UObject::GObjObjects()->Data[ 1630 ];

	UObject_execSignedIntToByte_Parms SignedIntToByte_Parms;
	SignedIntToByte_Parms.val = val;

	this->ProcessEvent ( pFnSignedIntToByte, &SignedIntToByte_Parms, NULL );

	return SignedIntToByte_Parms.ReturnValue;
};

// Function Core.Object.LinearColorExp
// [0x00022002] 
// Parameters infos:
// struct FLinearColor            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FLinearColor            col1                           ( CPF_Parm )
// float                          tExp                           ( CPF_Parm )

struct FLinearColor UObject::LinearColorExp ( struct FLinearColor col1, float tExp )
{
	static UFunction* pFnLinearColorExp = NULL;

	if ( ! pFnLinearColorExp )
		pFnLinearColorExp = (UFunction*) UObject::GObjObjects()->Data[ 1633 ];

	UObject_execLinearColorExp_Parms LinearColorExp_Parms;
	memcpy ( &LinearColorExp_Parms.col1, &col1, 0x10 );
	LinearColorExp_Parms.tExp = tExp;

	this->ProcessEvent ( pFnLinearColorExp, &LinearColorExp_Parms, NULL );

	return LinearColorExp_Parms.ReturnValue;
};

// Function Core.Object.LinearColorMult
// [0x00022002] 
// Parameters infos:
// struct FLinearColor            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FLinearColor            col1                           ( CPF_Parm )
// struct FLinearColor            col2                           ( CPF_Parm )

struct FLinearColor UObject::LinearColorMult ( struct FLinearColor col1, struct FLinearColor col2 )
{
	static UFunction* pFnLinearColorMult = NULL;

	if ( ! pFnLinearColorMult )
		pFnLinearColorMult = (UFunction*) UObject::GObjObjects()->Data[ 1636 ];

	UObject_execLinearColorMult_Parms LinearColorMult_Parms;
	memcpy ( &LinearColorMult_Parms.col1, &col1, 0x10 );
	memcpy ( &LinearColorMult_Parms.col2, &col2, 0x10 );

	this->ProcessEvent ( pFnLinearColorMult, &LinearColorMult_Parms, NULL );

	return LinearColorMult_Parms.ReturnValue;
};

// Function Core.Object.LinearColorAddAndNormalize
// [0x00826002] 
// Parameters infos:
// struct FLinearColor            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FLinearColor            col1                           ( CPF_Parm )
// struct FLinearColor            col2                           ( CPF_Parm )
// float                          extraMult                      ( CPF_OptionalParm | CPF_Parm )

struct FLinearColor UObject::LinearColorAddAndNormalize ( struct FLinearColor col1, struct FLinearColor col2, float extraMult )
{
	static UFunction* pFnLinearColorAddAndNormalize = NULL;

	if ( ! pFnLinearColorAddAndNormalize )
		pFnLinearColorAddAndNormalize = (UFunction*) UObject::GObjObjects()->Data[ 1646 ];

	UObject_execLinearColorAddAndNormalize_Parms LinearColorAddAndNormalize_Parms;
	memcpy ( &LinearColorAddAndNormalize_Parms.col1, &col1, 0x10 );
	memcpy ( &LinearColorAddAndNormalize_Parms.col2, &col2, 0x10 );
	LinearColorAddAndNormalize_Parms.extraMult = extraMult;

	this->ProcessEvent ( pFnLinearColorAddAndNormalize, &LinearColorAddAndNormalize_Parms, NULL );

	return LinearColorAddAndNormalize_Parms.ReturnValue;
};

// Function Core.Object.LinearColorAdd
// [0x00022002] 
// Parameters infos:
// struct FLinearColor            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FLinearColor            col1                           ( CPF_Parm )
// struct FLinearColor            col2                           ( CPF_Parm )

struct FLinearColor UObject::LinearColorAdd ( struct FLinearColor col1, struct FLinearColor col2 )
{
	static UFunction* pFnLinearColorAdd = NULL;

	if ( ! pFnLinearColorAdd )
		pFnLinearColorAdd = (UFunction*) UObject::GObjObjects()->Data[ 1650 ];

	UObject_execLinearColorAdd_Parms LinearColorAdd_Parms;
	memcpy ( &LinearColorAdd_Parms.col1, &col1, 0x10 );
	memcpy ( &LinearColorAdd_Parms.col2, &col2, 0x10 );

	this->ProcessEvent ( pFnLinearColorAdd, &LinearColorAdd_Parms, NULL );

	return LinearColorAdd_Parms.ReturnValue;
};

// Function Core.Object.ColorAdd
// [0x00822002] 
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FColor                  color1                         ( CPF_Parm )
// struct FColor                  color2                         ( CPF_Parm )

struct FColor UObject::ColorAdd ( struct FColor color1, struct FColor color2 )
{
	static UFunction* pFnColorAdd = NULL;

	if ( ! pFnColorAdd )
		pFnColorAdd = (UFunction*) UObject::GObjObjects()->Data[ 1663 ];

	UObject_execColorAdd_Parms ColorAdd_Parms;
	memcpy ( &ColorAdd_Parms.color1, &color1, 0x4 );
	memcpy ( &ColorAdd_Parms.color2, &color2, 0x4 );

	this->ProcessEvent ( pFnColorAdd, &ColorAdd_Parms, NULL );

	return ColorAdd_Parms.ReturnValue;
};

// Function Core.Object.ColorMult
// [0x00022002] 
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FColor                  color1                         ( CPF_Parm )
// struct FColor                  color2                         ( CPF_Parm )

struct FColor UObject::ColorMult ( struct FColor color1, struct FColor color2 )
{
	static UFunction* pFnColorMult = NULL;

	if ( ! pFnColorMult )
		pFnColorMult = (UFunction*) UObject::GObjObjects()->Data[ 1667 ];

	UObject_execColorMult_Parms ColorMult_Parms;
	memcpy ( &ColorMult_Parms.color1, &color1, 0x4 );
	memcpy ( &ColorMult_Parms.color2, &color2, 0x4 );

	this->ProcessEvent ( pFnColorMult, &ColorMult_Parms, NULL );

	return ColorMult_Parms.ReturnValue;
};

// Function Core.Object.SignedRaiseToPower
// [0x00022002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Base                           ( CPF_Parm )
// float                          power                          ( CPF_Parm )

float UObject::SignedRaiseToPower ( float Base, float power )
{
	static UFunction* pFnSignedRaiseToPower = NULL;

	if ( ! pFnSignedRaiseToPower )
		pFnSignedRaiseToPower = (UFunction*) UObject::GObjObjects()->Data[ 1678 ];

	UObject_execSignedRaiseToPower_Parms SignedRaiseToPower_Parms;
	SignedRaiseToPower_Parms.Base = Base;
	SignedRaiseToPower_Parms.power = power;

	this->ProcessEvent ( pFnSignedRaiseToPower, &SignedRaiseToPower_Parms, NULL );

	return SignedRaiseToPower_Parms.ReturnValue;
};

// Function Core.Object.ConvertSecondsToTimeString
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            TotalTimeInSeconds             ( CPF_Parm )

struct FString UObject::ConvertSecondsToTimeString ( int TotalTimeInSeconds )
{
	static UFunction* pFnConvertSecondsToTimeString = NULL;

	if ( ! pFnConvertSecondsToTimeString )
		pFnConvertSecondsToTimeString = (UFunction*) UObject::GObjObjects()->Data[ 1682 ];

	UObject_execConvertSecondsToTimeString_Parms ConvertSecondsToTimeString_Parms;
	ConvertSecondsToTimeString_Parms.TotalTimeInSeconds = TotalTimeInSeconds;

	this->ProcessEvent ( pFnConvertSecondsToTimeString, &ConvertSecondsToTimeString_Parms, NULL );

	return ConvertSecondsToTimeString_Parms.ReturnValue;
};

// Function Core.Object.GetSignedString
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Value                          ( CPF_Parm )

struct FString UObject::GetSignedString ( int Value )
{
	static UFunction* pFnGetSignedString = NULL;

	if ( ! pFnGetSignedString )
		pFnGetSignedString = (UFunction*) UObject::GObjObjects()->Data[ 1687 ];

	UObject_execGetSignedString_Parms GetSignedString_Parms;
	GetSignedString_Parms.Value = Value;

	this->ProcessEvent ( pFnGetSignedString, &GetSignedString_Parms, NULL );

	return GetSignedString_Parms.ReturnValue;
};

// Function Core.Object.ChooseVectorComponents
// [0x00822102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 V                              ( CPF_Parm )
// unsigned long                  includeX                       ( CPF_Parm )
// unsigned long                  includeY                       ( CPF_Parm )
// unsigned long                  includeZ                       ( CPF_Parm )

struct FVector UObject::ChooseVectorComponents ( struct FVector V, unsigned long includeX, unsigned long includeY, unsigned long includeZ )
{
	static UFunction* pFnChooseVectorComponents = NULL;

	if ( ! pFnChooseVectorComponents )
		pFnChooseVectorComponents = (UFunction*) UObject::GObjObjects()->Data[ 1694 ];

	UObject_execChooseVectorComponents_Parms ChooseVectorComponents_Parms;
	memcpy ( &ChooseVectorComponents_Parms.V, &V, 0xC );
	ChooseVectorComponents_Parms.includeX = includeX;
	ChooseVectorComponents_Parms.includeY = includeY;
	ChooseVectorComponents_Parms.includeZ = includeZ;

	this->ProcessEvent ( pFnChooseVectorComponents, &ChooseVectorComponents_Parms, NULL );

	return ChooseVectorComponents_Parms.ReturnValue;
};

// Function Core.Object.ShortestDistanceBetweenAngles
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          ang1                           ( CPF_Parm )
// float                          ang2                           ( CPF_Parm )

float UObject::ShortestDistanceBetweenAngles ( float ang1, float ang2 )
{
	static UFunction* pFnShortestDistanceBetweenAngles = NULL;

	if ( ! pFnShortestDistanceBetweenAngles )
		pFnShortestDistanceBetweenAngles = (UFunction*) UObject::GObjObjects()->Data[ 1697 ];

	UObject_execShortestDistanceBetweenAngles_Parms ShortestDistanceBetweenAngles_Parms;
	ShortestDistanceBetweenAngles_Parms.ang1 = ang1;
	ShortestDistanceBetweenAngles_Parms.ang2 = ang2;

	this->ProcessEvent ( pFnShortestDistanceBetweenAngles, &ShortestDistanceBetweenAngles_Parms, NULL );

	return ShortestDistanceBetweenAngles_Parms.ReturnValue;
};

// Function Core.Object.CalculateAngleOf2DVector
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          XComp                          ( CPF_Parm )
// float                          YComp                          ( CPF_Parm )

float UObject::CalculateAngleOf2DVector ( float XComp, float YComp )
{
	static UFunction* pFnCalculateAngleOf2DVector = NULL;

	if ( ! pFnCalculateAngleOf2DVector )
		pFnCalculateAngleOf2DVector = (UFunction*) UObject::GObjObjects()->Data[ 1704 ];

	UObject_execCalculateAngleOf2DVector_Parms CalculateAngleOf2DVector_Parms;
	CalculateAngleOf2DVector_Parms.XComp = XComp;
	CalculateAngleOf2DVector_Parms.YComp = YComp;

	this->ProcessEvent ( pFnCalculateAngleOf2DVector, &CalculateAngleOf2DVector_Parms, NULL );

	return CalculateAngleOf2DVector_Parms.ReturnValue;
};

// Function Core.Object.FRandSigned
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UObject::FRandSigned ( )
{
	static UFunction* pFnFRandSigned = NULL;

	if ( ! pFnFRandSigned )
		pFnFRandSigned = (UFunction*) UObject::GObjObjects()->Data[ 1708 ];

	UObject_execFRandSigned_Parms FRandSigned_Parms;

	this->ProcessEvent ( pFnFRandSigned, &FRandSigned_Parms, NULL );

	return FRandSigned_Parms.ReturnValue;
};

// Function Core.Object.FLerp
// [0x00026003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Min                            ( CPF_Parm )
// float                          Max                            ( CPF_Parm )
// float                          Percent                        ( CPF_Parm )
// unsigned long                  ClampToMin                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  ClampToMax                     ( CPF_OptionalParm | CPF_Parm )

float UObject::FLerp ( float Min, float Max, float Percent, unsigned long ClampToMin, unsigned long ClampToMax )
{
	static UFunction* pFnFLerp = NULL;

	if ( ! pFnFLerp )
		pFnFLerp = (UFunction*) UObject::GObjObjects()->Data[ 1714 ];

	UObject_execFLerp_Parms FLerp_Parms;
	FLerp_Parms.Min = Min;
	FLerp_Parms.Max = Max;
	FLerp_Parms.Percent = Percent;
	FLerp_Parms.ClampToMin = ClampToMin;
	FLerp_Parms.ClampToMax = ClampToMax;

	this->ProcessEvent ( pFnFLerp, &FLerp_Parms, NULL );

	return FLerp_Parms.ReturnValue;
};

// Function Core.Object.FixDLLString
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Text                           ( CPF_Parm | CPF_NeedCtorLink )

struct FString UObject::FixDLLString ( struct FString Text )
{
	static UFunction* pFnFixDLLString = NULL;

	if ( ! pFnFixDLLString )
		pFnFixDLLString = (UFunction*) UObject::GObjObjects()->Data[ 1716 ];

	UObject_execFixDLLString_Parms FixDLLString_Parms;
	memcpy ( &FixDLLString_Parms.Text, &Text, 0xC );

	this->ProcessEvent ( pFnFixDLLString, &FixDLLString_Parms, NULL );

	return FixDLLString_Parms.ReturnValue;
};

// Function Core.Object.Trim
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Text                           ( CPF_Parm | CPF_NeedCtorLink )

struct FString UObject::Trim ( struct FString Text )
{
	static UFunction* pFnTrim = NULL;

	if ( ! pFnTrim )
		pFnTrim = (UFunction*) UObject::GObjObjects()->Data[ 1392 ];

	UObject_execTrim_Parms Trim_Parms;
	memcpy ( &Trim_Parms.Text, &Text, 0xC );

	this->ProcessEvent ( pFnTrim, &Trim_Parms, NULL );

	return Trim_Parms.ReturnValue;
};

// Function Core.Object.TrimLeft
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Text                           ( CPF_Parm | CPF_NeedCtorLink )

struct FString UObject::TrimLeft ( struct FString Text )
{
	static UFunction* pFnTrimLeft = NULL;

	if ( ! pFnTrimLeft )
		pFnTrimLeft = (UFunction*) UObject::GObjObjects()->Data[ 1725 ];

	UObject_execTrimLeft_Parms TrimLeft_Parms;
	memcpy ( &TrimLeft_Parms.Text, &Text, 0xC );

	this->ProcessEvent ( pFnTrimLeft, &TrimLeft_Parms, NULL );

	return TrimLeft_Parms.ReturnValue;
};

// Function Core.Object.TrimRight
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Text                           ( CPF_Parm | CPF_NeedCtorLink )

struct FString UObject::TrimRight ( struct FString Text )
{
	static UFunction* pFnTrimRight = NULL;

	if ( ! pFnTrimRight )
		pFnTrimRight = (UFunction*) UObject::GObjObjects()->Data[ 1727 ];

	UObject_execTrimRight_Parms TrimRight_Parms;
	memcpy ( &TrimRight_Parms.Text, &Text, 0xC );

	this->ProcessEvent ( pFnTrimRight, &TrimRight_Parms, NULL );

	return TrimRight_Parms.ReturnValue;
};

// Function Core.Object.VariableLinearColorToVector
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FLinearColor            col                            ( CPF_Parm )

struct FVector UObject::VariableLinearColorToVector ( struct FLinearColor col )
{
	static UFunction* pFnVariableLinearColorToVector = NULL;

	if ( ! pFnVariableLinearColorToVector )
		pFnVariableLinearColorToVector = (UFunction*) UObject::GObjObjects()->Data[ 1740 ];

	UObject_execVariableLinearColorToVector_Parms VariableLinearColorToVector_Parms;
	memcpy ( &VariableLinearColorToVector_Parms.col, &col, 0x10 );

	this->ProcessEvent ( pFnVariableLinearColorToVector, &VariableLinearColorToVector_Parms, NULL );

	return VariableLinearColorToVector_Parms.ReturnValue;
};

// Function Core.Object.LinearColorToVector
// [0x00422003] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FLinearColor            col                            ( CPF_Const | CPF_Parm | CPF_OutParm )

struct FVector UObject::LinearColorToVector ( struct FLinearColor* col )
{
	static UFunction* pFnLinearColorToVector = NULL;

	if ( ! pFnLinearColorToVector )
		pFnLinearColorToVector = (UFunction*) UObject::GObjObjects()->Data[ 1741 ];

	UObject_execLinearColorToVector_Parms LinearColorToVector_Parms;

	this->ProcessEvent ( pFnLinearColorToVector, &LinearColorToVector_Parms, NULL );

	if ( col )
		memcpy ( col, &LinearColorToVector_Parms.col, 0x10 );

	return LinearColorToVector_Parms.ReturnValue;
};

// Function Core.Object.ToRotator
// [0x00822003] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Yaw                            ( CPF_Parm )
// int                            Pitch                          ( CPF_Parm )
// int                            Roll                           ( CPF_Parm )

struct FRotator UObject::ToRotator ( int Yaw, int Pitch, int Roll )
{
	static UFunction* pFnToRotator = NULL;

	if ( ! pFnToRotator )
		pFnToRotator = (UFunction*) UObject::GObjObjects()->Data[ 1745 ];

	UObject_execToRotator_Parms ToRotator_Parms;
	ToRotator_Parms.Yaw = Yaw;
	ToRotator_Parms.Pitch = Pitch;
	ToRotator_Parms.Roll = Roll;

	this->ProcessEvent ( pFnToRotator, &ToRotator_Parms, NULL );

	return ToRotator_Parms.ReturnValue;
};

// Function Core.Object.ToVector2D
// [0x00822003] ( FUNC_Final )
// Parameters infos:
// struct FVector2D               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )

struct FVector2D UObject::ToVector2D ( float X, float Y )
{
	static UFunction* pFnToVector2D = NULL;

	if ( ! pFnToVector2D )
		pFnToVector2D = (UFunction*) UObject::GObjObjects()->Data[ 1748 ];

	UObject_execToVector2D_Parms ToVector2D_Parms;
	ToVector2D_Parms.X = X;
	ToVector2D_Parms.Y = Y;

	this->ProcessEvent ( pFnToVector2D, &ToVector2D_Parms, NULL );

	return ToVector2D_Parms.ReturnValue;
};

// Function Core.Object.ToVector
// [0x00822103] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          Z                              ( CPF_Parm )

struct FVector UObject::ToVector ( float X, float Y, float Z )
{
	static UFunction* pFnToVector = NULL;

	if ( ! pFnToVector )
		pFnToVector = (UFunction*) UObject::GObjObjects()->Data[ 1743 ];

	UObject_execToVector_Parms ToVector_Parms;
	ToVector_Parms.X = X;
	ToVector_Parms.Y = Y;
	ToVector_Parms.Z = Z;

	this->ProcessEvent ( pFnToVector, &ToVector_Parms, NULL );

	return ToVector_Parms.ReturnValue;
};

// Function Core.Object.ColorScale
// [0x00026003] ( FUNC_Final )
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FColor                  col                            ( CPF_Parm )
// float                          Scale                          ( CPF_Parm )
// unsigned long                  ScaleAlpha                     ( CPF_OptionalParm | CPF_Parm )

struct FColor UObject::ColorScale ( struct FColor col, float Scale, unsigned long ScaleAlpha )
{
	static UFunction* pFnColorScale = NULL;

	if ( ! pFnColorScale )
		pFnColorScale = (UFunction*) UObject::GObjObjects()->Data[ 1767 ];

	UObject_execColorScale_Parms ColorScale_Parms;
	memcpy ( &ColorScale_Parms.col, &col, 0x4 );
	ColorScale_Parms.Scale = Scale;
	ColorScale_Parms.ScaleAlpha = ScaleAlpha;

	this->ProcessEvent ( pFnColorScale, &ColorScale_Parms, NULL );

	return ColorScale_Parms.ReturnValue;
};

// Function Core.Object.ColorScaleAlpha_Simulated
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FColor                  col                            ( CPF_Parm )
// float                          Alpha                          ( CPF_Parm )

struct FColor UObject::ColorScaleAlpha_Simulated ( struct FColor col, float Alpha )
{
	static UFunction* pFnColorScaleAlpha_Simulated = NULL;

	if ( ! pFnColorScaleAlpha_Simulated )
		pFnColorScaleAlpha_Simulated = (UFunction*) UObject::GObjObjects()->Data[ 1773 ];

	UObject_execColorScaleAlpha_Simulated_Parms ColorScaleAlpha_Simulated_Parms;
	memcpy ( &ColorScaleAlpha_Simulated_Parms.col, &col, 0x4 );
	ColorScaleAlpha_Simulated_Parms.Alpha = Alpha;

	this->ProcessEvent ( pFnColorScaleAlpha_Simulated, &ColorScaleAlpha_Simulated_Parms, NULL );

	return ColorScaleAlpha_Simulated_Parms.ReturnValue;
};

// Function Core.Object.ColorScaleAlpha
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FColor                  col                            ( CPF_Parm )
// float                          Alpha                          ( CPF_Parm )

struct FColor UObject::ColorScaleAlpha ( struct FColor col, float Alpha )
{
	static UFunction* pFnColorScaleAlpha = NULL;

	if ( ! pFnColorScaleAlpha )
		pFnColorScaleAlpha = (UFunction*) UObject::GObjObjects()->Data[ 1778 ];

	UObject_execColorScaleAlpha_Parms ColorScaleAlpha_Parms;
	memcpy ( &ColorScaleAlpha_Parms.col, &col, 0x4 );
	ColorScaleAlpha_Parms.Alpha = Alpha;

	this->ProcessEvent ( pFnColorScaleAlpha, &ColorScaleAlpha_Parms, NULL );

	return ColorScaleAlpha_Parms.ReturnValue;
};

// Function Core.Object.LinColorScaleAlpha
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// struct FLinearColor            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FLinearColor            col                            ( CPF_Parm )
// float                          Alpha                          ( CPF_Parm )

struct FLinearColor UObject::LinColorScaleAlpha ( struct FLinearColor col, float Alpha )
{
	static UFunction* pFnLinColorScaleAlpha = NULL;

	if ( ! pFnLinColorScaleAlpha )
		pFnLinColorScaleAlpha = (UFunction*) UObject::GObjObjects()->Data[ 1782 ];

	UObject_execLinColorScaleAlpha_Parms LinColorScaleAlpha_Parms;
	memcpy ( &LinColorScaleAlpha_Parms.col, &col, 0x10 );
	LinColorScaleAlpha_Parms.Alpha = Alpha;

	this->ProcessEvent ( pFnLinColorScaleAlpha, &LinColorScaleAlpha_Parms, NULL );

	return LinColorScaleAlpha_Parms.ReturnValue;
};

// Function Core.Object.VectorToColorDD
// [0x00822003] ( FUNC_Final )
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 vCol                           ( CPF_Parm )

struct FColor UObject::VectorToColorDD ( struct FVector vCol )
{
	static UFunction* pFnVectorToColorDD = NULL;

	if ( ! pFnVectorToColorDD )
		pFnVectorToColorDD = (UFunction*) UObject::GObjObjects()->Data[ 1786 ];

	UObject_execVectorToColorDD_Parms VectorToColorDD_Parms;
	memcpy ( &VectorToColorDD_Parms.vCol, &vCol, 0xC );

	this->ProcessEvent ( pFnVectorToColorDD, &VectorToColorDD_Parms, NULL );

	return VectorToColorDD_Parms.ReturnValue;
};

// Function Core.Object.LinearColorToColorDD
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FLinearColor            lCol                           ( CPF_Parm )

struct FColor UObject::LinearColorToColorDD ( struct FLinearColor lCol )
{
	static UFunction* pFnLinearColorToColorDD = NULL;

	if ( ! pFnLinearColorToColorDD )
		pFnLinearColorToColorDD = (UFunction*) UObject::GObjObjects()->Data[ 1790 ];

	UObject_execLinearColorToColorDD_Parms LinearColorToColorDD_Parms;
	memcpy ( &LinearColorToColorDD_Parms.lCol, &lCol, 0x10 );

	this->ProcessEvent ( pFnLinearColorToColorDD, &LinearColorToColorDD_Parms, NULL );

	return LinearColorToColorDD_Parms.ReturnValue;
};

// Function Core.Object.ColorLerp
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FColor                  A                              ( CPF_Parm )
// struct FColor                  B                              ( CPF_Parm )
// float                          Lerp                           ( CPF_Parm )

struct FColor UObject::ColorLerp ( struct FColor A, struct FColor B, float Lerp )
{
	static UFunction* pFnColorLerp = NULL;

	if ( ! pFnColorLerp )
		pFnColorLerp = (UFunction*) UObject::GObjObjects()->Data[ 1794 ];

	UObject_execColorLerp_Parms ColorLerp_Parms;
	memcpy ( &ColorLerp_Parms.A, &A, 0x4 );
	memcpy ( &ColorLerp_Parms.B, &B, 0x4 );
	ColorLerp_Parms.Lerp = Lerp;

	this->ProcessEvent ( pFnColorLerp, &ColorLerp_Parms, NULL );

	return ColorLerp_Parms.ReturnValue;
};

// Function Core.Object.LinearColorLerp
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FLinearColor            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FLinearColor            A                              ( CPF_Parm )
// struct FLinearColor            B                              ( CPF_Parm )
// float                          Lerp                           ( CPF_Parm )

struct FLinearColor UObject::LinearColorLerp ( struct FLinearColor A, struct FLinearColor B, float Lerp )
{
	static UFunction* pFnLinearColorLerp = NULL;

	if ( ! pFnLinearColorLerp )
		pFnLinearColorLerp = (UFunction*) UObject::GObjObjects()->Data[ 1797 ];

	UObject_execLinearColorLerp_Parms LinearColorLerp_Parms;
	memcpy ( &LinearColorLerp_Parms.A, &A, 0x10 );
	memcpy ( &LinearColorLerp_Parms.B, &B, 0x10 );
	LinearColorLerp_Parms.Lerp = Lerp;

	this->ProcessEvent ( pFnLinearColorLerp, &LinearColorLerp_Parms, NULL );

	return LinearColorLerp_Parms.ReturnValue;
};

// Function Core.Object.ToLinearColor
// [0x00826003] ( FUNC_Final )
// Parameters infos:
// struct FLinearColor            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          R                              ( CPF_Parm )
// float                          G                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )
// float                          A                              ( CPF_OptionalParm | CPF_Parm )

struct FLinearColor UObject::ToLinearColor ( float R, float G, float B, float A )
{
	static UFunction* pFnToLinearColor = NULL;

	if ( ! pFnToLinearColor )
		pFnToLinearColor = (UFunction*) UObject::GObjObjects()->Data[ 1660 ];

	UObject_execToLinearColor_Parms ToLinearColor_Parms;
	ToLinearColor_Parms.R = R;
	ToLinearColor_Parms.G = G;
	ToLinearColor_Parms.B = B;
	ToLinearColor_Parms.A = A;

	this->ProcessEvent ( pFnToLinearColor, &ToLinearColor_Parms, NULL );

	return ToLinearColor_Parms.ReturnValue;
};

// Function Core.Object.ClampedYawLookTowardsAngle
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                Start                          ( CPF_Parm )
// struct FRotator                Dest                           ( CPF_Parm )
// float                          clampYawDeg                    ( CPF_Parm )

struct FRotator UObject::ClampedYawLookTowardsAngle ( struct FRotator Start, struct FRotator Dest, float clampYawDeg )
{
	static UFunction* pFnClampedYawLookTowardsAngle = NULL;

	if ( ! pFnClampedYawLookTowardsAngle )
		pFnClampedYawLookTowardsAngle = (UFunction*) UObject::GObjObjects()->Data[ 1806 ];

	UObject_execClampedYawLookTowardsAngle_Parms ClampedYawLookTowardsAngle_Parms;
	memcpy ( &ClampedYawLookTowardsAngle_Parms.Start, &Start, 0xC );
	memcpy ( &ClampedYawLookTowardsAngle_Parms.Dest, &Dest, 0xC );
	ClampedYawLookTowardsAngle_Parms.clampYawDeg = clampYawDeg;

	this->ProcessEvent ( pFnClampedYawLookTowardsAngle, &ClampedYawLookTowardsAngle_Parms, NULL );

	return ClampedYawLookTowardsAngle_Parms.ReturnValue;
};

// Function Core.Object.ClampRotator
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                Start                          ( CPF_Parm )
// struct FRotator                Dest                           ( CPF_Parm )
// float                          clampDeg                       ( CPF_Parm )

struct FRotator UObject::ClampRotator ( struct FRotator Start, struct FRotator Dest, float clampDeg )
{
	static UFunction* pFnClampRotator = NULL;

	if ( ! pFnClampRotator )
		pFnClampRotator = (UFunction*) UObject::GObjObjects()->Data[ 1813 ];

	UObject_execClampRotator_Parms ClampRotator_Parms;
	memcpy ( &ClampRotator_Parms.Start, &Start, 0xC );
	memcpy ( &ClampRotator_Parms.Dest, &Dest, 0xC );
	ClampRotator_Parms.clampDeg = clampDeg;

	this->ProcessEvent ( pFnClampRotator, &ClampRotator_Parms, NULL );

	return ClampRotator_Parms.ReturnValue;
};

// Function Core.Object.RotDegreesBetweenPitch
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                rot1                           ( CPF_Parm )
// struct FRotator                rot2                           ( CPF_Parm )

float UObject::RotDegreesBetweenPitch ( struct FRotator rot1, struct FRotator rot2 )
{
	static UFunction* pFnRotDegreesBetweenPitch = NULL;

	if ( ! pFnRotDegreesBetweenPitch )
		pFnRotDegreesBetweenPitch = (UFunction*) UObject::GObjObjects()->Data[ 1819 ];

	UObject_execRotDegreesBetweenPitch_Parms RotDegreesBetweenPitch_Parms;
	memcpy ( &RotDegreesBetweenPitch_Parms.rot1, &rot1, 0xC );
	memcpy ( &RotDegreesBetweenPitch_Parms.rot2, &rot2, 0xC );

	this->ProcessEvent ( pFnRotDegreesBetweenPitch, &RotDegreesBetweenPitch_Parms, NULL );

	return RotDegreesBetweenPitch_Parms.ReturnValue;
};

// Function Core.Object.RotDegreesBetweenYaw
// [0x00020401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                rot1                           ( CPF_Parm )
// struct FRotator                rot2                           ( CPF_Parm )

float UObject::RotDegreesBetweenYaw ( struct FRotator rot1, struct FRotator rot2 )
{
	static UFunction* pFnRotDegreesBetweenYaw = NULL;

	if ( ! pFnRotDegreesBetweenYaw )
		pFnRotDegreesBetweenYaw = (UFunction*) UObject::GObjObjects()->Data[ 1824 ];

	UObject_execRotDegreesBetweenYaw_Parms RotDegreesBetweenYaw_Parms;
	memcpy ( &RotDegreesBetweenYaw_Parms.rot1, &rot1, 0xC );
	memcpy ( &RotDegreesBetweenYaw_Parms.rot2, &rot2, 0xC );

	this->ProcessEvent ( pFnRotDegreesBetweenYaw, &RotDegreesBetweenYaw_Parms, NULL );

	return RotDegreesBetweenYaw_Parms.ReturnValue;
};

// Function Core.Object.LineSegmentIntersectionWithPlane
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 P1                             ( CPF_Parm )
// struct FVector                 P2                             ( CPF_Parm )
// struct FVector                 PlaneNormal                    ( CPF_Parm )
// float                          PlaneDistance                  ( CPF_Parm )

struct FVector UObject::LineSegmentIntersectionWithPlane ( struct FVector P1, struct FVector P2, struct FVector PlaneNormal, float PlaneDistance )
{
	static UFunction* pFnLineSegmentIntersectionWithPlane = NULL;

	if ( ! pFnLineSegmentIntersectionWithPlane )
		pFnLineSegmentIntersectionWithPlane = (UFunction*) UObject::GObjObjects()->Data[ 1829 ];

	UObject_execLineSegmentIntersectionWithPlane_Parms LineSegmentIntersectionWithPlane_Parms;
	memcpy ( &LineSegmentIntersectionWithPlane_Parms.P1, &P1, 0xC );
	memcpy ( &LineSegmentIntersectionWithPlane_Parms.P2, &P2, 0xC );
	memcpy ( &LineSegmentIntersectionWithPlane_Parms.PlaneNormal, &PlaneNormal, 0xC );
	LineSegmentIntersectionWithPlane_Parms.PlaneDistance = PlaneDistance;

	this->ProcessEvent ( pFnLineSegmentIntersectionWithPlane, &LineSegmentIntersectionWithPlane_Parms, NULL );

	return LineSegmentIntersectionWithPlane_Parms.ReturnValue;
};

// Function Core.Object.ConvertDegreeFloatToRotAxis
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Value                          ( CPF_Parm )

int UObject::ConvertDegreeFloatToRotAxis ( float Value )
{
	static UFunction* pFnConvertDegreeFloatToRotAxis = NULL;

	if ( ! pFnConvertDegreeFloatToRotAxis )
		pFnConvertDegreeFloatToRotAxis = (UFunction*) UObject::GObjObjects()->Data[ 1833 ];

	UObject_execConvertDegreeFloatToRotAxis_Parms ConvertDegreeFloatToRotAxis_Parms;
	ConvertDegreeFloatToRotAxis_Parms.Value = Value;

	this->ProcessEvent ( pFnConvertDegreeFloatToRotAxis, &ConvertDegreeFloatToRotAxis_Parms, NULL );

	return ConvertDegreeFloatToRotAxis_Parms.ReturnValue;
};

// Function Core.Object.GetSystemTime
// [0x00420401] ( FUNC_Final )
// Parameters infos:
// int                            Year                           ( CPF_Parm | CPF_OutParm )
// int                            Month                          ( CPF_Parm | CPF_OutParm )
// int                            DayOfWeek                      ( CPF_Parm | CPF_OutParm )
// int                            Day                            ( CPF_Parm | CPF_OutParm )
// int                            Hour                           ( CPF_Parm | CPF_OutParm )
// int                            Min                            ( CPF_Parm | CPF_OutParm )
// int                            Sec                            ( CPF_Parm | CPF_OutParm )
// int                            MSec                           ( CPF_Parm | CPF_OutParm )

void UObject::GetSystemTime ( int* Year, int* Month, int* DayOfWeek, int* Day, int* Hour, int* Min, int* Sec, int* MSec )
{
	static UFunction* pFnGetSystemTime = NULL;

	if ( ! pFnGetSystemTime )
		pFnGetSystemTime = (UFunction*) UObject::GObjObjects()->Data[ 1840 ];

	UObject_execGetSystemTime_Parms GetSystemTime_Parms;

	this->ProcessEvent ( pFnGetSystemTime, &GetSystemTime_Parms, NULL );

	if ( Year )
		*Year = GetSystemTime_Parms.Year;

	if ( Month )
		*Month = GetSystemTime_Parms.Month;

	if ( DayOfWeek )
		*DayOfWeek = GetSystemTime_Parms.DayOfWeek;

	if ( Day )
		*Day = GetSystemTime_Parms.Day;

	if ( Hour )
		*Hour = GetSystemTime_Parms.Hour;

	if ( Min )
		*Min = GetSystemTime_Parms.Min;

	if ( Sec )
		*Sec = GetSystemTime_Parms.Sec;

	if ( MSec )
		*MSec = GetSystemTime_Parms.MSec;
};

// Function Core.Object.TimeStamp
// [0x00020401] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UObject::TimeStamp ( )
{
	static UFunction* pFnTimeStamp = NULL;

	if ( ! pFnTimeStamp )
		pFnTimeStamp = (UFunction*) UObject::GObjObjects()->Data[ 1843 ];

	UObject_execTimeStamp_Parms TimeStamp_Parms;

	this->ProcessEvent ( pFnTimeStamp, &TimeStamp_Parms, NULL );

	return TimeStamp_Parms.ReturnValue;
};

// Function Core.Object.TransformVectorByRotation
// [0x00024401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                SourceRotation                 ( CPF_Parm )
// struct FVector                 SourceVector                   ( CPF_Parm )
// unsigned long                  bInverse                       ( CPF_OptionalParm | CPF_Parm )

struct FVector UObject::TransformVectorByRotation ( struct FRotator SourceRotation, struct FVector SourceVector, unsigned long bInverse )
{
	static UFunction* pFnTransformVectorByRotation = NULL;

	if ( ! pFnTransformVectorByRotation )
		pFnTransformVectorByRotation = (UFunction*) UObject::GObjObjects()->Data[ 1852 ];

	UObject_execTransformVectorByRotation_Parms TransformVectorByRotation_Parms;
	memcpy ( &TransformVectorByRotation_Parms.SourceRotation, &SourceRotation, 0xC );
	memcpy ( &TransformVectorByRotation_Parms.SourceVector, &SourceVector, 0xC );
	TransformVectorByRotation_Parms.bInverse = bInverse;

	this->ProcessEvent ( pFnTransformVectorByRotation, &TransformVectorByRotation_Parms, NULL );

	return TransformVectorByRotation_Parms.ReturnValue;
};

// Function Core.Object.GetPackageName
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName UObject::GetPackageName ( )
{
	static UFunction* pFnGetPackageName = NULL;

	if ( ! pFnGetPackageName )
		pFnGetPackageName = (UFunction*) UObject::GObjObjects()->Data[ 1854 ];

	UObject_execGetPackageName_Parms GetPackageName_Parms;

	this->ProcessEvent ( pFnGetPackageName, &GetPackageName_Parms, NULL );

	return GetPackageName_Parms.ReturnValue;
};

// Function Core.Object.IsPendingKill
// [0x00020401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UObject::IsPendingKill ( )
{
	static UFunction* pFnIsPendingKill = NULL;

	if ( ! pFnIsPendingKill )
		pFnIsPendingKill = (UFunction*) UObject::GObjObjects()->Data[ 1859 ];

	UObject_execIsPendingKill_Parms IsPendingKill_Parms;

	this->ProcessEvent ( pFnIsPendingKill, &IsPendingKill_Parms, NULL );

	return IsPendingKill_Parms.ReturnValue;
};

// Function Core.Object.ByteToFloat
// [0x00024103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  inputByte                      ( CPF_Parm )
// unsigned long                  bSigned                        ( CPF_OptionalParm | CPF_Parm )

float UObject::ByteToFloat ( unsigned char inputByte, unsigned long bSigned )
{
	static UFunction* pFnByteToFloat = NULL;

	if ( ! pFnByteToFloat )
		pFnByteToFloat = (UFunction*) UObject::GObjObjects()->Data[ 1864 ];

	UObject_execByteToFloat_Parms ByteToFloat_Parms;
	ByteToFloat_Parms.inputByte = inputByte;
	ByteToFloat_Parms.bSigned = bSigned;

	this->ProcessEvent ( pFnByteToFloat, &ByteToFloat_Parms, NULL );

	return ByteToFloat_Parms.ReturnValue;
};

// Function Core.Object.FloatToByte
// [0x00024103] ( FUNC_Final )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          inputFloat                     ( CPF_Parm )
// unsigned long                  bSigned                        ( CPF_OptionalParm | CPF_Parm )

unsigned char UObject::FloatToByte ( float inputFloat, unsigned long bSigned )
{
	static UFunction* pFnFloatToByte = NULL;

	if ( ! pFnFloatToByte )
		pFnFloatToByte = (UFunction*) UObject::GObjObjects()->Data[ 1866 ];

	UObject_execFloatToByte_Parms FloatToByte_Parms;
	FloatToByte_Parms.inputFloat = inputFloat;
	FloatToByte_Parms.bSigned = bSigned;

	this->ProcessEvent ( pFnFloatToByte, &FloatToByte_Parms, NULL );

	return FloatToByte_Parms.ReturnValue;
};

// Function Core.Object.UnwindHeading
// [0x00022103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::UnwindHeading ( float A )
{
	static UFunction* pFnUnwindHeading = NULL;

	if ( ! pFnUnwindHeading )
		pFnUnwindHeading = (UFunction*) UObject::GObjObjects()->Data[ 1870 ];

	UObject_execUnwindHeading_Parms UnwindHeading_Parms;
	UnwindHeading_Parms.A = A;

	this->ProcessEvent ( pFnUnwindHeading, &UnwindHeading_Parms, NULL );

	return UnwindHeading_Parms.ReturnValue;
};

// Function Core.Object.FindDeltaAngle
// [0x00022103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A1                             ( CPF_Parm )
// float                          A2                             ( CPF_Parm )

float UObject::FindDeltaAngle ( float A1, float A2 )
{
	static UFunction* pFnFindDeltaAngle = NULL;

	if ( ! pFnFindDeltaAngle )
		pFnFindDeltaAngle = (UFunction*) UObject::GObjObjects()->Data[ 1874 ];

	UObject_execFindDeltaAngle_Parms FindDeltaAngle_Parms;
	FindDeltaAngle_Parms.A1 = A1;
	FindDeltaAngle_Parms.A2 = A2;

	this->ProcessEvent ( pFnFindDeltaAngle, &FindDeltaAngle_Parms, NULL );

	return FindDeltaAngle_Parms.ReturnValue;
};

// Function Core.Object.GetHeadingAngle
// [0x00022103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Dir                            ( CPF_Parm )

float UObject::GetHeadingAngle ( struct FVector Dir )
{
	static UFunction* pFnGetHeadingAngle = NULL;

	if ( ! pFnGetHeadingAngle )
		pFnGetHeadingAngle = (UFunction*) UObject::GObjObjects()->Data[ 1877 ];

	UObject_execGetHeadingAngle_Parms GetHeadingAngle_Parms;
	memcpy ( &GetHeadingAngle_Parms.Dir, &Dir, 0xC );

	this->ProcessEvent ( pFnGetHeadingAngle, &GetHeadingAngle_Parms, NULL );

	return GetHeadingAngle_Parms.ReturnValue;
};

// Function Core.Object.GetAngularDegreesFromRadians
// [0x00422103] ( FUNC_Final )
// Parameters infos:
// struct FVector2D               OutFOV                         ( CPF_Parm | CPF_OutParm )

void UObject::GetAngularDegreesFromRadians ( struct FVector2D* OutFOV )
{
	static UFunction* pFnGetAngularDegreesFromRadians = NULL;

	if ( ! pFnGetAngularDegreesFromRadians )
		pFnGetAngularDegreesFromRadians = (UFunction*) UObject::GObjObjects()->Data[ 1882 ];

	UObject_execGetAngularDegreesFromRadians_Parms GetAngularDegreesFromRadians_Parms;

	this->ProcessEvent ( pFnGetAngularDegreesFromRadians, &GetAngularDegreesFromRadians_Parms, NULL );

	if ( OutFOV )
		memcpy ( OutFOV, &GetAngularDegreesFromRadians_Parms.OutFOV, 0x8 );
};

// Function Core.Object.GetAngularFromDotDist
// [0x00422401] ( FUNC_Final )
// Parameters infos:
// struct FVector2D               DotDist                        ( CPF_Parm )
// struct FVector2D               OutAngDist                     ( CPF_Parm | CPF_OutParm )

void UObject::GetAngularFromDotDist ( struct FVector2D DotDist, struct FVector2D* OutAngDist )
{
	static UFunction* pFnGetAngularFromDotDist = NULL;

	if ( ! pFnGetAngularFromDotDist )
		pFnGetAngularFromDotDist = (UFunction*) UObject::GObjObjects()->Data[ 1886 ];

	UObject_execGetAngularFromDotDist_Parms GetAngularFromDotDist_Parms;
	memcpy ( &GetAngularFromDotDist_Parms.DotDist, &DotDist, 0x8 );

	this->ProcessEvent ( pFnGetAngularFromDotDist, &GetAngularFromDotDist_Parms, NULL );

	if ( OutAngDist )
		memcpy ( OutAngDist, &GetAngularFromDotDist_Parms.OutAngDist, 0x8 );
};

// Function Core.Object.GetAngularDistance
// [0x00422401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Direction                      ( CPF_Parm )
// struct FVector                 AxisX                          ( CPF_Parm )
// struct FVector                 AxisY                          ( CPF_Parm )
// struct FVector                 AxisZ                          ( CPF_Parm )
// struct FVector2D               OutAngularDist                 ( CPF_Parm | CPF_OutParm )

bool UObject::GetAngularDistance ( struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D* OutAngularDist )
{
	static UFunction* pFnGetAngularDistance = NULL;

	if ( ! pFnGetAngularDistance )
		pFnGetAngularDistance = (UFunction*) UObject::GObjObjects()->Data[ 1888 ];

	UObject_execGetAngularDistance_Parms GetAngularDistance_Parms;
	memcpy ( &GetAngularDistance_Parms.Direction, &Direction, 0xC );
	memcpy ( &GetAngularDistance_Parms.AxisX, &AxisX, 0xC );
	memcpy ( &GetAngularDistance_Parms.AxisY, &AxisY, 0xC );
	memcpy ( &GetAngularDistance_Parms.AxisZ, &AxisZ, 0xC );

	this->ProcessEvent ( pFnGetAngularDistance, &GetAngularDistance_Parms, NULL );

	if ( OutAngularDist )
		memcpy ( OutAngularDist, &GetAngularDistance_Parms.OutAngularDist, 0x8 );

	return GetAngularDistance_Parms.ReturnValue;
};

// Function Core.Object.GetDotDistance
// [0x00422401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Direction                      ( CPF_Parm )
// struct FVector                 AxisX                          ( CPF_Parm )
// struct FVector                 AxisY                          ( CPF_Parm )
// struct FVector                 AxisZ                          ( CPF_Parm )
// struct FVector2D               OutDotDist                     ( CPF_Parm | CPF_OutParm )

bool UObject::GetDotDistance ( struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D* OutDotDist )
{
	static UFunction* pFnGetDotDistance = NULL;

	if ( ! pFnGetDotDistance )
		pFnGetDotDistance = (UFunction*) UObject::GObjObjects()->Data[ 1891 ];

	UObject_execGetDotDistance_Parms GetDotDistance_Parms;
	memcpy ( &GetDotDistance_Parms.Direction, &Direction, 0xC );
	memcpy ( &GetDotDistance_Parms.AxisX, &AxisX, 0xC );
	memcpy ( &GetDotDistance_Parms.AxisY, &AxisY, 0xC );
	memcpy ( &GetDotDistance_Parms.AxisZ, &AxisZ, 0xC );

	this->ProcessEvent ( pFnGetDotDistance, &GetDotDistance_Parms, NULL );

	if ( OutDotDist )
		memcpy ( OutDotDist, &GetDotDistance_Parms.OutDotDist, 0x8 );

	return GetDotDistance_Parms.ReturnValue;
};

// Function Core.Object.PointProjectToPlane
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Point                          ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )
// struct FVector                 C                              ( CPF_Parm )

struct FVector UObject::PointProjectToPlane ( struct FVector Point, struct FVector A, struct FVector B, struct FVector C )
{
	static UFunction* pFnPointProjectToPlane = NULL;

	if ( ! pFnPointProjectToPlane )
		pFnPointProjectToPlane = (UFunction*) UObject::GObjObjects()->Data[ 1898 ];

	UObject_execPointProjectToPlane_Parms PointProjectToPlane_Parms;
	memcpy ( &PointProjectToPlane_Parms.Point, &Point, 0xC );
	memcpy ( &PointProjectToPlane_Parms.A, &A, 0xC );
	memcpy ( &PointProjectToPlane_Parms.B, &B, 0xC );
	memcpy ( &PointProjectToPlane_Parms.C, &C, 0xC );

	this->ProcessEvent ( pFnPointProjectToPlane, &PointProjectToPlane_Parms, NULL );

	return PointProjectToPlane_Parms.ReturnValue;
};

// Function Core.Object.PointDistToPlane
// [0x00C24103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Point                          ( CPF_Parm )
// struct FRotator                Orientation                    ( CPF_Parm )
// struct FVector                 Origin                         ( CPF_Parm )
// struct FVector                 out_ClosestPoint               ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

float UObject::PointDistToPlane ( struct FVector Point, struct FRotator Orientation, struct FVector Origin, struct FVector* out_ClosestPoint )
{
	static UFunction* pFnPointDistToPlane = NULL;

	if ( ! pFnPointDistToPlane )
		pFnPointDistToPlane = (UFunction*) UObject::GObjObjects()->Data[ 1905 ];

	UObject_execPointDistToPlane_Parms PointDistToPlane_Parms;
	memcpy ( &PointDistToPlane_Parms.Point, &Point, 0xC );
	memcpy ( &PointDistToPlane_Parms.Orientation, &Orientation, 0xC );
	memcpy ( &PointDistToPlane_Parms.Origin, &Origin, 0xC );

	this->ProcessEvent ( pFnPointDistToPlane, &PointDistToPlane_Parms, NULL );

	if ( out_ClosestPoint )
		memcpy ( out_ClosestPoint, &PointDistToPlane_Parms.out_ClosestPoint, 0xC );

	return PointDistToPlane_Parms.ReturnValue;
};

// Function Core.Object.PointDistToSegment
// [0x00424401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Point                          ( CPF_Parm )
// struct FVector                 StartPoint                     ( CPF_Parm )
// struct FVector                 EndPoint                       ( CPF_Parm )
// struct FVector                 OutClosestPoint                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

float UObject::PointDistToSegment ( struct FVector Point, struct FVector StartPoint, struct FVector EndPoint, struct FVector* OutClosestPoint )
{
	static UFunction* pFnPointDistToSegment = NULL;

	if ( ! pFnPointDistToSegment )
		pFnPointDistToSegment = (UFunction*) UObject::GObjObjects()->Data[ 1911 ];

	UObject_execPointDistToSegment_Parms PointDistToSegment_Parms;
	memcpy ( &PointDistToSegment_Parms.Point, &Point, 0xC );
	memcpy ( &PointDistToSegment_Parms.StartPoint, &StartPoint, 0xC );
	memcpy ( &PointDistToSegment_Parms.EndPoint, &EndPoint, 0xC );

	this->ProcessEvent ( pFnPointDistToSegment, &PointDistToSegment_Parms, NULL );

	if ( OutClosestPoint )
		memcpy ( OutClosestPoint, &PointDistToSegment_Parms.OutClosestPoint, 0xC );

	return PointDistToSegment_Parms.ReturnValue;
};

// Function Core.Object.PointDistToLine
// [0x00424401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Point                          ( CPF_Parm )
// struct FVector                 Line                           ( CPF_Parm )
// struct FVector                 Origin                         ( CPF_Parm )
// struct FVector                 OutClosestPoint                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

float UObject::PointDistToLine ( struct FVector Point, struct FVector Line, struct FVector Origin, struct FVector* OutClosestPoint )
{
	static UFunction* pFnPointDistToLine = NULL;

	if ( ! pFnPointDistToLine )
		pFnPointDistToLine = (UFunction*) UObject::GObjObjects()->Data[ 1924 ];

	UObject_execPointDistToLine_Parms PointDistToLine_Parms;
	memcpy ( &PointDistToLine_Parms.Point, &Point, 0xC );
	memcpy ( &PointDistToLine_Parms.Line, &Line, 0xC );
	memcpy ( &PointDistToLine_Parms.Origin, &Origin, 0xC );

	this->ProcessEvent ( pFnPointDistToLine, &PointDistToLine_Parms, NULL );

	if ( OutClosestPoint )
		memcpy ( OutClosestPoint, &PointDistToLine_Parms.OutClosestPoint, 0xC );

	return PointDistToLine_Parms.ReturnValue;
};

// Function Core.Object.GetPerObjectConfigSections
// [0x00426401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// class UObject*                 ObjectOuter                    ( CPF_OptionalParm | CPF_Parm )
// int                            MaxResults                     ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FString >       out_SectionNames               ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UObject::GetPerObjectConfigSections ( class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, TArray< struct FString >* out_SectionNames )
{
	static UFunction* pFnGetPerObjectConfigSections = NULL;

	if ( ! pFnGetPerObjectConfigSections )
		pFnGetPerObjectConfigSections = (UFunction*) UObject::GObjObjects()->Data[ 1930 ];

	UObject_execGetPerObjectConfigSections_Parms GetPerObjectConfigSections_Parms;
	GetPerObjectConfigSections_Parms.SearchClass = SearchClass;
	GetPerObjectConfigSections_Parms.ObjectOuter = ObjectOuter;
	GetPerObjectConfigSections_Parms.MaxResults = MaxResults;

	this->ProcessEvent ( pFnGetPerObjectConfigSections, &GetPerObjectConfigSections_Parms, NULL );

	if ( out_SectionNames )
		memcpy ( out_SectionNames, &GetPerObjectConfigSections_Parms.out_SectionNames, 0xC );

	return GetPerObjectConfigSections_Parms.ReturnValue;
};

// Function Core.Object.StaticSaveConfig
// [0x04022401] ( FUNC_Final )
// Parameters infos:

void UObject::StaticSaveConfig ( )
{
	static UFunction* pFnStaticSaveConfig = NULL;

	if ( ! pFnStaticSaveConfig )
		pFnStaticSaveConfig = (UFunction*) UObject::GObjObjects()->Data[ 1936 ];

	UObject_execStaticSaveConfig_Parms StaticSaveConfig_Parms;

	this->ProcessEvent ( pFnStaticSaveConfig, &StaticSaveConfig_Parms, NULL );
};

// Function Core.Object.SaveConfig
// [0x04020401] ( FUNC_Final )
// Parameters infos:

void UObject::SaveConfig ( )
{
	static UFunction* pFnSaveConfig = NULL;

	if ( ! pFnSaveConfig )
		pFnSaveConfig = (UFunction*) UObject::GObjObjects()->Data[ 1943 ];

	UObject_execSaveConfig_Parms SaveConfig_Parms;

	this->ProcessEvent ( pFnSaveConfig, &SaveConfig_Parms, NULL );
};

// Function Core.Object.FindObject
// [0x04022401] ( FUNC_Final )
// Parameters infos:
// class UObject*                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ObjectName                     ( CPF_Parm | CPF_NeedCtorLink )
// class UClass*                  ObjectClass                    ( CPF_Parm )

class UObject* UObject::FindObject ( struct FString ObjectName, class UClass* ObjectClass )
{
	static UFunction* pFnFindObject = NULL;

	if ( ! pFnFindObject )
		pFnFindObject = (UFunction*) UObject::GObjObjects()->Data[ 1944 ];

	UObject_execFindObject_Parms FindObject_Parms;
	memcpy ( &FindObject_Parms.ObjectName, &ObjectName, 0xC );
	FindObject_Parms.ObjectClass = ObjectClass;

	this->ProcessEvent ( pFnFindObject, &FindObject_Parms, NULL );

	return FindObject_Parms.ReturnValue;
};

// Function Core.Object.DynamicLoadObject
// [0x04026401] ( FUNC_Final )
// Parameters infos:
// class UObject*                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ObjectName                     ( CPF_Parm | CPF_NeedCtorLink )
// class UClass*                  ObjectClass                    ( CPF_Parm )
// unsigned long                  MayFail                        ( CPF_OptionalParm | CPF_Parm )

class UObject* UObject::DynamicLoadObject ( struct FString ObjectName, class UClass* ObjectClass, unsigned long MayFail )
{
	static UFunction* pFnDynamicLoadObject = NULL;

	if ( ! pFnDynamicLoadObject )
		pFnDynamicLoadObject = (UFunction*) UObject::GObjObjects()->Data[ 1945 ];

	UObject_execDynamicLoadObject_Parms DynamicLoadObject_Parms;
	memcpy ( &DynamicLoadObject_Parms.ObjectName, &ObjectName, 0xC );
	DynamicLoadObject_Parms.ObjectClass = ObjectClass;
	DynamicLoadObject_Parms.MayFail = MayFail;

	this->ProcessEvent ( pFnDynamicLoadObject, &DynamicLoadObject_Parms, NULL );

	return DynamicLoadObject_Parms.ReturnValue;
};

// Function Core.Object.GetEnum
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 E                              ( CPF_Parm )
// int                            I                              ( CPF_Parm | CPF_CoerceParm )

struct FName UObject::GetEnum ( class UObject* E, int I )
{
	static UFunction* pFnGetEnum = NULL;

	if ( ! pFnGetEnum )
		pFnGetEnum = (UFunction*) UObject::GObjObjects()->Data[ 1949 ];

	UObject_execGetEnum_Parms GetEnum_Parms;
	GetEnum_Parms.E = E;
	GetEnum_Parms.I = I;

	this->ProcessEvent ( pFnGetEnum, &GetEnum_Parms, NULL );

	return GetEnum_Parms.ReturnValue;
};

// Function Core.Object.Disable
// [0x04020401] ( FUNC_Final )
// Parameters infos:
// struct FName                   ProbeFunc                      ( CPF_Parm )

void UObject::Disable ( struct FName ProbeFunc )
{
	static UFunction* pFnDisable = NULL;

	if ( ! pFnDisable )
		pFnDisable = (UFunction*) UObject::GObjObjects()->Data[ 1954 ];

	UObject_execDisable_Parms Disable_Parms;
	memcpy ( &Disable_Parms.ProbeFunc, &ProbeFunc, 0x8 );

	this->ProcessEvent ( pFnDisable, &Disable_Parms, NULL );
};

// Function Core.Object.Enable
// [0x04020401] ( FUNC_Final )
// Parameters infos:
// struct FName                   ProbeFunc                      ( CPF_Parm )

void UObject::Enable ( struct FName ProbeFunc )
{
	static UFunction* pFnEnable = NULL;

	if ( ! pFnEnable )
		pFnEnable = (UFunction*) UObject::GObjObjects()->Data[ 1958 ];

	UObject_execEnable_Parms Enable_Parms;
	memcpy ( &Enable_Parms.ProbeFunc, &ProbeFunc, 0x8 );

	this->ProcessEvent ( pFnEnable, &Enable_Parms, NULL );
};

// Function Core.Object.ContinuedState
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UObject::eventContinuedState ( )
{
	static UFunction* pFnContinuedState = NULL;

	if ( ! pFnContinuedState )
		pFnContinuedState = (UFunction*) UObject::GObjObjects()->Data[ 1960 ];

	UObject_eventContinuedState_Parms ContinuedState_Parms;

	this->ProcessEvent ( pFnContinuedState, &ContinuedState_Parms, NULL );
};

// Function Core.Object.PausedState
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UObject::eventPausedState ( )
{
	static UFunction* pFnPausedState = NULL;

	if ( ! pFnPausedState )
		pFnPausedState = (UFunction*) UObject::GObjObjects()->Data[ 1962 ];

	UObject_eventPausedState_Parms PausedState_Parms;

	this->ProcessEvent ( pFnPausedState, &PausedState_Parms, NULL );
};

// Function Core.Object.PoppedState
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UObject::eventPoppedState ( )
{
	static UFunction* pFnPoppedState = NULL;

	if ( ! pFnPoppedState )
		pFnPoppedState = (UFunction*) UObject::GObjObjects()->Data[ 1963 ];

	UObject_eventPoppedState_Parms PoppedState_Parms;

	this->ProcessEvent ( pFnPoppedState, &PoppedState_Parms, NULL );
};

// Function Core.Object.PushedState
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UObject::eventPushedState ( )
{
	static UFunction* pFnPushedState = NULL;

	if ( ! pFnPushedState )
		pFnPushedState = (UFunction*) UObject::GObjObjects()->Data[ 1964 ];

	UObject_eventPushedState_Parms PushedState_Parms;

	this->ProcessEvent ( pFnPushedState, &PushedState_Parms, NULL );
};

// Function Core.Object.EndState
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FName                   NextStateName                  ( CPF_Parm )

void UObject::eventEndState ( struct FName NextStateName )
{
	static UFunction* pFnEndState = NULL;

	if ( ! pFnEndState )
		pFnEndState = (UFunction*) UObject::GObjObjects()->Data[ 1965 ];

	UObject_eventEndState_Parms EndState_Parms;
	memcpy ( &EndState_Parms.NextStateName, &NextStateName, 0x8 );

	this->ProcessEvent ( pFnEndState, &EndState_Parms, NULL );
};

// Function Core.Object.BeginState
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FName                   PreviousStateName              ( CPF_Parm )

void UObject::eventBeginState ( struct FName PreviousStateName )
{
	static UFunction* pFnBeginState = NULL;

	if ( ! pFnBeginState )
		pFnBeginState = (UFunction*) UObject::GObjObjects()->Data[ 1966 ];

	UObject_eventBeginState_Parms BeginState_Parms;
	memcpy ( &BeginState_Parms.PreviousStateName, &PreviousStateName, 0x8 );

	this->ProcessEvent ( pFnBeginState, &BeginState_Parms, NULL );
};

// Function Core.Object.DumpStateStack
// [0x00020401] ( FUNC_Final )
// Parameters infos:

void UObject::DumpStateStack ( )
{
	static UFunction* pFnDumpStateStack = NULL;

	if ( ! pFnDumpStateStack )
		pFnDumpStateStack = (UFunction*) UObject::GObjObjects()->Data[ 1968 ];

	UObject_execDumpStateStack_Parms DumpStateStack_Parms;

	this->ProcessEvent ( pFnDumpStateStack, &DumpStateStack_Parms, NULL );
};

// Function Core.Object.PopState
// [0x00024401] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bPopAll                        ( CPF_OptionalParm | CPF_Parm )

void UObject::PopState ( unsigned long bPopAll )
{
	static UFunction* pFnPopState = NULL;

	if ( ! pFnPopState )
		pFnPopState = (UFunction*) UObject::GObjObjects()->Data[ 1970 ];

	UObject_execPopState_Parms PopState_Parms;
	PopState_Parms.bPopAll = bPopAll;

	this->ProcessEvent ( pFnPopState, &PopState_Parms, NULL );
};

// Function Core.Object.PushState
// [0x00024401] ( FUNC_Final )
// Parameters infos:
// struct FName                   NewState                       ( CPF_Parm )
// struct FName                   NewLabel                       ( CPF_OptionalParm | CPF_Parm )

void UObject::PushState ( struct FName NewState, struct FName NewLabel )
{
	static UFunction* pFnPushState = NULL;

	if ( ! pFnPushState )
		pFnPushState = (UFunction*) UObject::GObjObjects()->Data[ 1971 ];

	UObject_execPushState_Parms PushState_Parms;
	memcpy ( &PushState_Parms.NewState, &NewState, 0x8 );
	memcpy ( &PushState_Parms.NewLabel, &NewLabel, 0x8 );

	this->ProcessEvent ( pFnPushState, &PushState_Parms, NULL );
};

// Function Core.Object.GetStateName
// [0x00020401] ( FUNC_Final )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName UObject::GetStateName ( )
{
	static UFunction* pFnGetStateName = NULL;

	if ( ! pFnGetStateName )
		pFnGetStateName = (UFunction*) UObject::GObjObjects()->Data[ 1973 ];

	UObject_execGetStateName_Parms GetStateName_Parms;

	this->ProcessEvent ( pFnGetStateName, &GetStateName_Parms, NULL );

	return GetStateName_Parms.ReturnValue;
};

// Function Core.Object.IsChildState
// [0x00020401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   TestState                      ( CPF_Parm )
// struct FName                   TestParentState                ( CPF_Parm )

bool UObject::IsChildState ( struct FName TestState, struct FName TestParentState )
{
	static UFunction* pFnIsChildState = NULL;

	if ( ! pFnIsChildState )
		pFnIsChildState = (UFunction*) UObject::GObjObjects()->Data[ 1976 ];

	UObject_execIsChildState_Parms IsChildState_Parms;
	memcpy ( &IsChildState_Parms.TestState, &TestState, 0x8 );
	memcpy ( &IsChildState_Parms.TestParentState, &TestParentState, 0x8 );

	this->ProcessEvent ( pFnIsChildState, &IsChildState_Parms, NULL );

	return IsChildState_Parms.ReturnValue;
};

// Function Core.Object.IsInState
// [0x00024401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   TestState                      ( CPF_Parm )
// unsigned long                  bTestStateStack                ( CPF_OptionalParm | CPF_Parm )

bool UObject::IsInState ( struct FName TestState, unsigned long bTestStateStack )
{
	static UFunction* pFnIsInState = NULL;

	if ( ! pFnIsInState )
		pFnIsInState = (UFunction*) UObject::GObjObjects()->Data[ 1978 ];

	UObject_execIsInState_Parms IsInState_Parms;
	memcpy ( &IsInState_Parms.TestState, &TestState, 0x8 );
	IsInState_Parms.bTestStateStack = bTestStateStack;

	this->ProcessEvent ( pFnIsInState, &IsInState_Parms, NULL );

	return IsInState_Parms.ReturnValue;
};

// Function Core.Object.GotoState
// [0x00024401] ( FUNC_Final )
// Parameters infos:
// struct FName                   NewState                       ( CPF_OptionalParm | CPF_Parm )
// struct FName                   Label                          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bForceEvents                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bKeepStack                     ( CPF_OptionalParm | CPF_Parm )

void UObject::GotoState ( struct FName NewState, struct FName Label, unsigned long bForceEvents, unsigned long bKeepStack )
{
	static UFunction* pFnGotoState = NULL;

	if ( ! pFnGotoState )
		pFnGotoState = (UFunction*) UObject::GObjObjects()->Data[ 1982 ];

	UObject_execGotoState_Parms GotoState_Parms;
	memcpy ( &GotoState_Parms.NewState, &NewState, 0x8 );
	memcpy ( &GotoState_Parms.Label, &Label, 0x8 );
	GotoState_Parms.bForceEvents = bForceEvents;
	GotoState_Parms.bKeepStack = bKeepStack;

	this->ProcessEvent ( pFnGotoState, &GotoState_Parms, NULL );
};

// Function Core.Object.IsUTracing
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UObject::IsUTracing ( )
{
	static UFunction* pFnIsUTracing = NULL;

	if ( ! pFnIsUTracing )
		pFnIsUTracing = (UFunction*) UObject::GObjObjects()->Data[ 1986 ];

	UObject_execIsUTracing_Parms IsUTracing_Parms;

	this->ProcessEvent ( pFnIsUTracing, &IsUTracing_Parms, NULL );

	return IsUTracing_Parms.ReturnValue;
};

// Function Core.Object.SetUTracing
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bShouldUTrace                  ( CPF_Parm )

void UObject::SetUTracing ( unsigned long bShouldUTrace )
{
	static UFunction* pFnSetUTracing = NULL;

	if ( ! pFnSetUTracing )
		pFnSetUTracing = (UFunction*) UObject::GObjObjects()->Data[ 1991 ];

	UObject_execSetUTracing_Parms SetUTracing_Parms;
	SetUTracing_Parms.bShouldUTrace = bShouldUTrace;

	this->ProcessEvent ( pFnSetUTracing, &SetUTracing_Parms, NULL );
};

// Function Core.Object.GetFuncName
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName UObject::GetFuncName ( )
{
	static UFunction* pFnGetFuncName = NULL;

	if ( ! pFnGetFuncName )
		pFnGetFuncName = (UFunction*) UObject::GObjObjects()->Data[ 1993 ];

	UObject_execGetFuncName_Parms GetFuncName_Parms;

	this->ProcessEvent ( pFnGetFuncName, &GetFuncName_Parms, NULL );

	return GetFuncName_Parms.ReturnValue;
};

// Function Core.Object.DebugBreak
// [0x00026401] ( FUNC_Final )
// Parameters infos:
// int                            UserFlags                      ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  DebuggerType                   ( CPF_OptionalParm | CPF_Parm )

void UObject::DebugBreak ( int UserFlags, unsigned char DebuggerType )
{
	static UFunction* pFnDebugBreak = NULL;

	if ( ! pFnDebugBreak )
		pFnDebugBreak = (UFunction*) UObject::GObjObjects()->Data[ 1995 ];

	UObject_execDebugBreak_Parms DebugBreak_Parms;
	DebugBreak_Parms.UserFlags = UserFlags;
	DebugBreak_Parms.DebuggerType = DebuggerType;

	this->ProcessEvent ( pFnDebugBreak, &DebugBreak_Parms, NULL );
};

// Function Core.Object.ScriptTrace
// [0x00022401] ( FUNC_Final )
// Parameters infos:

void UObject::ScriptTrace ( )
{
	static UFunction* pFnScriptTrace = NULL;

	if ( ! pFnScriptTrace )
		pFnScriptTrace = (UFunction*) UObject::GObjObjects()->Data[ 1997 ];

	UObject_execScriptTrace_Parms ScriptTrace_Parms;

	this->ProcessEvent ( pFnScriptTrace, &ScriptTrace_Parms, NULL );
};

// Function Core.Object.ParseLocalizedPropertyPath
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 PathName                       ( CPF_Parm | CPF_NeedCtorLink )

struct FString UObject::ParseLocalizedPropertyPath ( struct FString PathName )
{
	static UFunction* pFnParseLocalizedPropertyPath = NULL;

	if ( ! pFnParseLocalizedPropertyPath )
		pFnParseLocalizedPropertyPath = (UFunction*) UObject::GObjObjects()->Data[ 2002 ];

	UObject_execParseLocalizedPropertyPath_Parms ParseLocalizedPropertyPath_Parms;
	memcpy ( &ParseLocalizedPropertyPath_Parms.PathName, &PathName, 0xC );

	this->ProcessEvent ( pFnParseLocalizedPropertyPath, &ParseLocalizedPropertyPath_Parms, NULL );

	return ParseLocalizedPropertyPath_Parms.ReturnValue;
};

// Function Core.Object.Localize
// [0x00022400] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 SectionName                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 KeyName                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 PackageName                    ( CPF_Parm | CPF_NeedCtorLink )

struct FString UObject::Localize ( struct FString SectionName, struct FString KeyName, struct FString PackageName )
{
	static UFunction* pFnLocalize = NULL;

	if ( ! pFnLocalize )
		pFnLocalize = (UFunction*) UObject::GObjObjects()->Data[ 2003 ];

	UObject_execLocalize_Parms Localize_Parms;
	memcpy ( &Localize_Parms.SectionName, &SectionName, 0xC );
	memcpy ( &Localize_Parms.KeyName, &KeyName, 0xC );
	memcpy ( &Localize_Parms.PackageName, &PackageName, 0xC );

	this->ProcessEvent ( pFnLocalize, &Localize_Parms, NULL );

	return Localize_Parms.ReturnValue;
};

// Function Core.Object.WarnInternal
// [0x00042401] ( FUNC_Final )
// Parameters infos:
// struct FString                 S                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

void UObject::WarnInternal ( struct FString S )
{
	static UFunction* pFnWarnInternal = NULL;

	if ( ! pFnWarnInternal )
		pFnWarnInternal = (UFunction*) UObject::GObjObjects()->Data[ 2009 ];

	UObject_execWarnInternal_Parms WarnInternal_Parms;
	memcpy ( &WarnInternal_Parms.S, &S, 0xC );

	this->ProcessEvent ( pFnWarnInternal, &WarnInternal_Parms, NULL );
};

// Function Core.Object.LogInternal
// [0x00046401] ( FUNC_Final )
// Parameters infos:
// struct FString                 S                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FName                   Tag                            ( CPF_OptionalParm | CPF_Parm )

void UObject::LogInternal ( struct FString S, struct FName Tag )
{
	static UFunction* pFnLogInternal = NULL;

	if ( ! pFnLogInternal )
		pFnLogInternal = (UFunction*) UObject::GObjObjects()->Data[ 2014 ];

	UObject_execLogInternal_Parms LogInternal_Parms;
	memcpy ( &LogInternal_Parms.S, &S, 0xC );
	memcpy ( &LogInternal_Parms.Tag, &Tag, 0x8 );

	this->ProcessEvent ( pFnLogInternal, &LogInternal_Parms, NULL );
};

// Function Core.Object.Subtract_LinearColorLinearColor
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// struct FLinearColor            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FLinearColor            A                              ( CPF_Parm )
// struct FLinearColor            B                              ( CPF_Parm )

struct FLinearColor UObject::Subtract_LinearColorLinearColor ( struct FLinearColor A, struct FLinearColor B )
{
	static UFunction* pFnSubtract_LinearColorLinearColor = NULL;

	if ( ! pFnSubtract_LinearColorLinearColor )
		pFnSubtract_LinearColorLinearColor = (UFunction*) UObject::GObjObjects()->Data[ 2016 ];

	UObject_execSubtract_LinearColorLinearColor_Parms Subtract_LinearColorLinearColor_Parms;
	memcpy ( &Subtract_LinearColorLinearColor_Parms.A, &A, 0x10 );
	memcpy ( &Subtract_LinearColorLinearColor_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnSubtract_LinearColorLinearColor, &Subtract_LinearColorLinearColor_Parms, NULL );

	return Subtract_LinearColorLinearColor_Parms.ReturnValue;
};

// Function Core.Object.Multiply_LinearColorFloat
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// struct FLinearColor            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FLinearColor            LC                             ( CPF_Parm )
// float                          Mult                           ( CPF_Parm )

struct FLinearColor UObject::Multiply_LinearColorFloat ( struct FLinearColor LC, float Mult )
{
	static UFunction* pFnMultiply_LinearColorFloat = NULL;

	if ( ! pFnMultiply_LinearColorFloat )
		pFnMultiply_LinearColorFloat = (UFunction*) UObject::GObjObjects()->Data[ 2019 ];

	UObject_execMultiply_LinearColorFloat_Parms Multiply_LinearColorFloat_Parms;
	memcpy ( &Multiply_LinearColorFloat_Parms.LC, &LC, 0x10 );
	Multiply_LinearColorFloat_Parms.Mult = Mult;

	this->ProcessEvent ( pFnMultiply_LinearColorFloat, &Multiply_LinearColorFloat_Parms, NULL );

	return Multiply_LinearColorFloat_Parms.ReturnValue;
};

// Function Core.Object.ColorToLinearColor
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// struct FLinearColor            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FColor                  OldColor                       ( CPF_Parm )

struct FLinearColor UObject::ColorToLinearColor ( struct FColor OldColor )
{
	static UFunction* pFnColorToLinearColor = NULL;

	if ( ! pFnColorToLinearColor )
		pFnColorToLinearColor = (UFunction*) UObject::GObjObjects()->Data[ 2023 ];

	UObject_execColorToLinearColor_Parms ColorToLinearColor_Parms;
	memcpy ( &ColorToLinearColor_Parms.OldColor, &OldColor, 0x4 );

	this->ProcessEvent ( pFnColorToLinearColor, &ColorToLinearColor_Parms, NULL );

	return ColorToLinearColor_Parms.ReturnValue;
};

// Function Core.Object.MakeLinearColor
// [0x00822003] ( FUNC_Final )
// Parameters infos:
// struct FLinearColor            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          R                              ( CPF_Parm )
// float                          G                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )
// float                          A                              ( CPF_Parm )

struct FLinearColor UObject::MakeLinearColor ( float R, float G, float B, float A )
{
	static UFunction* pFnMakeLinearColor = NULL;

	if ( ! pFnMakeLinearColor )
		pFnMakeLinearColor = (UFunction*) UObject::GObjObjects()->Data[ 2027 ];

	UObject_execMakeLinearColor_Parms MakeLinearColor_Parms;
	MakeLinearColor_Parms.R = R;
	MakeLinearColor_Parms.G = G;
	MakeLinearColor_Parms.B = B;
	MakeLinearColor_Parms.A = A;

	this->ProcessEvent ( pFnMakeLinearColor, &MakeLinearColor_Parms, NULL );

	return MakeLinearColor_Parms.ReturnValue;
};

// Function Core.Object.LerpColor
// [0x00822003] ( FUNC_Final )
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FColor                  A                              ( CPF_Parm )
// struct FColor                  B                              ( CPF_Parm )
// float                          Alpha                          ( CPF_Parm )

struct FColor UObject::LerpColor ( struct FColor A, struct FColor B, float Alpha )
{
	static UFunction* pFnLerpColor = NULL;

	if ( ! pFnLerpColor )
		pFnLerpColor = (UFunction*) UObject::GObjObjects()->Data[ 2030 ];

	UObject_execLerpColor_Parms LerpColor_Parms;
	memcpy ( &LerpColor_Parms.A, &A, 0x4 );
	memcpy ( &LerpColor_Parms.B, &B, 0x4 );
	LerpColor_Parms.Alpha = Alpha;

	this->ProcessEvent ( pFnLerpColor, &LerpColor_Parms, NULL );

	return LerpColor_Parms.ReturnValue;
};

// Function Core.Object.MakeColor
// [0x00826003] ( FUNC_Final )
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  R                              ( CPF_Parm )
// unsigned char                  G                              ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm )
// unsigned char                  A                              ( CPF_OptionalParm | CPF_Parm )

struct FColor UObject::MakeColor ( unsigned char R, unsigned char G, unsigned char B, unsigned char A )
{
	static UFunction* pFnMakeColor = NULL;

	if ( ! pFnMakeColor )
		pFnMakeColor = (UFunction*) UObject::GObjObjects()->Data[ 1674 ];

	UObject_execMakeColor_Parms MakeColor_Parms;
	MakeColor_Parms.R = R;
	MakeColor_Parms.G = G;
	MakeColor_Parms.B = B;
	MakeColor_Parms.A = A;

	this->ProcessEvent ( pFnMakeColor, &MakeColor_Parms, NULL );

	return MakeColor_Parms.ReturnValue;
};

// Function Core.Object.Add_ColorColor
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FColor                  A                              ( CPF_Parm )
// struct FColor                  B                              ( CPF_Parm )

struct FColor UObject::Add_ColorColor ( struct FColor A, struct FColor B )
{
	static UFunction* pFnAdd_ColorColor = NULL;

	if ( ! pFnAdd_ColorColor )
		pFnAdd_ColorColor = (UFunction*) UObject::GObjObjects()->Data[ 2048 ];

	UObject_execAdd_ColorColor_Parms Add_ColorColor_Parms;
	memcpy ( &Add_ColorColor_Parms.A, &A, 0x4 );
	memcpy ( &Add_ColorColor_Parms.B, &B, 0x4 );

	this->ProcessEvent ( pFnAdd_ColorColor, &Add_ColorColor_Parms, NULL );

	return Add_ColorColor_Parms.ReturnValue;
};

// Function Core.Object.Multiply_ColorFloat
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FColor                  A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

struct FColor UObject::Multiply_ColorFloat ( struct FColor A, float B )
{
	static UFunction* pFnMultiply_ColorFloat = NULL;

	if ( ! pFnMultiply_ColorFloat )
		pFnMultiply_ColorFloat = (UFunction*) UObject::GObjObjects()->Data[ 2055 ];

	UObject_execMultiply_ColorFloat_Parms Multiply_ColorFloat_Parms;
	memcpy ( &Multiply_ColorFloat_Parms.A, &A, 0x4 );
	Multiply_ColorFloat_Parms.B = B;

	this->ProcessEvent ( pFnMultiply_ColorFloat, &Multiply_ColorFloat_Parms, NULL );

	return Multiply_ColorFloat_Parms.ReturnValue;
};

// Function Core.Object.Multiply_FloatColor
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// struct FColor                  B                              ( CPF_Parm )

struct FColor UObject::Multiply_FloatColor ( float A, struct FColor B )
{
	static UFunction* pFnMultiply_FloatColor = NULL;

	if ( ! pFnMultiply_FloatColor )
		pFnMultiply_FloatColor = (UFunction*) UObject::GObjObjects()->Data[ 2059 ];

	UObject_execMultiply_FloatColor_Parms Multiply_FloatColor_Parms;
	Multiply_FloatColor_Parms.A = A;
	memcpy ( &Multiply_FloatColor_Parms.B, &B, 0x4 );

	this->ProcessEvent ( pFnMultiply_FloatColor, &Multiply_FloatColor_Parms, NULL );

	return Multiply_FloatColor_Parms.ReturnValue;
};

// Function Core.Object.Subtract_ColorColor
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FColor                  A                              ( CPF_Parm )
// struct FColor                  B                              ( CPF_Parm )

struct FColor UObject::Subtract_ColorColor ( struct FColor A, struct FColor B )
{
	static UFunction* pFnSubtract_ColorColor = NULL;

	if ( ! pFnSubtract_ColorColor )
		pFnSubtract_ColorColor = (UFunction*) UObject::GObjObjects()->Data[ 2063 ];

	UObject_execSubtract_ColorColor_Parms Subtract_ColorColor_Parms;
	memcpy ( &Subtract_ColorColor_Parms.A, &A, 0x4 );
	memcpy ( &Subtract_ColorColor_Parms.B, &B, 0x4 );

	this->ProcessEvent ( pFnSubtract_ColorColor, &Subtract_ColorColor_Parms, NULL );

	return Subtract_ColorColor_Parms.ReturnValue;
};

// Function Core.Object.EvalInterpCurveVector2D
// [0x00020401] ( FUNC_Final )
// Parameters infos:
// struct FVector2D               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FInterpCurveVector2D    Vector2DCurve                  ( CPF_Parm | CPF_NeedCtorLink )
// float                          InVal                          ( CPF_Parm )

struct FVector2D UObject::EvalInterpCurveVector2D ( struct FInterpCurveVector2D Vector2DCurve, float InVal )
{
	static UFunction* pFnEvalInterpCurveVector2D = NULL;

	if ( ! pFnEvalInterpCurveVector2D )
		pFnEvalInterpCurveVector2D = (UFunction*) UObject::GObjObjects()->Data[ 2067 ];

	UObject_execEvalInterpCurveVector2D_Parms EvalInterpCurveVector2D_Parms;
	memcpy ( &EvalInterpCurveVector2D_Parms.Vector2DCurve, &Vector2DCurve, 0x10 );
	EvalInterpCurveVector2D_Parms.InVal = InVal;

	this->ProcessEvent ( pFnEvalInterpCurveVector2D, &EvalInterpCurveVector2D_Parms, NULL );

	return EvalInterpCurveVector2D_Parms.ReturnValue;
};

// Function Core.Object.EvalInterpCurveVector
// [0x00020401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FInterpCurveVector      VectorCurve                    ( CPF_Parm | CPF_NeedCtorLink )
// float                          InVal                          ( CPF_Parm )

struct FVector UObject::EvalInterpCurveVector ( struct FInterpCurveVector VectorCurve, float InVal )
{
	static UFunction* pFnEvalInterpCurveVector = NULL;

	if ( ! pFnEvalInterpCurveVector )
		pFnEvalInterpCurveVector = (UFunction*) UObject::GObjObjects()->Data[ 2071 ];

	UObject_execEvalInterpCurveVector_Parms EvalInterpCurveVector_Parms;
	memcpy ( &EvalInterpCurveVector_Parms.VectorCurve, &VectorCurve, 0x10 );
	EvalInterpCurveVector_Parms.InVal = InVal;

	this->ProcessEvent ( pFnEvalInterpCurveVector, &EvalInterpCurveVector_Parms, NULL );

	return EvalInterpCurveVector_Parms.ReturnValue;
};

// Function Core.Object.EvalInterpCurveFloat
// [0x00020401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FInterpCurveFloat       FloatCurve                     ( CPF_Parm | CPF_NeedCtorLink )
// float                          InVal                          ( CPF_Parm )

float UObject::EvalInterpCurveFloat ( struct FInterpCurveFloat FloatCurve, float InVal )
{
	static UFunction* pFnEvalInterpCurveFloat = NULL;

	if ( ! pFnEvalInterpCurveFloat )
		pFnEvalInterpCurveFloat = (UFunction*) UObject::GObjObjects()->Data[ 2089 ];

	UObject_execEvalInterpCurveFloat_Parms EvalInterpCurveFloat_Parms;
	memcpy ( &EvalInterpCurveFloat_Parms.FloatCurve, &FloatCurve, 0x10 );
	EvalInterpCurveFloat_Parms.InVal = InVal;

	this->ProcessEvent ( pFnEvalInterpCurveFloat, &EvalInterpCurveFloat_Parms, NULL );

	return EvalInterpCurveFloat_Parms.ReturnValue;
};

// Function Core.Object.vect2d
// [0x00822003] ( FUNC_Final )
// Parameters infos:
// struct FVector2D               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          InX                            ( CPF_Parm )
// float                          InY                            ( CPF_Parm )

struct FVector2D UObject::vect2d ( float InX, float InY )
{
	static UFunction* pFnvect2d = NULL;

	if ( ! pFnvect2d )
		pFnvect2d = (UFunction*) UObject::GObjObjects()->Data[ 2103 ];

	UObject_execvect2d_Parms vect2d_Parms;
	vect2d_Parms.InX = InX;
	vect2d_Parms.InY = InY;

	this->ProcessEvent ( pFnvect2d, &vect2d_Parms, NULL );

	return vect2d_Parms.ReturnValue;
};

// Function Core.Object.GetMappedRangeValue
// [0x00022501] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector2D               InputRange                     ( CPF_Parm )
// struct FVector2D               OutputRange                    ( CPF_Parm )
// float                          Value                          ( CPF_Parm )

float UObject::GetMappedRangeValue ( struct FVector2D InputRange, struct FVector2D OutputRange, float Value )
{
	static UFunction* pFnGetMappedRangeValue = NULL;

	if ( ! pFnGetMappedRangeValue )
		pFnGetMappedRangeValue = (UFunction*) UObject::GObjObjects()->Data[ 2116 ];

	UObject_execGetMappedRangeValue_Parms GetMappedRangeValue_Parms;
	memcpy ( &GetMappedRangeValue_Parms.InputRange, &InputRange, 0x8 );
	memcpy ( &GetMappedRangeValue_Parms.OutputRange, &OutputRange, 0x8 );
	GetMappedRangeValue_Parms.Value = Value;

	this->ProcessEvent ( pFnGetMappedRangeValue, &GetMappedRangeValue_Parms, NULL );

	return GetMappedRangeValue_Parms.ReturnValue;
};

// Function Core.Object.GetRangePctByValue
// [0x00022103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector2D               Range                          ( CPF_Parm )
// float                          Value                          ( CPF_Parm )

float UObject::GetRangePctByValue ( struct FVector2D Range, float Value )
{
	static UFunction* pFnGetRangePctByValue = NULL;

	if ( ! pFnGetRangePctByValue )
		pFnGetRangePctByValue = (UFunction*) UObject::GObjObjects()->Data[ 2121 ];

	UObject_execGetRangePctByValue_Parms GetRangePctByValue_Parms;
	memcpy ( &GetRangePctByValue_Parms.Range, &Range, 0x8 );
	GetRangePctByValue_Parms.Value = Value;

	this->ProcessEvent ( pFnGetRangePctByValue, &GetRangePctByValue_Parms, NULL );

	return GetRangePctByValue_Parms.ReturnValue;
};

// Function Core.Object.GetRangeValueByPct
// [0x00022103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector2D               Range                          ( CPF_Parm )
// float                          Pct                            ( CPF_Parm )

float UObject::GetRangeValueByPct ( struct FVector2D Range, float Pct )
{
	static UFunction* pFnGetRangeValueByPct = NULL;

	if ( ! pFnGetRangeValueByPct )
		pFnGetRangeValueByPct = (UFunction*) UObject::GObjObjects()->Data[ 2126 ];

	UObject_execGetRangeValueByPct_Parms GetRangeValueByPct_Parms;
	memcpy ( &GetRangeValueByPct_Parms.Range, &Range, 0x8 );
	GetRangeValueByPct_Parms.Pct = Pct;

	this->ProcessEvent ( pFnGetRangeValueByPct, &GetRangeValueByPct_Parms, NULL );

	return GetRangeValueByPct_Parms.ReturnValue;
};

// Function Core.Object.Subtract_Vector2DVector2D
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// struct FVector2D               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector2D               A                              ( CPF_Parm )
// struct FVector2D               B                              ( CPF_Parm )

struct FVector2D UObject::Subtract_Vector2DVector2D ( struct FVector2D A, struct FVector2D B )
{
	static UFunction* pFnSubtract_Vector2DVector2D = NULL;

	if ( ! pFnSubtract_Vector2DVector2D )
		pFnSubtract_Vector2DVector2D = (UFunction*) UObject::GObjObjects()->Data[ 2130 ];

	UObject_execSubtract_Vector2DVector2D_Parms Subtract_Vector2DVector2D_Parms;
	memcpy ( &Subtract_Vector2DVector2D_Parms.A, &A, 0x8 );
	memcpy ( &Subtract_Vector2DVector2D_Parms.B, &B, 0x8 );

	this->ProcessEvent ( pFnSubtract_Vector2DVector2D, &Subtract_Vector2DVector2D_Parms, NULL );

	return Subtract_Vector2DVector2D_Parms.ReturnValue;
};

// Function Core.Object.Add_Vector2DVector2D
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// struct FVector2D               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector2D               A                              ( CPF_Parm )
// struct FVector2D               B                              ( CPF_Parm )

struct FVector2D UObject::Add_Vector2DVector2D ( struct FVector2D A, struct FVector2D B )
{
	static UFunction* pFnAdd_Vector2DVector2D = NULL;

	if ( ! pFnAdd_Vector2DVector2D )
		pFnAdd_Vector2DVector2D = (UFunction*) UObject::GObjObjects()->Data[ 2134 ];

	UObject_execAdd_Vector2DVector2D_Parms Add_Vector2DVector2D_Parms;
	memcpy ( &Add_Vector2DVector2D_Parms.A, &A, 0x8 );
	memcpy ( &Add_Vector2DVector2D_Parms.B, &B, 0x8 );

	this->ProcessEvent ( pFnAdd_Vector2DVector2D, &Add_Vector2DVector2D_Parms, NULL );

	return Add_Vector2DVector2D_Parms.ReturnValue;
};

// Function Core.Object.Subtract_QuatQuat
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// struct FQuat                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FQuat                   A                              ( CPF_Parm )
// struct FQuat                   B                              ( CPF_Parm )

struct FQuat UObject::Subtract_QuatQuat ( struct FQuat A, struct FQuat B )
{
	static UFunction* pFnSubtract_QuatQuat = NULL;

	if ( ! pFnSubtract_QuatQuat )
		pFnSubtract_QuatQuat = (UFunction*) UObject::GObjObjects()->Data[ 2138 ];

	UObject_execSubtract_QuatQuat_Parms Subtract_QuatQuat_Parms;
	memcpy ( &Subtract_QuatQuat_Parms.A, &A, 0x10 );
	memcpy ( &Subtract_QuatQuat_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnSubtract_QuatQuat, &Subtract_QuatQuat_Parms, NULL );

	return Subtract_QuatQuat_Parms.ReturnValue;
};

// Function Core.Object.Add_QuatQuat
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// struct FQuat                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FQuat                   A                              ( CPF_Parm )
// struct FQuat                   B                              ( CPF_Parm )

struct FQuat UObject::Add_QuatQuat ( struct FQuat A, struct FQuat B )
{
	static UFunction* pFnAdd_QuatQuat = NULL;

	if ( ! pFnAdd_QuatQuat )
		pFnAdd_QuatQuat = (UFunction*) UObject::GObjObjects()->Data[ 2142 ];

	UObject_execAdd_QuatQuat_Parms Add_QuatQuat_Parms;
	memcpy ( &Add_QuatQuat_Parms.A, &A, 0x10 );
	memcpy ( &Add_QuatQuat_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnAdd_QuatQuat, &Add_QuatQuat_Parms, NULL );

	return Add_QuatQuat_Parms.ReturnValue;
};

// Function Core.Object.QuatSlerp
// [0x00026401] ( FUNC_Final )
// Parameters infos:
// struct FQuat                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FQuat                   A                              ( CPF_Parm )
// struct FQuat                   B                              ( CPF_Parm )
// float                          Alpha                          ( CPF_Parm )
// unsigned long                  bShortestPath                  ( CPF_OptionalParm | CPF_Parm )

struct FQuat UObject::QuatSlerp ( struct FQuat A, struct FQuat B, float Alpha, unsigned long bShortestPath )
{
	static UFunction* pFnQuatSlerp = NULL;

	if ( ! pFnQuatSlerp )
		pFnQuatSlerp = (UFunction*) UObject::GObjObjects()->Data[ 2151 ];

	UObject_execQuatSlerp_Parms QuatSlerp_Parms;
	memcpy ( &QuatSlerp_Parms.A, &A, 0x10 );
	memcpy ( &QuatSlerp_Parms.B, &B, 0x10 );
	QuatSlerp_Parms.Alpha = Alpha;
	QuatSlerp_Parms.bShortestPath = bShortestPath;

	this->ProcessEvent ( pFnQuatSlerp, &QuatSlerp_Parms, NULL );

	return QuatSlerp_Parms.ReturnValue;
};

// Function Core.Object.QuatToRotator
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FQuat                   A                              ( CPF_Parm )

struct FRotator UObject::QuatToRotator ( struct FQuat A )
{
	static UFunction* pFnQuatToRotator = NULL;

	if ( ! pFnQuatToRotator )
		pFnQuatToRotator = (UFunction*) UObject::GObjObjects()->Data[ 2155 ];

	UObject_execQuatToRotator_Parms QuatToRotator_Parms;
	memcpy ( &QuatToRotator_Parms.A, &A, 0x10 );

	this->ProcessEvent ( pFnQuatToRotator, &QuatToRotator_Parms, NULL );

	return QuatToRotator_Parms.ReturnValue;
};

// Function Core.Object.QuatFromRotator
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FQuat                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                A                              ( CPF_Parm )

struct FQuat UObject::QuatFromRotator ( struct FRotator A )
{
	static UFunction* pFnQuatFromRotator = NULL;

	if ( ! pFnQuatFromRotator )
		pFnQuatFromRotator = (UFunction*) UObject::GObjObjects()->Data[ 2161 ];

	UObject_execQuatFromRotator_Parms QuatFromRotator_Parms;
	memcpy ( &QuatFromRotator_Parms.A, &A, 0xC );

	this->ProcessEvent ( pFnQuatFromRotator, &QuatFromRotator_Parms, NULL );

	return QuatFromRotator_Parms.ReturnValue;
};

// Function Core.Object.QuatFromAxisAndAngle
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FQuat                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Axis                           ( CPF_Parm )
// float                          Angle                          ( CPF_Parm )

struct FQuat UObject::QuatFromAxisAndAngle ( struct FVector Axis, float Angle )
{
	static UFunction* pFnQuatFromAxisAndAngle = NULL;

	if ( ! pFnQuatFromAxisAndAngle )
		pFnQuatFromAxisAndAngle = (UFunction*) UObject::GObjObjects()->Data[ 2164 ];

	UObject_execQuatFromAxisAndAngle_Parms QuatFromAxisAndAngle_Parms;
	memcpy ( &QuatFromAxisAndAngle_Parms.Axis, &Axis, 0xC );
	QuatFromAxisAndAngle_Parms.Angle = Angle;

	this->ProcessEvent ( pFnQuatFromAxisAndAngle, &QuatFromAxisAndAngle_Parms, NULL );

	return QuatFromAxisAndAngle_Parms.ReturnValue;
};

// Function Core.Object.QuatFindBetween
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FQuat                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )

struct FQuat UObject::QuatFindBetween ( struct FVector A, struct FVector B )
{
	static UFunction* pFnQuatFindBetween = NULL;

	if ( ! pFnQuatFindBetween )
		pFnQuatFindBetween = (UFunction*) UObject::GObjObjects()->Data[ 2167 ];

	UObject_execQuatFindBetween_Parms QuatFindBetween_Parms;
	memcpy ( &QuatFindBetween_Parms.A, &A, 0xC );
	memcpy ( &QuatFindBetween_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnQuatFindBetween, &QuatFindBetween_Parms, NULL );

	return QuatFindBetween_Parms.ReturnValue;
};

// Function Core.Object.QuatRotateVector
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FQuat                   A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )

struct FVector UObject::QuatRotateVector ( struct FQuat A, struct FVector B )
{
	static UFunction* pFnQuatRotateVector = NULL;

	if ( ! pFnQuatRotateVector )
		pFnQuatRotateVector = (UFunction*) UObject::GObjObjects()->Data[ 2171 ];

	UObject_execQuatRotateVector_Parms QuatRotateVector_Parms;
	memcpy ( &QuatRotateVector_Parms.A, &A, 0x10 );
	memcpy ( &QuatRotateVector_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnQuatRotateVector, &QuatRotateVector_Parms, NULL );

	return QuatRotateVector_Parms.ReturnValue;
};

// Function Core.Object.QuatInvert
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FQuat                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FQuat                   A                              ( CPF_Parm )

struct FQuat UObject::QuatInvert ( struct FQuat A )
{
	static UFunction* pFnQuatInvert = NULL;

	if ( ! pFnQuatInvert )
		pFnQuatInvert = (UFunction*) UObject::GObjObjects()->Data[ 2175 ];

	UObject_execQuatInvert_Parms QuatInvert_Parms;
	memcpy ( &QuatInvert_Parms.A, &A, 0x10 );

	this->ProcessEvent ( pFnQuatInvert, &QuatInvert_Parms, NULL );

	return QuatInvert_Parms.ReturnValue;
};

// Function Core.Object.QuatDot
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FQuat                   A                              ( CPF_Parm )
// struct FQuat                   B                              ( CPF_Parm )

float UObject::QuatDot ( struct FQuat A, struct FQuat B )
{
	static UFunction* pFnQuatDot = NULL;

	if ( ! pFnQuatDot )
		pFnQuatDot = (UFunction*) UObject::GObjObjects()->Data[ 2179 ];

	UObject_execQuatDot_Parms QuatDot_Parms;
	memcpy ( &QuatDot_Parms.A, &A, 0x10 );
	memcpy ( &QuatDot_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnQuatDot, &QuatDot_Parms, NULL );

	return QuatDot_Parms.ReturnValue;
};

// Function Core.Object.QuatProduct
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FQuat                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FQuat                   A                              ( CPF_Parm )
// struct FQuat                   B                              ( CPF_Parm )

struct FQuat UObject::QuatProduct ( struct FQuat A, struct FQuat B )
{
	static UFunction* pFnQuatProduct = NULL;

	if ( ! pFnQuatProduct )
		pFnQuatProduct = (UFunction*) UObject::GObjObjects()->Data[ 2182 ];

	UObject_execQuatProduct_Parms QuatProduct_Parms;
	memcpy ( &QuatProduct_Parms.A, &A, 0x10 );
	memcpy ( &QuatProduct_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnQuatProduct, &QuatProduct_Parms, NULL );

	return QuatProduct_Parms.ReturnValue;
};

// Function Core.Object.MatrixGetAxis
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FMatrix                 TM                             ( CPF_Parm )
// unsigned char                  Axis                           ( CPF_Parm )

struct FVector UObject::MatrixGetAxis ( struct FMatrix TM, unsigned char Axis )
{
	static UFunction* pFnMatrixGetAxis = NULL;

	if ( ! pFnMatrixGetAxis )
		pFnMatrixGetAxis = (UFunction*) UObject::GObjObjects()->Data[ 2186 ];

	UObject_execMatrixGetAxis_Parms MatrixGetAxis_Parms;
	memcpy ( &MatrixGetAxis_Parms.TM, &TM, 0x40 );
	MatrixGetAxis_Parms.Axis = Axis;

	this->ProcessEvent ( pFnMatrixGetAxis, &MatrixGetAxis_Parms, NULL );

	return MatrixGetAxis_Parms.ReturnValue;
};

// Function Core.Object.MatrixGetOrigin
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FMatrix                 TM                             ( CPF_Parm )

struct FVector UObject::MatrixGetOrigin ( struct FMatrix TM )
{
	static UFunction* pFnMatrixGetOrigin = NULL;

	if ( ! pFnMatrixGetOrigin )
		pFnMatrixGetOrigin = (UFunction*) UObject::GObjObjects()->Data[ 2190 ];

	UObject_execMatrixGetOrigin_Parms MatrixGetOrigin_Parms;
	memcpy ( &MatrixGetOrigin_Parms.TM, &TM, 0x40 );

	this->ProcessEvent ( pFnMatrixGetOrigin, &MatrixGetOrigin_Parms, NULL );

	return MatrixGetOrigin_Parms.ReturnValue;
};

// Function Core.Object.MatrixGetRotator
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FMatrix                 TM                             ( CPF_Parm )

struct FRotator UObject::MatrixGetRotator ( struct FMatrix TM )
{
	static UFunction* pFnMatrixGetRotator = NULL;

	if ( ! pFnMatrixGetRotator )
		pFnMatrixGetRotator = (UFunction*) UObject::GObjObjects()->Data[ 2204 ];

	UObject_execMatrixGetRotator_Parms MatrixGetRotator_Parms;
	memcpy ( &MatrixGetRotator_Parms.TM, &TM, 0x40 );

	this->ProcessEvent ( pFnMatrixGetRotator, &MatrixGetRotator_Parms, NULL );

	return MatrixGetRotator_Parms.ReturnValue;
};

// Function Core.Object.MakeRotationMatrix
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FMatrix                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                Rotation                       ( CPF_Parm )

struct FMatrix UObject::MakeRotationMatrix ( struct FRotator Rotation )
{
	static UFunction* pFnMakeRotationMatrix = NULL;

	if ( ! pFnMakeRotationMatrix )
		pFnMakeRotationMatrix = (UFunction*) UObject::GObjObjects()->Data[ 2207 ];

	UObject_execMakeRotationMatrix_Parms MakeRotationMatrix_Parms;
	memcpy ( &MakeRotationMatrix_Parms.Rotation, &Rotation, 0xC );

	this->ProcessEvent ( pFnMakeRotationMatrix, &MakeRotationMatrix_Parms, NULL );

	return MakeRotationMatrix_Parms.ReturnValue;
};

// Function Core.Object.MakeRotationTranslationMatrix
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FMatrix                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Translation                    ( CPF_Parm )
// struct FRotator                Rotation                       ( CPF_Parm )

struct FMatrix UObject::MakeRotationTranslationMatrix ( struct FVector Translation, struct FRotator Rotation )
{
	static UFunction* pFnMakeRotationTranslationMatrix = NULL;

	if ( ! pFnMakeRotationTranslationMatrix )
		pFnMakeRotationTranslationMatrix = (UFunction*) UObject::GObjObjects()->Data[ 2210 ];

	UObject_execMakeRotationTranslationMatrix_Parms MakeRotationTranslationMatrix_Parms;
	memcpy ( &MakeRotationTranslationMatrix_Parms.Translation, &Translation, 0xC );
	memcpy ( &MakeRotationTranslationMatrix_Parms.Rotation, &Rotation, 0xC );

	this->ProcessEvent ( pFnMakeRotationTranslationMatrix, &MakeRotationTranslationMatrix_Parms, NULL );

	return MakeRotationTranslationMatrix_Parms.ReturnValue;
};

// Function Core.Object.InverseTransformNormal
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FMatrix                 TM                             ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm )

struct FVector UObject::InverseTransformNormal ( struct FMatrix TM, struct FVector A )
{
	static UFunction* pFnInverseTransformNormal = NULL;

	if ( ! pFnInverseTransformNormal )
		pFnInverseTransformNormal = (UFunction*) UObject::GObjObjects()->Data[ 2213 ];

	UObject_execInverseTransformNormal_Parms InverseTransformNormal_Parms;
	memcpy ( &InverseTransformNormal_Parms.TM, &TM, 0x40 );
	memcpy ( &InverseTransformNormal_Parms.A, &A, 0xC );

	this->ProcessEvent ( pFnInverseTransformNormal, &InverseTransformNormal_Parms, NULL );

	return InverseTransformNormal_Parms.ReturnValue;
};

// Function Core.Object.TransformNormal
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FMatrix                 TM                             ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm )

struct FVector UObject::TransformNormal ( struct FMatrix TM, struct FVector A )
{
	static UFunction* pFnTransformNormal = NULL;

	if ( ! pFnTransformNormal )
		pFnTransformNormal = (UFunction*) UObject::GObjObjects()->Data[ 2217 ];

	UObject_execTransformNormal_Parms TransformNormal_Parms;
	memcpy ( &TransformNormal_Parms.TM, &TM, 0x40 );
	memcpy ( &TransformNormal_Parms.A, &A, 0xC );

	this->ProcessEvent ( pFnTransformNormal, &TransformNormal_Parms, NULL );

	return TransformNormal_Parms.ReturnValue;
};

// Function Core.Object.InverseTransformVector
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FMatrix                 TM                             ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm )

struct FVector UObject::InverseTransformVector ( struct FMatrix TM, struct FVector A )
{
	static UFunction* pFnInverseTransformVector = NULL;

	if ( ! pFnInverseTransformVector )
		pFnInverseTransformVector = (UFunction*) UObject::GObjObjects()->Data[ 2221 ];

	UObject_execInverseTransformVector_Parms InverseTransformVector_Parms;
	memcpy ( &InverseTransformVector_Parms.TM, &TM, 0x40 );
	memcpy ( &InverseTransformVector_Parms.A, &A, 0xC );

	this->ProcessEvent ( pFnInverseTransformVector, &InverseTransformVector_Parms, NULL );

	return InverseTransformVector_Parms.ReturnValue;
};

// Function Core.Object.TransformVector
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FMatrix                 TM                             ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm )

struct FVector UObject::TransformVector ( struct FMatrix TM, struct FVector A )
{
	static UFunction* pFnTransformVector = NULL;

	if ( ! pFnTransformVector )
		pFnTransformVector = (UFunction*) UObject::GObjObjects()->Data[ 2225 ];

	UObject_execTransformVector_Parms TransformVector_Parms;
	memcpy ( &TransformVector_Parms.TM, &TM, 0x40 );
	memcpy ( &TransformVector_Parms.A, &A, 0xC );

	this->ProcessEvent ( pFnTransformVector, &TransformVector_Parms, NULL );

	return TransformVector_Parms.ReturnValue;
};

// Function Core.Object.Multiply_MatrixMatrix
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// struct FMatrix                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FMatrix                 A                              ( CPF_Parm )
// struct FMatrix                 B                              ( CPF_Parm )

struct FMatrix UObject::Multiply_MatrixMatrix ( struct FMatrix A, struct FMatrix B )
{
	static UFunction* pFnMultiply_MatrixMatrix = NULL;

	if ( ! pFnMultiply_MatrixMatrix )
		pFnMultiply_MatrixMatrix = (UFunction*) UObject::GObjObjects()->Data[ 2229 ];

	UObject_execMultiply_MatrixMatrix_Parms Multiply_MatrixMatrix_Parms;
	memcpy ( &Multiply_MatrixMatrix_Parms.A, &A, 0x40 );
	memcpy ( &Multiply_MatrixMatrix_Parms.B, &B, 0x40 );

	this->ProcessEvent ( pFnMultiply_MatrixMatrix, &Multiply_MatrixMatrix_Parms, NULL );

	return Multiply_MatrixMatrix_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_NameName
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   A                              ( CPF_Parm )
// struct FName                   B                              ( CPF_Parm )

bool UObject::NotEqual_NameName ( struct FName A, struct FName B )
{
	static UFunction* pFnNotEqual_NameName = NULL;

	if ( ! pFnNotEqual_NameName )
		pFnNotEqual_NameName = (UFunction*) UObject::GObjObjects()->Data[ 2233 ];

	UObject_execNotEqual_NameName_Parms NotEqual_NameName_Parms;
	memcpy ( &NotEqual_NameName_Parms.A, &A, 0x8 );
	memcpy ( &NotEqual_NameName_Parms.B, &B, 0x8 );

	this->ProcessEvent ( pFnNotEqual_NameName, &NotEqual_NameName_Parms, NULL );

	return NotEqual_NameName_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_NameName
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   A                              ( CPF_Parm )
// struct FName                   B                              ( CPF_Parm )

bool UObject::EqualEqual_NameName ( struct FName A, struct FName B )
{
	static UFunction* pFnEqualEqual_NameName = NULL;

	if ( ! pFnEqualEqual_NameName )
		pFnEqualEqual_NameName = (UFunction*) UObject::GObjObjects()->Data[ 2237 ];

	UObject_execEqualEqual_NameName_Parms EqualEqual_NameName_Parms;
	memcpy ( &EqualEqual_NameName_Parms.A, &A, 0x8 );
	memcpy ( &EqualEqual_NameName_Parms.B, &B, 0x8 );

	this->ProcessEvent ( pFnEqualEqual_NameName, &EqualEqual_NameName_Parms, NULL );

	return EqualEqual_NameName_Parms.ReturnValue;
};

// Function Core.Object.IsA
// [0x00020401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   ClassName                      ( CPF_Parm )

bool UObject::IsA ( struct FName ClassName )
{
	static UFunction* pFnIsA = NULL;

	if ( ! pFnIsA )
		pFnIsA = (UFunction*) UObject::GObjObjects()->Data[ 2241 ];

	UObject_execIsA_Parms IsA_Parms;
	memcpy ( &IsA_Parms.ClassName, &ClassName, 0x8 );

	this->ProcessEvent ( pFnIsA, &IsA_Parms, NULL );

	return IsA_Parms.ReturnValue;
};

// Function Core.Object.ClassIsChildOf
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  TestClass                      ( CPF_Parm )
// class UClass*                  ParentClass                    ( CPF_Parm )

bool UObject::ClassIsChildOf ( class UClass* TestClass, class UClass* ParentClass )
{
	static UFunction* pFnClassIsChildOf = NULL;

	if ( ! pFnClassIsChildOf )
		pFnClassIsChildOf = (UFunction*) UObject::GObjObjects()->Data[ 2245 ];

	UObject_execClassIsChildOf_Parms ClassIsChildOf_Parms;
	ClassIsChildOf_Parms.TestClass = TestClass;
	ClassIsChildOf_Parms.ParentClass = ParentClass;

	this->ProcessEvent ( pFnClassIsChildOf, &ClassIsChildOf_Parms, NULL );

	return ClassIsChildOf_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_InterfaceInterface
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UInterface*              A                              ( CPF_Parm )
// class UInterface*              B                              ( CPF_Parm )

bool UObject::NotEqual_InterfaceInterface ( class UInterface* A, class UInterface* B )
{
	static UFunction* pFnNotEqual_InterfaceInterface = NULL;

	if ( ! pFnNotEqual_InterfaceInterface )
		pFnNotEqual_InterfaceInterface = (UFunction*) UObject::GObjObjects()->Data[ 2248 ];

	UObject_execNotEqual_InterfaceInterface_Parms NotEqual_InterfaceInterface_Parms;
	NotEqual_InterfaceInterface_Parms.A = A;
	NotEqual_InterfaceInterface_Parms.B = B;

	this->ProcessEvent ( pFnNotEqual_InterfaceInterface, &NotEqual_InterfaceInterface_Parms, NULL );

	return NotEqual_InterfaceInterface_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_InterfaceInterface
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UInterface*              A                              ( CPF_Parm )
// class UInterface*              B                              ( CPF_Parm )

bool UObject::EqualEqual_InterfaceInterface ( class UInterface* A, class UInterface* B )
{
	static UFunction* pFnEqualEqual_InterfaceInterface = NULL;

	if ( ! pFnEqualEqual_InterfaceInterface )
		pFnEqualEqual_InterfaceInterface = (UFunction*) UObject::GObjObjects()->Data[ 2252 ];

	UObject_execEqualEqual_InterfaceInterface_Parms EqualEqual_InterfaceInterface_Parms;
	EqualEqual_InterfaceInterface_Parms.A = A;
	EqualEqual_InterfaceInterface_Parms.B = B;

	this->ProcessEvent ( pFnEqualEqual_InterfaceInterface, &EqualEqual_InterfaceInterface_Parms, NULL );

	return EqualEqual_InterfaceInterface_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_ObjectObject
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 A                              ( CPF_Parm )
// class UObject*                 B                              ( CPF_Parm )

bool UObject::NotEqual_ObjectObject ( class UObject* A, class UObject* B )
{
	static UFunction* pFnNotEqual_ObjectObject = NULL;

	if ( ! pFnNotEqual_ObjectObject )
		pFnNotEqual_ObjectObject = (UFunction*) UObject::GObjObjects()->Data[ 2256 ];

	UObject_execNotEqual_ObjectObject_Parms NotEqual_ObjectObject_Parms;
	NotEqual_ObjectObject_Parms.A = A;
	NotEqual_ObjectObject_Parms.B = B;

	this->ProcessEvent ( pFnNotEqual_ObjectObject, &NotEqual_ObjectObject_Parms, NULL );

	return NotEqual_ObjectObject_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_ObjectObject
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 A                              ( CPF_Parm )
// class UObject*                 B                              ( CPF_Parm )

bool UObject::EqualEqual_ObjectObject ( class UObject* A, class UObject* B )
{
	static UFunction* pFnEqualEqual_ObjectObject = NULL;

	if ( ! pFnEqualEqual_ObjectObject )
		pFnEqualEqual_ObjectObject = (UFunction*) UObject::GObjObjects()->Data[ 2260 ];

	UObject_execEqualEqual_ObjectObject_Parms EqualEqual_ObjectObject_Parms;
	EqualEqual_ObjectObject_Parms.A = A;
	EqualEqual_ObjectObject_Parms.B = B;

	this->ProcessEvent ( pFnEqualEqual_ObjectObject, &EqualEqual_ObjectObject_Parms, NULL );

	return EqualEqual_ObjectObject_Parms.ReturnValue;
};

// Function Core.Object.PathName
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class UObject*                 CheckObject                    ( CPF_Parm )

struct FString UObject::PathName ( class UObject* CheckObject )
{
	static UFunction* pFnPathName = NULL;

	if ( ! pFnPathName )
		pFnPathName = (UFunction*) UObject::GObjObjects()->Data[ 2264 ];

	UObject_execPathName_Parms PathName_Parms;
	PathName_Parms.CheckObject = CheckObject;

	this->ProcessEvent ( pFnPathName, &PathName_Parms, NULL );

	return PathName_Parms.ReturnValue;
};

// Function Core.Object.SplitString
// [0x00026003] ( FUNC_Final )
// Parameters infos:
// TArray< struct FString >       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Source                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Delimiter                      ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bCullEmpty                     ( CPF_OptionalParm | CPF_Parm )

TArray< struct FString > UObject::SplitString ( struct FString Source, struct FString Delimiter, unsigned long bCullEmpty )
{
	static UFunction* pFnSplitString = NULL;

	if ( ! pFnSplitString )
		pFnSplitString = (UFunction*) UObject::GObjObjects()->Data[ 2268 ];

	UObject_execSplitString_Parms SplitString_Parms;
	memcpy ( &SplitString_Parms.Source, &Source, 0xC );
	memcpy ( &SplitString_Parms.Delimiter, &Delimiter, 0xC );
	SplitString_Parms.bCullEmpty = bCullEmpty;

	this->ProcessEvent ( pFnSplitString, &SplitString_Parms, NULL );

	return SplitString_Parms.ReturnValue;
};

// Function Core.Object.ParseStringIntoArray
// [0x00422401] ( FUNC_Final )
// Parameters infos:
// struct FString                 BaseString                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 delim                          ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bCullEmpty                     ( CPF_Parm )
// TArray< struct FString >       Pieces                         ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UObject::ParseStringIntoArray ( struct FString BaseString, struct FString delim, unsigned long bCullEmpty, TArray< struct FString >* Pieces )
{
	static UFunction* pFnParseStringIntoArray = NULL;

	if ( ! pFnParseStringIntoArray )
		pFnParseStringIntoArray = (UFunction*) UObject::GObjObjects()->Data[ 2005 ];

	UObject_execParseStringIntoArray_Parms ParseStringIntoArray_Parms;
	memcpy ( &ParseStringIntoArray_Parms.BaseString, &BaseString, 0xC );
	memcpy ( &ParseStringIntoArray_Parms.delim, &delim, 0xC );
	ParseStringIntoArray_Parms.bCullEmpty = bCullEmpty;

	this->ProcessEvent ( pFnParseStringIntoArray, &ParseStringIntoArray_Parms, NULL );

	if ( Pieces )
		memcpy ( Pieces, &ParseStringIntoArray_Parms.Pieces, 0xC );
};

// Function Core.Object.JoinArray
// [0x00426003] ( FUNC_Final )
// Parameters infos:
// TArray< struct FString >       StringArray                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 delim                          ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIgnoreBlanks                  ( CPF_OptionalParm | CPF_Parm )
// struct FString                 out_Result                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UObject::JoinArray ( TArray< struct FString > StringArray, struct FString delim, unsigned long bIgnoreBlanks, struct FString* out_Result )
{
	static UFunction* pFnJoinArray = NULL;

	if ( ! pFnJoinArray )
		pFnJoinArray = (UFunction*) UObject::GObjObjects()->Data[ 2278 ];

	UObject_execJoinArray_Parms JoinArray_Parms;
	memcpy ( &JoinArray_Parms.StringArray, &StringArray, 0xC );
	memcpy ( &JoinArray_Parms.delim, &delim, 0xC );
	JoinArray_Parms.bIgnoreBlanks = bIgnoreBlanks;

	this->ProcessEvent ( pFnJoinArray, &JoinArray_Parms, NULL );

	if ( out_Result )
		memcpy ( out_Result, &JoinArray_Parms.out_Result, 0xC );
};

// Function Core.Object.GetRightMost
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Text                           ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

struct FString UObject::GetRightMost ( struct FString Text )
{
	static UFunction* pFnGetRightMost = NULL;

	if ( ! pFnGetRightMost )
		pFnGetRightMost = (UFunction*) UObject::GObjObjects()->Data[ 2284 ];

	UObject_execGetRightMost_Parms GetRightMost_Parms;
	memcpy ( &GetRightMost_Parms.Text, &Text, 0xC );

	this->ProcessEvent ( pFnGetRightMost, &GetRightMost_Parms, NULL );

	return GetRightMost_Parms.ReturnValue;
};

// Function Core.Object.Split
// [0x00026003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Text                           ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FString                 SplitStr                       ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// unsigned long                  bOmitSplitStr                  ( CPF_OptionalParm | CPF_Parm )

struct FString UObject::Split ( struct FString Text, struct FString SplitStr, unsigned long bOmitSplitStr )
{
	static UFunction* pFnSplit = NULL;

	if ( ! pFnSplit )
		pFnSplit = (UFunction*) UObject::GObjObjects()->Data[ 2293 ];

	UObject_execSplit_Parms Split_Parms;
	memcpy ( &Split_Parms.Text, &Text, 0xC );
	memcpy ( &Split_Parms.SplitStr, &SplitStr, 0xC );
	Split_Parms.bOmitSplitStr = bOmitSplitStr;

	this->ProcessEvent ( pFnSplit, &Split_Parms, NULL );

	return Split_Parms.ReturnValue;
};

// Function Core.Object.Repl
// [0x00026401] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Src                            ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FString                 Match                          ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FString                 With                           ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// unsigned long                  bCaseSensitive                 ( CPF_OptionalParm | CPF_Parm )

struct FString UObject::Repl ( struct FString Src, struct FString Match, struct FString With, unsigned long bCaseSensitive )
{
	static UFunction* pFnRepl = NULL;

	if ( ! pFnRepl )
		pFnRepl = (UFunction*) UObject::GObjObjects()->Data[ 2297 ];

	UObject_execRepl_Parms Repl_Parms;
	memcpy ( &Repl_Parms.Src, &Src, 0xC );
	memcpy ( &Repl_Parms.Match, &Match, 0xC );
	memcpy ( &Repl_Parms.With, &With, 0xC );
	Repl_Parms.bCaseSensitive = bCaseSensitive;

	this->ProcessEvent ( pFnRepl, &Repl_Parms, NULL );

	return Repl_Parms.ReturnValue;
};

// Function Core.Object.Asc
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

int UObject::Asc ( struct FString S )
{
	static UFunction* pFnAsc = NULL;

	if ( ! pFnAsc )
		pFnAsc = (UFunction*) UObject::GObjObjects()->Data[ 2303 ];

	UObject_execAsc_Parms Asc_Parms;
	memcpy ( &Asc_Parms.S, &S, 0xC );

	this->ProcessEvent ( pFnAsc, &Asc_Parms, NULL );

	return Asc_Parms.ReturnValue;
};

// Function Core.Object.Chr
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            I                              ( CPF_Parm )

struct FString UObject::Chr ( int I )
{
	static UFunction* pFnChr = NULL;

	if ( ! pFnChr )
		pFnChr = (UFunction*) UObject::GObjObjects()->Data[ 2309 ];

	UObject_execChr_Parms Chr_Parms;
	Chr_Parms.I = I;

	this->ProcessEvent ( pFnChr, &Chr_Parms, NULL );

	return Chr_Parms.ReturnValue;
};

// Function Core.Object.Locs
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 S                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

struct FString UObject::Locs ( struct FString S )
{
	static UFunction* pFnLocs = NULL;

	if ( ! pFnLocs )
		pFnLocs = (UFunction*) UObject::GObjObjects()->Data[ 2312 ];

	UObject_execLocs_Parms Locs_Parms;
	memcpy ( &Locs_Parms.S, &S, 0xC );

	this->ProcessEvent ( pFnLocs, &Locs_Parms, NULL );

	return Locs_Parms.ReturnValue;
};

// Function Core.Object.Caps
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 S                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

struct FString UObject::Caps ( struct FString S )
{
	static UFunction* pFnCaps = NULL;

	if ( ! pFnCaps )
		pFnCaps = (UFunction*) UObject::GObjObjects()->Data[ 2315 ];

	UObject_execCaps_Parms Caps_Parms;
	memcpy ( &Caps_Parms.S, &S, 0xC );

	this->ProcessEvent ( pFnCaps, &Caps_Parms, NULL );

	return Caps_Parms.ReturnValue;
};

// Function Core.Object.Right
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 S                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// int                            I                              ( CPF_Parm )

struct FString UObject::Right ( struct FString S, int I )
{
	static UFunction* pFnRight = NULL;

	if ( ! pFnRight )
		pFnRight = (UFunction*) UObject::GObjObjects()->Data[ 2318 ];

	UObject_execRight_Parms Right_Parms;
	memcpy ( &Right_Parms.S, &S, 0xC );
	Right_Parms.I = I;

	this->ProcessEvent ( pFnRight, &Right_Parms, NULL );

	return Right_Parms.ReturnValue;
};

// Function Core.Object.Left
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 S                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// int                            I                              ( CPF_Parm )

struct FString UObject::Left ( struct FString S, int I )
{
	static UFunction* pFnLeft = NULL;

	if ( ! pFnLeft )
		pFnLeft = (UFunction*) UObject::GObjObjects()->Data[ 2321 ];

	UObject_execLeft_Parms Left_Parms;
	memcpy ( &Left_Parms.S, &S, 0xC );
	Left_Parms.I = I;

	this->ProcessEvent ( pFnLeft, &Left_Parms, NULL );

	return Left_Parms.ReturnValue;
};

// Function Core.Object.Mid
// [0x00026401] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 S                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// int                            I                              ( CPF_Parm )
// int                            J                              ( CPF_OptionalParm | CPF_Parm )

struct FString UObject::Mid ( struct FString S, int I, int J )
{
	static UFunction* pFnMid = NULL;

	if ( ! pFnMid )
		pFnMid = (UFunction*) UObject::GObjObjects()->Data[ 2325 ];

	UObject_execMid_Parms Mid_Parms;
	memcpy ( &Mid_Parms.S, &S, 0xC );
	Mid_Parms.I = I;
	Mid_Parms.J = J;

	this->ProcessEvent ( pFnMid, &Mid_Parms, NULL );

	return Mid_Parms.ReturnValue;
};

// Function Core.Object.InStr
// [0x00026401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 S                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FString                 T                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// unsigned long                  bSearchFromRight               ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIgnoreCase                    ( CPF_OptionalParm | CPF_Parm )
// int                            StartPos                       ( CPF_OptionalParm | CPF_Parm )

int UObject::InStr ( struct FString S, struct FString T, unsigned long bSearchFromRight, unsigned long bIgnoreCase, int StartPos )
{
	static UFunction* pFnInStr = NULL;

	if ( ! pFnInStr )
		pFnInStr = (UFunction*) UObject::GObjObjects()->Data[ 2329 ];

	UObject_execInStr_Parms InStr_Parms;
	memcpy ( &InStr_Parms.S, &S, 0xC );
	memcpy ( &InStr_Parms.T, &T, 0xC );
	InStr_Parms.bSearchFromRight = bSearchFromRight;
	InStr_Parms.bIgnoreCase = bIgnoreCase;
	InStr_Parms.StartPos = StartPos;

	this->ProcessEvent ( pFnInStr, &InStr_Parms, NULL );

	return InStr_Parms.ReturnValue;
};

// Function Core.Object.Len
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 S                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

int UObject::Len ( struct FString S )
{
	static UFunction* pFnLen = NULL;

	if ( ! pFnLen )
		pFnLen = (UFunction*) UObject::GObjObjects()->Data[ 2334 ];

	UObject_execLen_Parms Len_Parms;
	memcpy ( &Len_Parms.S, &S, 0xC );

	this->ProcessEvent ( pFnLen, &Len_Parms, NULL );

	return Len_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_StrStr
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FString                 A                              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

struct FString UObject::SubtractEqual_StrStr ( struct FString B, struct FString* A )
{
	static UFunction* pFnSubtractEqual_StrStr = NULL;

	if ( ! pFnSubtractEqual_StrStr )
		pFnSubtractEqual_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 2341 ];

	UObject_execSubtractEqual_StrStr_Parms SubtractEqual_StrStr_Parms;
	memcpy ( &SubtractEqual_StrStr_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnSubtractEqual_StrStr, &SubtractEqual_StrStr_Parms, NULL );

	if ( A )
		memcpy ( A, &SubtractEqual_StrStr_Parms.A, 0xC );

	return SubtractEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.AtEqual_StrStr
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FString                 A                              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

struct FString UObject::AtEqual_StrStr ( struct FString B, struct FString* A )
{
	static UFunction* pFnAtEqual_StrStr = NULL;

	if ( ! pFnAtEqual_StrStr )
		pFnAtEqual_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 1434 ];

	UObject_execAtEqual_StrStr_Parms AtEqual_StrStr_Parms;
	memcpy ( &AtEqual_StrStr_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnAtEqual_StrStr, &AtEqual_StrStr_Parms, NULL );

	if ( A )
		memcpy ( A, &AtEqual_StrStr_Parms.A, 0xC );

	return AtEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.ConcatEqual_StrStr
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FString                 A                              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

struct FString UObject::ConcatEqual_StrStr ( struct FString B, struct FString* A )
{
	static UFunction* pFnConcatEqual_StrStr = NULL;

	if ( ! pFnConcatEqual_StrStr )
		pFnConcatEqual_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 2289 ];

	UObject_execConcatEqual_StrStr_Parms ConcatEqual_StrStr_Parms;
	memcpy ( &ConcatEqual_StrStr_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnConcatEqual_StrStr, &ConcatEqual_StrStr_Parms, NULL );

	if ( A )
		memcpy ( A, &ConcatEqual_StrStr_Parms.A, 0xC );

	return ConcatEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.ComplementEqual_StrStr
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 A                              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_NeedCtorLink )

bool UObject::ComplementEqual_StrStr ( struct FString A, struct FString B )
{
	static UFunction* pFnComplementEqual_StrStr = NULL;

	if ( ! pFnComplementEqual_StrStr )
		pFnComplementEqual_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 2349 ];

	UObject_execComplementEqual_StrStr_Parms ComplementEqual_StrStr_Parms;
	memcpy ( &ComplementEqual_StrStr_Parms.A, &A, 0xC );
	memcpy ( &ComplementEqual_StrStr_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnComplementEqual_StrStr, &ComplementEqual_StrStr_Parms, NULL );

	return ComplementEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_StrStr
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 A                              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_NeedCtorLink )

bool UObject::NotEqual_StrStr ( struct FString A, struct FString B )
{
	static UFunction* pFnNotEqual_StrStr = NULL;

	if ( ! pFnNotEqual_StrStr )
		pFnNotEqual_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 2352 ];

	UObject_execNotEqual_StrStr_Parms NotEqual_StrStr_Parms;
	memcpy ( &NotEqual_StrStr_Parms.A, &A, 0xC );
	memcpy ( &NotEqual_StrStr_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnNotEqual_StrStr, &NotEqual_StrStr_Parms, NULL );

	return NotEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_StrStr
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 A                              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_NeedCtorLink )

bool UObject::EqualEqual_StrStr ( struct FString A, struct FString B )
{
	static UFunction* pFnEqualEqual_StrStr = NULL;

	if ( ! pFnEqualEqual_StrStr )
		pFnEqualEqual_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 2356 ];

	UObject_execEqualEqual_StrStr_Parms EqualEqual_StrStr_Parms;
	memcpy ( &EqualEqual_StrStr_Parms.A, &A, 0xC );
	memcpy ( &EqualEqual_StrStr_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnEqualEqual_StrStr, &EqualEqual_StrStr_Parms, NULL );

	return EqualEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.GreaterEqual_StrStr
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 A                              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_NeedCtorLink )

bool UObject::GreaterEqual_StrStr ( struct FString A, struct FString B )
{
	static UFunction* pFnGreaterEqual_StrStr = NULL;

	if ( ! pFnGreaterEqual_StrStr )
		pFnGreaterEqual_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 2360 ];

	UObject_execGreaterEqual_StrStr_Parms GreaterEqual_StrStr_Parms;
	memcpy ( &GreaterEqual_StrStr_Parms.A, &A, 0xC );
	memcpy ( &GreaterEqual_StrStr_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnGreaterEqual_StrStr, &GreaterEqual_StrStr_Parms, NULL );

	return GreaterEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.LessEqual_StrStr
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 A                              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_NeedCtorLink )

bool UObject::LessEqual_StrStr ( struct FString A, struct FString B )
{
	static UFunction* pFnLessEqual_StrStr = NULL;

	if ( ! pFnLessEqual_StrStr )
		pFnLessEqual_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 2364 ];

	UObject_execLessEqual_StrStr_Parms LessEqual_StrStr_Parms;
	memcpy ( &LessEqual_StrStr_Parms.A, &A, 0xC );
	memcpy ( &LessEqual_StrStr_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnLessEqual_StrStr, &LessEqual_StrStr_Parms, NULL );

	return LessEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.Greater_StrStr
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 A                              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_NeedCtorLink )

bool UObject::Greater_StrStr ( struct FString A, struct FString B )
{
	static UFunction* pFnGreater_StrStr = NULL;

	if ( ! pFnGreater_StrStr )
		pFnGreater_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 2368 ];

	UObject_execGreater_StrStr_Parms Greater_StrStr_Parms;
	memcpy ( &Greater_StrStr_Parms.A, &A, 0xC );
	memcpy ( &Greater_StrStr_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnGreater_StrStr, &Greater_StrStr_Parms, NULL );

	return Greater_StrStr_Parms.ReturnValue;
};

// Function Core.Object.Less_StrStr
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 A                              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_NeedCtorLink )

bool UObject::Less_StrStr ( struct FString A, struct FString B )
{
	static UFunction* pFnLess_StrStr = NULL;

	if ( ! pFnLess_StrStr )
		pFnLess_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 2372 ];

	UObject_execLess_StrStr_Parms Less_StrStr_Parms;
	memcpy ( &Less_StrStr_Parms.A, &A, 0xC );
	memcpy ( &Less_StrStr_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnLess_StrStr, &Less_StrStr_Parms, NULL );

	return Less_StrStr_Parms.ReturnValue;
};

// Function Core.Object.At_StrStr
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 A                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

struct FString UObject::At_StrStr ( struct FString A, struct FString B )
{
	static UFunction* pFnAt_StrStr = NULL;

	if ( ! pFnAt_StrStr )
		pFnAt_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 2376 ];

	UObject_execAt_StrStr_Parms At_StrStr_Parms;
	memcpy ( &At_StrStr_Parms.A, &A, 0xC );
	memcpy ( &At_StrStr_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnAt_StrStr, &At_StrStr_Parms, NULL );

	return At_StrStr_Parms.ReturnValue;
};

// Function Core.Object.Concat_StrStr
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 A                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

struct FString UObject::Concat_StrStr ( struct FString A, struct FString B )
{
	static UFunction* pFnConcat_StrStr = NULL;

	if ( ! pFnConcat_StrStr )
		pFnConcat_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 2380 ];

	UObject_execConcat_StrStr_Parms Concat_StrStr_Parms;
	memcpy ( &Concat_StrStr_Parms.A, &A, 0xC );
	memcpy ( &Concat_StrStr_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnConcat_StrStr, &Concat_StrStr_Parms, NULL );

	return Concat_StrStr_Parms.ReturnValue;
};

// Function Core.Object.MakeRotator
// [0x00822003] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Pitch                          ( CPF_Parm )
// int                            Yaw                            ( CPF_Parm )
// int                            Roll                           ( CPF_Parm )

struct FRotator UObject::MakeRotator ( int Pitch, int Yaw, int Roll )
{
	static UFunction* pFnMakeRotator = NULL;

	if ( ! pFnMakeRotator )
		pFnMakeRotator = (UFunction*) UObject::GObjObjects()->Data[ 2384 ];

	UObject_execMakeRotator_Parms MakeRotator_Parms;
	MakeRotator_Parms.Pitch = Pitch;
	MakeRotator_Parms.Yaw = Yaw;
	MakeRotator_Parms.Roll = Roll;

	this->ProcessEvent ( pFnMakeRotator, &MakeRotator_Parms, NULL );

	return MakeRotator_Parms.ReturnValue;
};

// Function Core.Object.SClampRotAxis
// [0x00422103] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DeltaTime                      ( CPF_Parm )
// int                            ViewAxis                       ( CPF_Parm )
// int                            MaxLimit                       ( CPF_Parm )
// int                            MinLimit                       ( CPF_Parm )
// float                          InterpolationSpeed             ( CPF_Parm )
// int                            out_DeltaViewAxis              ( CPF_Parm | CPF_OutParm )

bool UObject::SClampRotAxis ( float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed, int* out_DeltaViewAxis )
{
	static UFunction* pFnSClampRotAxis = NULL;

	if ( ! pFnSClampRotAxis )
		pFnSClampRotAxis = (UFunction*) UObject::GObjObjects()->Data[ 2388 ];

	UObject_execSClampRotAxis_Parms SClampRotAxis_Parms;
	SClampRotAxis_Parms.DeltaTime = DeltaTime;
	SClampRotAxis_Parms.ViewAxis = ViewAxis;
	SClampRotAxis_Parms.MaxLimit = MaxLimit;
	SClampRotAxis_Parms.MinLimit = MinLimit;
	SClampRotAxis_Parms.InterpolationSpeed = InterpolationSpeed;

	this->ProcessEvent ( pFnSClampRotAxis, &SClampRotAxis_Parms, NULL );

	if ( out_DeltaViewAxis )
		*out_DeltaViewAxis = SClampRotAxis_Parms.out_DeltaViewAxis;

	return SClampRotAxis_Parms.ReturnValue;
};

// Function Core.Object.ClampRotAxisFromRange
// [0x00022501] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Current                        ( CPF_Parm )
// int                            Min                            ( CPF_Parm )
// int                            Max                            ( CPF_Parm )

int UObject::ClampRotAxisFromRange ( int Current, int Min, int Max )
{
	static UFunction* pFnClampRotAxisFromRange = NULL;

	if ( ! pFnClampRotAxisFromRange )
		pFnClampRotAxisFromRange = (UFunction*) UObject::GObjObjects()->Data[ 2394 ];

	UObject_execClampRotAxisFromRange_Parms ClampRotAxisFromRange_Parms;
	ClampRotAxisFromRange_Parms.Current = Current;
	ClampRotAxisFromRange_Parms.Min = Min;
	ClampRotAxisFromRange_Parms.Max = Max;

	this->ProcessEvent ( pFnClampRotAxisFromRange, &ClampRotAxisFromRange_Parms, NULL );

	return ClampRotAxisFromRange_Parms.ReturnValue;
};

// Function Core.Object.ClampRotAxisFromBase
// [0x00022501] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Current                        ( CPF_Parm )
// int                            Center                         ( CPF_Parm )
// int                            MaxDelta                       ( CPF_Parm )

int UObject::ClampRotAxisFromBase ( int Current, int Center, int MaxDelta )
{
	static UFunction* pFnClampRotAxisFromBase = NULL;

	if ( ! pFnClampRotAxisFromBase )
		pFnClampRotAxisFromBase = (UFunction*) UObject::GObjObjects()->Data[ 2405 ];

	UObject_execClampRotAxisFromBase_Parms ClampRotAxisFromBase_Parms;
	ClampRotAxisFromBase_Parms.Current = Current;
	ClampRotAxisFromBase_Parms.Center = Center;
	ClampRotAxisFromBase_Parms.MaxDelta = MaxDelta;

	this->ProcessEvent ( pFnClampRotAxisFromBase, &ClampRotAxisFromBase_Parms, NULL );

	return ClampRotAxisFromBase_Parms.ReturnValue;
};

// Function Core.Object.ClampRotAxis
// [0x00422103] ( FUNC_Final )
// Parameters infos:
// int                            ViewAxis                       ( CPF_Parm )
// int                            MaxLimit                       ( CPF_Parm )
// int                            MinLimit                       ( CPF_Parm )
// int                            out_DeltaViewAxis              ( CPF_Parm | CPF_OutParm )

void UObject::ClampRotAxis ( int ViewAxis, int MaxLimit, int MinLimit, int* out_DeltaViewAxis )
{
	static UFunction* pFnClampRotAxis = NULL;

	if ( ! pFnClampRotAxis )
		pFnClampRotAxis = (UFunction*) UObject::GObjObjects()->Data[ 2410 ];

	UObject_execClampRotAxis_Parms ClampRotAxis_Parms;
	ClampRotAxis_Parms.ViewAxis = ViewAxis;
	ClampRotAxis_Parms.MaxLimit = MaxLimit;
	ClampRotAxis_Parms.MinLimit = MinLimit;

	this->ProcessEvent ( pFnClampRotAxis, &ClampRotAxis_Parms, NULL );

	if ( out_DeltaViewAxis )
		*out_DeltaViewAxis = ClampRotAxis_Parms.out_DeltaViewAxis;
};

// Function Core.Object.RSize
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                R                              ( CPF_Parm )

float UObject::RSize ( struct FRotator R )
{
	static UFunction* pFnRSize = NULL;

	if ( ! pFnRSize )
		pFnRSize = (UFunction*) UObject::GObjObjects()->Data[ 2415 ];

	UObject_execRSize_Parms RSize_Parms;
	memcpy ( &RSize_Parms.R, &R, 0xC );

	this->ProcessEvent ( pFnRSize, &RSize_Parms, NULL );

	return RSize_Parms.ReturnValue;
};

// Function Core.Object.RDiff
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                A                              ( CPF_Parm )
// struct FRotator                B                              ( CPF_Parm )

float UObject::RDiff ( struct FRotator A, struct FRotator B )
{
	static UFunction* pFnRDiff = NULL;

	if ( ! pFnRDiff )
		pFnRDiff = (UFunction*) UObject::GObjObjects()->Data[ 2421 ];

	UObject_execRDiff_Parms RDiff_Parms;
	memcpy ( &RDiff_Parms.A, &A, 0xC );
	memcpy ( &RDiff_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnRDiff, &RDiff_Parms, NULL );

	return RDiff_Parms.ReturnValue;
};

// Function Core.Object.NormalizeRotAxis
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Angle                          ( CPF_Parm )

int UObject::NormalizeRotAxis ( int Angle )
{
	static UFunction* pFnNormalizeRotAxis = NULL;

	if ( ! pFnNormalizeRotAxis )
		pFnNormalizeRotAxis = (UFunction*) UObject::GObjObjects()->Data[ 2397 ];

	UObject_execNormalizeRotAxis_Parms NormalizeRotAxis_Parms;
	NormalizeRotAxis_Parms.Angle = Angle;

	this->ProcessEvent ( pFnNormalizeRotAxis, &NormalizeRotAxis_Parms, NULL );

	return NormalizeRotAxis_Parms.ReturnValue;
};

// Function Core.Object.RInterpTo
// [0x00026401] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                Current                        ( CPF_Parm )
// struct FRotator                Target                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// float                          InterpSpeed                    ( CPF_Parm )
// unsigned long                  bConstantInterpSpeed           ( CPF_OptionalParm | CPF_Parm )

struct FRotator UObject::RInterpTo ( struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed, unsigned long bConstantInterpSpeed )
{
	static UFunction* pFnRInterpTo = NULL;

	if ( ! pFnRInterpTo )
		pFnRInterpTo = (UFunction*) UObject::GObjObjects()->Data[ 2430 ];

	UObject_execRInterpTo_Parms RInterpTo_Parms;
	memcpy ( &RInterpTo_Parms.Current, &Current, 0xC );
	memcpy ( &RInterpTo_Parms.Target, &Target, 0xC );
	RInterpTo_Parms.DeltaTime = DeltaTime;
	RInterpTo_Parms.InterpSpeed = InterpSpeed;
	RInterpTo_Parms.bConstantInterpSpeed = bConstantInterpSpeed;

	this->ProcessEvent ( pFnRInterpTo, &RInterpTo_Parms, NULL );

	return RInterpTo_Parms.ReturnValue;
};

// Function Core.Object.RTransform
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                R                              ( CPF_Parm )
// struct FRotator                RBasis                         ( CPF_Parm )

struct FRotator UObject::RTransform ( struct FRotator R, struct FRotator RBasis )
{
	static UFunction* pFnRTransform = NULL;

	if ( ! pFnRTransform )
		pFnRTransform = (UFunction*) UObject::GObjObjects()->Data[ 2433 ];

	UObject_execRTransform_Parms RTransform_Parms;
	memcpy ( &RTransform_Parms.R, &R, 0xC );
	memcpy ( &RTransform_Parms.RBasis, &RBasis, 0xC );

	this->ProcessEvent ( pFnRTransform, &RTransform_Parms, NULL );

	return RTransform_Parms.ReturnValue;
};

// Function Core.Object.RSmerp
// [0x00026401] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                A                              ( CPF_Parm )
// struct FRotator                B                              ( CPF_Parm )
// float                          Alpha                          ( CPF_Parm )
// unsigned long                  bShortestPath                  ( CPF_OptionalParm | CPF_Parm )

struct FRotator UObject::RSmerp ( struct FRotator A, struct FRotator B, float Alpha, unsigned long bShortestPath )
{
	static UFunction* pFnRSmerp = NULL;

	if ( ! pFnRSmerp )
		pFnRSmerp = (UFunction*) UObject::GObjObjects()->Data[ 2440 ];

	UObject_execRSmerp_Parms RSmerp_Parms;
	memcpy ( &RSmerp_Parms.A, &A, 0xC );
	memcpy ( &RSmerp_Parms.B, &B, 0xC );
	RSmerp_Parms.Alpha = Alpha;
	RSmerp_Parms.bShortestPath = bShortestPath;

	this->ProcessEvent ( pFnRSmerp, &RSmerp_Parms, NULL );

	return RSmerp_Parms.ReturnValue;
};

// Function Core.Object.RLerp
// [0x00026401] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                A                              ( CPF_Parm )
// struct FRotator                B                              ( CPF_Parm )
// float                          Alpha                          ( CPF_Parm )
// unsigned long                  bShortestPath                  ( CPF_OptionalParm | CPF_Parm )

struct FRotator UObject::RLerp ( struct FRotator A, struct FRotator B, float Alpha, unsigned long bShortestPath )
{
	static UFunction* pFnRLerp = NULL;

	if ( ! pFnRLerp )
		pFnRLerp = (UFunction*) UObject::GObjObjects()->Data[ 2444 ];

	UObject_execRLerp_Parms RLerp_Parms;
	memcpy ( &RLerp_Parms.A, &A, 0xC );
	memcpy ( &RLerp_Parms.B, &B, 0xC );
	RLerp_Parms.Alpha = Alpha;
	RLerp_Parms.bShortestPath = bShortestPath;

	this->ProcessEvent ( pFnRLerp, &RLerp_Parms, NULL );

	return RLerp_Parms.ReturnValue;
};

// Function Core.Object.Normalize
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                Rot                            ( CPF_Parm )

struct FRotator UObject::Normalize ( struct FRotator Rot )
{
	static UFunction* pFnNormalize = NULL;

	if ( ! pFnNormalize )
		pFnNormalize = (UFunction*) UObject::GObjObjects()->Data[ 2450 ];

	UObject_execNormalize_Parms Normalize_Parms;
	memcpy ( &Normalize_Parms.Rot, &Rot, 0xC );

	this->ProcessEvent ( pFnNormalize, &Normalize_Parms, NULL );

	return Normalize_Parms.ReturnValue;
};

// Function Core.Object.OrthoRotation
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 X                              ( CPF_Parm )
// struct FVector                 Y                              ( CPF_Parm )
// struct FVector                 Z                              ( CPF_Parm )

struct FRotator UObject::OrthoRotation ( struct FVector X, struct FVector Y, struct FVector Z )
{
	static UFunction* pFnOrthoRotation = NULL;

	if ( ! pFnOrthoRotation )
		pFnOrthoRotation = (UFunction*) UObject::GObjObjects()->Data[ 2456 ];

	UObject_execOrthoRotation_Parms OrthoRotation_Parms;
	memcpy ( &OrthoRotation_Parms.X, &X, 0xC );
	memcpy ( &OrthoRotation_Parms.Y, &Y, 0xC );
	memcpy ( &OrthoRotation_Parms.Z, &Z, 0xC );

	this->ProcessEvent ( pFnOrthoRotation, &OrthoRotation_Parms, NULL );

	return OrthoRotation_Parms.ReturnValue;
};

// Function Core.Object.RotRand
// [0x00026401] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bRoll                          ( CPF_OptionalParm | CPF_Parm )

struct FRotator UObject::RotRand ( unsigned long bRoll )
{
	static UFunction* pFnRotRand = NULL;

	if ( ! pFnRotRand )
		pFnRotRand = (UFunction*) UObject::GObjObjects()->Data[ 2459 ];

	UObject_execRotRand_Parms RotRand_Parms;
	RotRand_Parms.bRoll = bRoll;

	this->ProcessEvent ( pFnRotRand, &RotRand_Parms, NULL );

	return RotRand_Parms.ReturnValue;
};

// Function Core.Object.GetUnAxes
// [0x00422401] ( FUNC_Final )
// Parameters infos:
// struct FRotator                A                              ( CPF_Parm )
// struct FVector                 X                              ( CPF_Parm | CPF_OutParm )
// struct FVector                 Y                              ( CPF_Parm | CPF_OutParm )
// struct FVector                 Z                              ( CPF_Parm | CPF_OutParm )

void UObject::GetUnAxes ( struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z )
{
	static UFunction* pFnGetUnAxes = NULL;

	if ( ! pFnGetUnAxes )
		pFnGetUnAxes = (UFunction*) UObject::GObjObjects()->Data[ 2464 ];

	UObject_execGetUnAxes_Parms GetUnAxes_Parms;
	memcpy ( &GetUnAxes_Parms.A, &A, 0xC );

	this->ProcessEvent ( pFnGetUnAxes, &GetUnAxes_Parms, NULL );

	if ( X )
		memcpy ( X, &GetUnAxes_Parms.X, 0xC );

	if ( Y )
		memcpy ( Y, &GetUnAxes_Parms.Y, 0xC );

	if ( Z )
		memcpy ( Z, &GetUnAxes_Parms.Z, 0xC );
};

// Function Core.Object.GetAxes
// [0x00422401] ( FUNC_Final )
// Parameters infos:
// struct FRotator                A                              ( CPF_Parm )
// struct FVector                 X                              ( CPF_Parm | CPF_OutParm )
// struct FVector                 Y                              ( CPF_Parm | CPF_OutParm )
// struct FVector                 Z                              ( CPF_Parm | CPF_OutParm )

void UObject::GetAxes ( struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z )
{
	static UFunction* pFnGetAxes = NULL;

	if ( ! pFnGetAxes )
		pFnGetAxes = (UFunction*) UObject::GObjObjects()->Data[ 2467 ];

	UObject_execGetAxes_Parms GetAxes_Parms;
	memcpy ( &GetAxes_Parms.A, &A, 0xC );

	this->ProcessEvent ( pFnGetAxes, &GetAxes_Parms, NULL );

	if ( X )
		memcpy ( X, &GetAxes_Parms.X, 0xC );

	if ( Y )
		memcpy ( Y, &GetAxes_Parms.Y, 0xC );

	if ( Z )
		memcpy ( Z, &GetAxes_Parms.Z, 0xC );
};

// Function Core.Object.ClockwiseFrom_IntInt
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

bool UObject::ClockwiseFrom_IntInt ( int A, int B )
{
	static UFunction* pFnClockwiseFrom_IntInt = NULL;

	if ( ! pFnClockwiseFrom_IntInt )
		pFnClockwiseFrom_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 2472 ];

	UObject_execClockwiseFrom_IntInt_Parms ClockwiseFrom_IntInt_Parms;
	ClockwiseFrom_IntInt_Parms.A = A;
	ClockwiseFrom_IntInt_Parms.B = B;

	this->ProcessEvent ( pFnClockwiseFrom_IntInt, &ClockwiseFrom_IntInt_Parms, NULL );

	return ClockwiseFrom_IntInt_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_RotatorRotator
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                B                              ( CPF_Parm )
// struct FRotator                A                              ( CPF_Parm | CPF_OutParm )

struct FRotator UObject::SubtractEqual_RotatorRotator ( struct FRotator B, struct FRotator* A )
{
	static UFunction* pFnSubtractEqual_RotatorRotator = NULL;

	if ( ! pFnSubtractEqual_RotatorRotator )
		pFnSubtractEqual_RotatorRotator = (UFunction*) UObject::GObjObjects()->Data[ 2477 ];

	UObject_execSubtractEqual_RotatorRotator_Parms SubtractEqual_RotatorRotator_Parms;
	memcpy ( &SubtractEqual_RotatorRotator_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnSubtractEqual_RotatorRotator, &SubtractEqual_RotatorRotator_Parms, NULL );

	if ( A )
		memcpy ( A, &SubtractEqual_RotatorRotator_Parms.A, 0xC );

	return SubtractEqual_RotatorRotator_Parms.ReturnValue;
};

// Function Core.Object.AddEqual_RotatorRotator
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                B                              ( CPF_Parm )
// struct FRotator                A                              ( CPF_Parm | CPF_OutParm )

struct FRotator UObject::AddEqual_RotatorRotator ( struct FRotator B, struct FRotator* A )
{
	static UFunction* pFnAddEqual_RotatorRotator = NULL;

	if ( ! pFnAddEqual_RotatorRotator )
		pFnAddEqual_RotatorRotator = (UFunction*) UObject::GObjObjects()->Data[ 2481 ];

	UObject_execAddEqual_RotatorRotator_Parms AddEqual_RotatorRotator_Parms;
	memcpy ( &AddEqual_RotatorRotator_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnAddEqual_RotatorRotator, &AddEqual_RotatorRotator_Parms, NULL );

	if ( A )
		memcpy ( A, &AddEqual_RotatorRotator_Parms.A, 0xC );

	return AddEqual_RotatorRotator_Parms.ReturnValue;
};

// Function Core.Object.Subtract_RotatorRotator
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                A                              ( CPF_Parm )
// struct FRotator                B                              ( CPF_Parm )

struct FRotator UObject::Subtract_RotatorRotator ( struct FRotator A, struct FRotator B )
{
	static UFunction* pFnSubtract_RotatorRotator = NULL;

	if ( ! pFnSubtract_RotatorRotator )
		pFnSubtract_RotatorRotator = (UFunction*) UObject::GObjObjects()->Data[ 2485 ];

	UObject_execSubtract_RotatorRotator_Parms Subtract_RotatorRotator_Parms;
	memcpy ( &Subtract_RotatorRotator_Parms.A, &A, 0xC );
	memcpy ( &Subtract_RotatorRotator_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnSubtract_RotatorRotator, &Subtract_RotatorRotator_Parms, NULL );

	return Subtract_RotatorRotator_Parms.ReturnValue;
};

// Function Core.Object.Add_RotatorRotator
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                A                              ( CPF_Parm )
// struct FRotator                B                              ( CPF_Parm )

struct FRotator UObject::Add_RotatorRotator ( struct FRotator A, struct FRotator B )
{
	static UFunction* pFnAdd_RotatorRotator = NULL;

	if ( ! pFnAdd_RotatorRotator )
		pFnAdd_RotatorRotator = (UFunction*) UObject::GObjObjects()->Data[ 2489 ];

	UObject_execAdd_RotatorRotator_Parms Add_RotatorRotator_Parms;
	memcpy ( &Add_RotatorRotator_Parms.A, &A, 0xC );
	memcpy ( &Add_RotatorRotator_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnAdd_RotatorRotator, &Add_RotatorRotator_Parms, NULL );

	return Add_RotatorRotator_Parms.ReturnValue;
};

// Function Core.Object.DivideEqual_RotatorFloat
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// struct FRotator                A                              ( CPF_Parm | CPF_OutParm )

struct FRotator UObject::DivideEqual_RotatorFloat ( float B, struct FRotator* A )
{
	static UFunction* pFnDivideEqual_RotatorFloat = NULL;

	if ( ! pFnDivideEqual_RotatorFloat )
		pFnDivideEqual_RotatorFloat = (UFunction*) UObject::GObjObjects()->Data[ 2493 ];

	UObject_execDivideEqual_RotatorFloat_Parms DivideEqual_RotatorFloat_Parms;
	DivideEqual_RotatorFloat_Parms.B = B;

	this->ProcessEvent ( pFnDivideEqual_RotatorFloat, &DivideEqual_RotatorFloat_Parms, NULL );

	if ( A )
		memcpy ( A, &DivideEqual_RotatorFloat_Parms.A, 0xC );

	return DivideEqual_RotatorFloat_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_RotatorFloat
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// struct FRotator                A                              ( CPF_Parm | CPF_OutParm )

struct FRotator UObject::MultiplyEqual_RotatorFloat ( float B, struct FRotator* A )
{
	static UFunction* pFnMultiplyEqual_RotatorFloat = NULL;

	if ( ! pFnMultiplyEqual_RotatorFloat )
		pFnMultiplyEqual_RotatorFloat = (UFunction*) UObject::GObjObjects()->Data[ 2497 ];

	UObject_execMultiplyEqual_RotatorFloat_Parms MultiplyEqual_RotatorFloat_Parms;
	MultiplyEqual_RotatorFloat_Parms.B = B;

	this->ProcessEvent ( pFnMultiplyEqual_RotatorFloat, &MultiplyEqual_RotatorFloat_Parms, NULL );

	if ( A )
		memcpy ( A, &MultiplyEqual_RotatorFloat_Parms.A, 0xC );

	return MultiplyEqual_RotatorFloat_Parms.ReturnValue;
};

// Function Core.Object.Divide_RotatorFloat
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

struct FRotator UObject::Divide_RotatorFloat ( struct FRotator A, float B )
{
	static UFunction* pFnDivide_RotatorFloat = NULL;

	if ( ! pFnDivide_RotatorFloat )
		pFnDivide_RotatorFloat = (UFunction*) UObject::GObjObjects()->Data[ 2501 ];

	UObject_execDivide_RotatorFloat_Parms Divide_RotatorFloat_Parms;
	memcpy ( &Divide_RotatorFloat_Parms.A, &A, 0xC );
	Divide_RotatorFloat_Parms.B = B;

	this->ProcessEvent ( pFnDivide_RotatorFloat, &Divide_RotatorFloat_Parms, NULL );

	return Divide_RotatorFloat_Parms.ReturnValue;
};

// Function Core.Object.Multiply_FloatRotator
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// struct FRotator                B                              ( CPF_Parm )

struct FRotator UObject::Multiply_FloatRotator ( float A, struct FRotator B )
{
	static UFunction* pFnMultiply_FloatRotator = NULL;

	if ( ! pFnMultiply_FloatRotator )
		pFnMultiply_FloatRotator = (UFunction*) UObject::GObjObjects()->Data[ 2505 ];

	UObject_execMultiply_FloatRotator_Parms Multiply_FloatRotator_Parms;
	Multiply_FloatRotator_Parms.A = A;
	memcpy ( &Multiply_FloatRotator_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnMultiply_FloatRotator, &Multiply_FloatRotator_Parms, NULL );

	return Multiply_FloatRotator_Parms.ReturnValue;
};

// Function Core.Object.Multiply_RotatorFloat
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

struct FRotator UObject::Multiply_RotatorFloat ( struct FRotator A, float B )
{
	static UFunction* pFnMultiply_RotatorFloat = NULL;

	if ( ! pFnMultiply_RotatorFloat )
		pFnMultiply_RotatorFloat = (UFunction*) UObject::GObjObjects()->Data[ 2509 ];

	UObject_execMultiply_RotatorFloat_Parms Multiply_RotatorFloat_Parms;
	memcpy ( &Multiply_RotatorFloat_Parms.A, &A, 0xC );
	Multiply_RotatorFloat_Parms.B = B;

	this->ProcessEvent ( pFnMultiply_RotatorFloat, &Multiply_RotatorFloat_Parms, NULL );

	return Multiply_RotatorFloat_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_RotatorRotator
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                A                              ( CPF_Parm )
// struct FRotator                B                              ( CPF_Parm )

bool UObject::NotEqual_RotatorRotator ( struct FRotator A, struct FRotator B )
{
	static UFunction* pFnNotEqual_RotatorRotator = NULL;

	if ( ! pFnNotEqual_RotatorRotator )
		pFnNotEqual_RotatorRotator = (UFunction*) UObject::GObjObjects()->Data[ 2513 ];

	UObject_execNotEqual_RotatorRotator_Parms NotEqual_RotatorRotator_Parms;
	memcpy ( &NotEqual_RotatorRotator_Parms.A, &A, 0xC );
	memcpy ( &NotEqual_RotatorRotator_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnNotEqual_RotatorRotator, &NotEqual_RotatorRotator_Parms, NULL );

	return NotEqual_RotatorRotator_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_RotatorRotator
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                A                              ( CPF_Parm )
// struct FRotator                B                              ( CPF_Parm )

bool UObject::EqualEqual_RotatorRotator ( struct FRotator A, struct FRotator B )
{
	static UFunction* pFnEqualEqual_RotatorRotator = NULL;

	if ( ! pFnEqualEqual_RotatorRotator )
		pFnEqualEqual_RotatorRotator = (UFunction*) UObject::GObjObjects()->Data[ 2517 ];

	UObject_execEqualEqual_RotatorRotator_Parms EqualEqual_RotatorRotator_Parms;
	memcpy ( &EqualEqual_RotatorRotator_Parms.A, &A, 0xC );
	memcpy ( &EqualEqual_RotatorRotator_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnEqualEqual_RotatorRotator, &EqualEqual_RotatorRotator_Parms, NULL );

	return EqualEqual_RotatorRotator_Parms.ReturnValue;
};

// Function Core.Object.InCylinder
// [0x00824103] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Origin                         ( CPF_Parm )
// struct FRotator                Dir                            ( CPF_Parm )
// float                          Width                          ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm )
// unsigned long                  bIgnoreZ                       ( CPF_OptionalParm | CPF_Parm )

bool UObject::InCylinder ( struct FVector Origin, struct FRotator Dir, float Width, struct FVector A, unsigned long bIgnoreZ )
{
	static UFunction* pFnInCylinder = NULL;

	if ( ! pFnInCylinder )
		pFnInCylinder = (UFunction*) UObject::GObjObjects()->Data[ 2521 ];

	UObject_execInCylinder_Parms InCylinder_Parms;
	memcpy ( &InCylinder_Parms.Origin, &Origin, 0xC );
	memcpy ( &InCylinder_Parms.Dir, &Dir, 0xC );
	InCylinder_Parms.Width = Width;
	memcpy ( &InCylinder_Parms.A, &A, 0xC );
	InCylinder_Parms.bIgnoreZ = bIgnoreZ;

	this->ProcessEvent ( pFnInCylinder, &InCylinder_Parms, NULL );

	return InCylinder_Parms.ReturnValue;
};

// Function Core.Object.NoZDot
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )

float UObject::NoZDot ( struct FVector A, struct FVector B )
{
	static UFunction* pFnNoZDot = NULL;

	if ( ! pFnNoZDot )
		pFnNoZDot = (UFunction*) UObject::GObjObjects()->Data[ 2525 ];

	UObject_execNoZDot_Parms NoZDot_Parms;
	memcpy ( &NoZDot_Parms.A, &A, 0xC );
	memcpy ( &NoZDot_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnNoZDot, &NoZDot_Parms, NULL );

	return NoZDot_Parms.ReturnValue;
};

// Function Core.Object.ClampLength
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 V                              ( CPF_Parm )
// float                          MaxLength                      ( CPF_Parm )

struct FVector UObject::ClampLength ( struct FVector V, float MaxLength )
{
	static UFunction* pFnClampLength = NULL;

	if ( ! pFnClampLength )
		pFnClampLength = (UFunction*) UObject::GObjObjects()->Data[ 2535 ];

	UObject_execClampLength_Parms ClampLength_Parms;
	memcpy ( &ClampLength_Parms.V, &V, 0xC );
	ClampLength_Parms.MaxLength = MaxLength;

	this->ProcessEvent ( pFnClampLength, &ClampLength_Parms, NULL );

	return ClampLength_Parms.ReturnValue;
};

// Function Core.Object.VInterpConstantTo
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Current                        ( CPF_Parm )
// struct FVector                 Target                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// float                          InterpSpeed                    ( CPF_Parm )

struct FVector UObject::VInterpConstantTo ( struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed )
{
	static UFunction* pFnVInterpConstantTo = NULL;

	if ( ! pFnVInterpConstantTo )
		pFnVInterpConstantTo = (UFunction*) UObject::GObjObjects()->Data[ 2539 ];

	UObject_execVInterpConstantTo_Parms VInterpConstantTo_Parms;
	memcpy ( &VInterpConstantTo_Parms.Current, &Current, 0xC );
	memcpy ( &VInterpConstantTo_Parms.Target, &Target, 0xC );
	VInterpConstantTo_Parms.DeltaTime = DeltaTime;
	VInterpConstantTo_Parms.InterpSpeed = InterpSpeed;

	this->ProcessEvent ( pFnVInterpConstantTo, &VInterpConstantTo_Parms, NULL );

	return VInterpConstantTo_Parms.ReturnValue;
};

// Function Core.Object.VInterpTo
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Current                        ( CPF_Parm )
// struct FVector                 Target                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// float                          InterpSpeed                    ( CPF_Parm )

struct FVector UObject::VInterpTo ( struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed )
{
	static UFunction* pFnVInterpTo = NULL;

	if ( ! pFnVInterpTo )
		pFnVInterpTo = (UFunction*) UObject::GObjObjects()->Data[ 2543 ];

	UObject_execVInterpTo_Parms VInterpTo_Parms;
	memcpy ( &VInterpTo_Parms.Current, &Current, 0xC );
	memcpy ( &VInterpTo_Parms.Target, &Target, 0xC );
	VInterpTo_Parms.DeltaTime = DeltaTime;
	VInterpTo_Parms.InterpSpeed = InterpSpeed;

	this->ProcessEvent ( pFnVInterpTo, &VInterpTo_Parms, NULL );

	return VInterpTo_Parms.ReturnValue;
};

// Function Core.Object.IsZero
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )

bool UObject::IsZero ( struct FVector A )
{
	static UFunction* pFnIsZero = NULL;

	if ( ! pFnIsZero )
		pFnIsZero = (UFunction*) UObject::GObjObjects()->Data[ 2549 ];

	UObject_execIsZero_Parms IsZero_Parms;
	memcpy ( &IsZero_Parms.A, &A, 0xC );

	this->ProcessEvent ( pFnIsZero, &IsZero_Parms, NULL );

	return IsZero_Parms.ReturnValue;
};

// Function Core.Object.ProjectOnTo
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 X                              ( CPF_Parm )
// struct FVector                 Y                              ( CPF_Parm )

struct FVector UObject::ProjectOnTo ( struct FVector X, struct FVector Y )
{
	static UFunction* pFnProjectOnTo = NULL;

	if ( ! pFnProjectOnTo )
		pFnProjectOnTo = (UFunction*) UObject::GObjObjects()->Data[ 2555 ];

	UObject_execProjectOnTo_Parms ProjectOnTo_Parms;
	memcpy ( &ProjectOnTo_Parms.X, &X, 0xC );
	memcpy ( &ProjectOnTo_Parms.Y, &Y, 0xC );

	this->ProcessEvent ( pFnProjectOnTo, &ProjectOnTo_Parms, NULL );

	return ProjectOnTo_Parms.ReturnValue;
};

// Function Core.Object.MirrorVectorByNormal
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 InVect                         ( CPF_Parm )
// struct FVector                 InNormal                       ( CPF_Parm )

struct FVector UObject::MirrorVectorByNormal ( struct FVector InVect, struct FVector InNormal )
{
	static UFunction* pFnMirrorVectorByNormal = NULL;

	if ( ! pFnMirrorVectorByNormal )
		pFnMirrorVectorByNormal = (UFunction*) UObject::GObjObjects()->Data[ 2558 ];

	UObject_execMirrorVectorByNormal_Parms MirrorVectorByNormal_Parms;
	memcpy ( &MirrorVectorByNormal_Parms.InVect, &InVect, 0xC );
	memcpy ( &MirrorVectorByNormal_Parms.InNormal, &InNormal, 0xC );

	this->ProcessEvent ( pFnMirrorVectorByNormal, &MirrorVectorByNormal_Parms, NULL );

	return MirrorVectorByNormal_Parms.ReturnValue;
};

// Function Core.Object.VRandCone2
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Dir                            ( CPF_Parm )
// float                          HorizontalConeHalfAngleRadians ( CPF_Parm )
// float                          VerticalConeHalfAngleRadians   ( CPF_Parm )

struct FVector UObject::VRandCone2 ( struct FVector Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians )
{
	static UFunction* pFnVRandCone2 = NULL;

	if ( ! pFnVRandCone2 )
		pFnVRandCone2 = (UFunction*) UObject::GObjObjects()->Data[ 2562 ];

	UObject_execVRandCone2_Parms VRandCone2_Parms;
	memcpy ( &VRandCone2_Parms.Dir, &Dir, 0xC );
	VRandCone2_Parms.HorizontalConeHalfAngleRadians = HorizontalConeHalfAngleRadians;
	VRandCone2_Parms.VerticalConeHalfAngleRadians = VerticalConeHalfAngleRadians;

	this->ProcessEvent ( pFnVRandCone2, &VRandCone2_Parms, NULL );

	return VRandCone2_Parms.ReturnValue;
};

// Function Core.Object.VRandCone
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Dir                            ( CPF_Parm )
// float                          ConeHalfAngleRadians           ( CPF_Parm )

struct FVector UObject::VRandCone ( struct FVector Dir, float ConeHalfAngleRadians )
{
	static UFunction* pFnVRandCone = NULL;

	if ( ! pFnVRandCone )
		pFnVRandCone = (UFunction*) UObject::GObjObjects()->Data[ 2566 ];

	UObject_execVRandCone_Parms VRandCone_Parms;
	memcpy ( &VRandCone_Parms.Dir, &Dir, 0xC );
	VRandCone_Parms.ConeHalfAngleRadians = ConeHalfAngleRadians;

	this->ProcessEvent ( pFnVRandCone, &VRandCone_Parms, NULL );

	return VRandCone_Parms.ReturnValue;
};

// Function Core.Object.VRand
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector UObject::VRand ( )
{
	static UFunction* pFnVRand = NULL;

	if ( ! pFnVRand )
		pFnVRand = (UFunction*) UObject::GObjObjects()->Data[ 2571 ];

	UObject_execVRand_Parms VRand_Parms;

	this->ProcessEvent ( pFnVRand, &VRand_Parms, NULL );

	return VRand_Parms.ReturnValue;
};

// Function Core.Object.VSmerp
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )
// float                          Alpha                          ( CPF_Parm )

struct FVector UObject::VSmerp ( struct FVector A, struct FVector B, float Alpha )
{
	static UFunction* pFnVSmerp = NULL;

	if ( ! pFnVSmerp )
		pFnVSmerp = (UFunction*) UObject::GObjObjects()->Data[ 2575 ];

	UObject_execVSmerp_Parms VSmerp_Parms;
	memcpy ( &VSmerp_Parms.A, &A, 0xC );
	memcpy ( &VSmerp_Parms.B, &B, 0xC );
	VSmerp_Parms.Alpha = Alpha;

	this->ProcessEvent ( pFnVSmerp, &VSmerp_Parms, NULL );

	return VSmerp_Parms.ReturnValue;
};

// Function Core.Object.VLerp
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )
// float                          Alpha                          ( CPF_Parm )

struct FVector UObject::VLerp ( struct FVector A, struct FVector B, float Alpha )
{
	static UFunction* pFnVLerp = NULL;

	if ( ! pFnVLerp )
		pFnVLerp = (UFunction*) UObject::GObjObjects()->Data[ 2577 ];

	UObject_execVLerp_Parms VLerp_Parms;
	memcpy ( &VLerp_Parms.A, &A, 0xC );
	memcpy ( &VLerp_Parms.B, &B, 0xC );
	VLerp_Parms.Alpha = Alpha;

	this->ProcessEvent ( pFnVLerp, &VLerp_Parms, NULL );

	return VLerp_Parms.ReturnValue;
};

// Function Core.Object.Normal
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )

struct FVector UObject::Normal ( struct FVector A )
{
	static UFunction* pFnNormal = NULL;

	if ( ! pFnNormal )
		pFnNormal = (UFunction*) UObject::GObjObjects()->Data[ 2582 ];

	UObject_execNormal_Parms Normal_Parms;
	memcpy ( &Normal_Parms.A, &A, 0xC );

	this->ProcessEvent ( pFnNormal, &Normal_Parms, NULL );

	return Normal_Parms.ReturnValue;
};

// Function Core.Object.VSizeSq2D
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )

float UObject::VSizeSq2D ( struct FVector A )
{
	static UFunction* pFnVSizeSq2D = NULL;

	if ( ! pFnVSizeSq2D )
		pFnVSizeSq2D = (UFunction*) UObject::GObjObjects()->Data[ 2587 ];

	UObject_execVSizeSq2D_Parms VSizeSq2D_Parms;
	memcpy ( &VSizeSq2D_Parms.A, &A, 0xC );

	this->ProcessEvent ( pFnVSizeSq2D, &VSizeSq2D_Parms, NULL );

	return VSizeSq2D_Parms.ReturnValue;
};

// Function Core.Object.VSizeSq
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )

float UObject::VSizeSq ( struct FVector A )
{
	static UFunction* pFnVSizeSq = NULL;

	if ( ! pFnVSizeSq )
		pFnVSizeSq = (UFunction*) UObject::GObjObjects()->Data[ 2532 ];

	UObject_execVSizeSq_Parms VSizeSq_Parms;
	memcpy ( &VSizeSq_Parms.A, &A, 0xC );

	this->ProcessEvent ( pFnVSizeSq, &VSizeSq_Parms, NULL );

	return VSizeSq_Parms.ReturnValue;
};

// Function Core.Object.VSize2D
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )

float UObject::VSize2D ( struct FVector A )
{
	static UFunction* pFnVSize2D = NULL;

	if ( ! pFnVSize2D )
		pFnVSize2D = (UFunction*) UObject::GObjObjects()->Data[ 2592 ];

	UObject_execVSize2D_Parms VSize2D_Parms;
	memcpy ( &VSize2D_Parms.A, &A, 0xC );

	this->ProcessEvent ( pFnVSize2D, &VSize2D_Parms, NULL );

	return VSize2D_Parms.ReturnValue;
};

// Function Core.Object.VSize
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )

float UObject::VSize ( struct FVector A )
{
	static UFunction* pFnVSize = NULL;

	if ( ! pFnVSize )
		pFnVSize = (UFunction*) UObject::GObjObjects()->Data[ 2595 ];

	UObject_execVSize_Parms VSize_Parms;
	memcpy ( &VSize_Parms.A, &A, 0xC );

	this->ProcessEvent ( pFnVSize, &VSize_Parms, NULL );

	return VSize_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_VectorVector
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 B                              ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm | CPF_OutParm )

struct FVector UObject::SubtractEqual_VectorVector ( struct FVector B, struct FVector* A )
{
	static UFunction* pFnSubtractEqual_VectorVector = NULL;

	if ( ! pFnSubtractEqual_VectorVector )
		pFnSubtractEqual_VectorVector = (UFunction*) UObject::GObjObjects()->Data[ 2598 ];

	UObject_execSubtractEqual_VectorVector_Parms SubtractEqual_VectorVector_Parms;
	memcpy ( &SubtractEqual_VectorVector_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnSubtractEqual_VectorVector, &SubtractEqual_VectorVector_Parms, NULL );

	if ( A )
		memcpy ( A, &SubtractEqual_VectorVector_Parms.A, 0xC );

	return SubtractEqual_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.AddEqual_VectorVector
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 B                              ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm | CPF_OutParm )

struct FVector UObject::AddEqual_VectorVector ( struct FVector B, struct FVector* A )
{
	static UFunction* pFnAddEqual_VectorVector = NULL;

	if ( ! pFnAddEqual_VectorVector )
		pFnAddEqual_VectorVector = (UFunction*) UObject::GObjObjects()->Data[ 2601 ];

	UObject_execAddEqual_VectorVector_Parms AddEqual_VectorVector_Parms;
	memcpy ( &AddEqual_VectorVector_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnAddEqual_VectorVector, &AddEqual_VectorVector_Parms, NULL );

	if ( A )
		memcpy ( A, &AddEqual_VectorVector_Parms.A, 0xC );

	return AddEqual_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.DivideEqual_VectorFloat
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm | CPF_OutParm )

struct FVector UObject::DivideEqual_VectorFloat ( float B, struct FVector* A )
{
	static UFunction* pFnDivideEqual_VectorFloat = NULL;

	if ( ! pFnDivideEqual_VectorFloat )
		pFnDivideEqual_VectorFloat = (UFunction*) UObject::GObjObjects()->Data[ 2605 ];

	UObject_execDivideEqual_VectorFloat_Parms DivideEqual_VectorFloat_Parms;
	DivideEqual_VectorFloat_Parms.B = B;

	this->ProcessEvent ( pFnDivideEqual_VectorFloat, &DivideEqual_VectorFloat_Parms, NULL );

	if ( A )
		memcpy ( A, &DivideEqual_VectorFloat_Parms.A, 0xC );

	return DivideEqual_VectorFloat_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_VectorVector
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 B                              ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm | CPF_OutParm )

struct FVector UObject::MultiplyEqual_VectorVector ( struct FVector B, struct FVector* A )
{
	static UFunction* pFnMultiplyEqual_VectorVector = NULL;

	if ( ! pFnMultiplyEqual_VectorVector )
		pFnMultiplyEqual_VectorVector = (UFunction*) UObject::GObjObjects()->Data[ 2609 ];

	UObject_execMultiplyEqual_VectorVector_Parms MultiplyEqual_VectorVector_Parms;
	memcpy ( &MultiplyEqual_VectorVector_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnMultiplyEqual_VectorVector, &MultiplyEqual_VectorVector_Parms, NULL );

	if ( A )
		memcpy ( A, &MultiplyEqual_VectorVector_Parms.A, 0xC );

	return MultiplyEqual_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_VectorFloat
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm | CPF_OutParm )

struct FVector UObject::MultiplyEqual_VectorFloat ( float B, struct FVector* A )
{
	static UFunction* pFnMultiplyEqual_VectorFloat = NULL;

	if ( ! pFnMultiplyEqual_VectorFloat )
		pFnMultiplyEqual_VectorFloat = (UFunction*) UObject::GObjObjects()->Data[ 2613 ];

	UObject_execMultiplyEqual_VectorFloat_Parms MultiplyEqual_VectorFloat_Parms;
	MultiplyEqual_VectorFloat_Parms.B = B;

	this->ProcessEvent ( pFnMultiplyEqual_VectorFloat, &MultiplyEqual_VectorFloat_Parms, NULL );

	if ( A )
		memcpy ( A, &MultiplyEqual_VectorFloat_Parms.A, 0xC );

	return MultiplyEqual_VectorFloat_Parms.ReturnValue;
};

// Function Core.Object.Cross_VectorVector
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )

struct FVector UObject::Cross_VectorVector ( struct FVector A, struct FVector B )
{
	static UFunction* pFnCross_VectorVector = NULL;

	if ( ! pFnCross_VectorVector )
		pFnCross_VectorVector = (UFunction*) UObject::GObjObjects()->Data[ 2617 ];

	UObject_execCross_VectorVector_Parms Cross_VectorVector_Parms;
	memcpy ( &Cross_VectorVector_Parms.A, &A, 0xC );
	memcpy ( &Cross_VectorVector_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnCross_VectorVector, &Cross_VectorVector_Parms, NULL );

	return Cross_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.Dot_VectorVector
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )

float UObject::Dot_VectorVector ( struct FVector A, struct FVector B )
{
	static UFunction* pFnDot_VectorVector = NULL;

	if ( ! pFnDot_VectorVector )
		pFnDot_VectorVector = (UFunction*) UObject::GObjObjects()->Data[ 2621 ];

	UObject_execDot_VectorVector_Parms Dot_VectorVector_Parms;
	memcpy ( &Dot_VectorVector_Parms.A, &A, 0xC );
	memcpy ( &Dot_VectorVector_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnDot_VectorVector, &Dot_VectorVector_Parms, NULL );

	return Dot_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_VectorVector
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )

bool UObject::NotEqual_VectorVector ( struct FVector A, struct FVector B )
{
	static UFunction* pFnNotEqual_VectorVector = NULL;

	if ( ! pFnNotEqual_VectorVector )
		pFnNotEqual_VectorVector = (UFunction*) UObject::GObjObjects()->Data[ 2625 ];

	UObject_execNotEqual_VectorVector_Parms NotEqual_VectorVector_Parms;
	memcpy ( &NotEqual_VectorVector_Parms.A, &A, 0xC );
	memcpy ( &NotEqual_VectorVector_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnNotEqual_VectorVector, &NotEqual_VectorVector_Parms, NULL );

	return NotEqual_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_VectorVector
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )

bool UObject::EqualEqual_VectorVector ( struct FVector A, struct FVector B )
{
	static UFunction* pFnEqualEqual_VectorVector = NULL;

	if ( ! pFnEqualEqual_VectorVector )
		pFnEqualEqual_VectorVector = (UFunction*) UObject::GObjObjects()->Data[ 2629 ];

	UObject_execEqualEqual_VectorVector_Parms EqualEqual_VectorVector_Parms;
	memcpy ( &EqualEqual_VectorVector_Parms.A, &A, 0xC );
	memcpy ( &EqualEqual_VectorVector_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnEqualEqual_VectorVector, &EqualEqual_VectorVector_Parms, NULL );

	return EqualEqual_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.GreaterGreater_VectorRotator
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FRotator                B                              ( CPF_Parm )

struct FVector UObject::GreaterGreater_VectorRotator ( struct FVector A, struct FRotator B )
{
	static UFunction* pFnGreaterGreater_VectorRotator = NULL;

	if ( ! pFnGreaterGreater_VectorRotator )
		pFnGreaterGreater_VectorRotator = (UFunction*) UObject::GObjObjects()->Data[ 2633 ];

	UObject_execGreaterGreater_VectorRotator_Parms GreaterGreater_VectorRotator_Parms;
	memcpy ( &GreaterGreater_VectorRotator_Parms.A, &A, 0xC );
	memcpy ( &GreaterGreater_VectorRotator_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnGreaterGreater_VectorRotator, &GreaterGreater_VectorRotator_Parms, NULL );

	return GreaterGreater_VectorRotator_Parms.ReturnValue;
};

// Function Core.Object.LessLess_VectorRotator
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FRotator                B                              ( CPF_Parm )

struct FVector UObject::LessLess_VectorRotator ( struct FVector A, struct FRotator B )
{
	static UFunction* pFnLessLess_VectorRotator = NULL;

	if ( ! pFnLessLess_VectorRotator )
		pFnLessLess_VectorRotator = (UFunction*) UObject::GObjObjects()->Data[ 2637 ];

	UObject_execLessLess_VectorRotator_Parms LessLess_VectorRotator_Parms;
	memcpy ( &LessLess_VectorRotator_Parms.A, &A, 0xC );
	memcpy ( &LessLess_VectorRotator_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnLessLess_VectorRotator, &LessLess_VectorRotator_Parms, NULL );

	return LessLess_VectorRotator_Parms.ReturnValue;
};

// Function Core.Object.Subtract_VectorVector
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )

struct FVector UObject::Subtract_VectorVector ( struct FVector A, struct FVector B )
{
	static UFunction* pFnSubtract_VectorVector = NULL;

	if ( ! pFnSubtract_VectorVector )
		pFnSubtract_VectorVector = (UFunction*) UObject::GObjObjects()->Data[ 2641 ];

	UObject_execSubtract_VectorVector_Parms Subtract_VectorVector_Parms;
	memcpy ( &Subtract_VectorVector_Parms.A, &A, 0xC );
	memcpy ( &Subtract_VectorVector_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnSubtract_VectorVector, &Subtract_VectorVector_Parms, NULL );

	return Subtract_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.Add_VectorVector
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )

struct FVector UObject::Add_VectorVector ( struct FVector A, struct FVector B )
{
	static UFunction* pFnAdd_VectorVector = NULL;

	if ( ! pFnAdd_VectorVector )
		pFnAdd_VectorVector = (UFunction*) UObject::GObjObjects()->Data[ 2645 ];

	UObject_execAdd_VectorVector_Parms Add_VectorVector_Parms;
	memcpy ( &Add_VectorVector_Parms.A, &A, 0xC );
	memcpy ( &Add_VectorVector_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnAdd_VectorVector, &Add_VectorVector_Parms, NULL );

	return Add_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.Divide_VectorFloat
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

struct FVector UObject::Divide_VectorFloat ( struct FVector A, float B )
{
	static UFunction* pFnDivide_VectorFloat = NULL;

	if ( ! pFnDivide_VectorFloat )
		pFnDivide_VectorFloat = (UFunction*) UObject::GObjObjects()->Data[ 2649 ];

	UObject_execDivide_VectorFloat_Parms Divide_VectorFloat_Parms;
	memcpy ( &Divide_VectorFloat_Parms.A, &A, 0xC );
	Divide_VectorFloat_Parms.B = B;

	this->ProcessEvent ( pFnDivide_VectorFloat, &Divide_VectorFloat_Parms, NULL );

	return Divide_VectorFloat_Parms.ReturnValue;
};

// Function Core.Object.Multiply_VectorVector
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )

struct FVector UObject::Multiply_VectorVector ( struct FVector A, struct FVector B )
{
	static UFunction* pFnMultiply_VectorVector = NULL;

	if ( ! pFnMultiply_VectorVector )
		pFnMultiply_VectorVector = (UFunction*) UObject::GObjObjects()->Data[ 2653 ];

	UObject_execMultiply_VectorVector_Parms Multiply_VectorVector_Parms;
	memcpy ( &Multiply_VectorVector_Parms.A, &A, 0xC );
	memcpy ( &Multiply_VectorVector_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnMultiply_VectorVector, &Multiply_VectorVector_Parms, NULL );

	return Multiply_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.Multiply_FloatVector
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )

struct FVector UObject::Multiply_FloatVector ( float A, struct FVector B )
{
	static UFunction* pFnMultiply_FloatVector = NULL;

	if ( ! pFnMultiply_FloatVector )
		pFnMultiply_FloatVector = (UFunction*) UObject::GObjObjects()->Data[ 2657 ];

	UObject_execMultiply_FloatVector_Parms Multiply_FloatVector_Parms;
	Multiply_FloatVector_Parms.A = A;
	memcpy ( &Multiply_FloatVector_Parms.B, &B, 0xC );

	this->ProcessEvent ( pFnMultiply_FloatVector, &Multiply_FloatVector_Parms, NULL );

	return Multiply_FloatVector_Parms.ReturnValue;
};

// Function Core.Object.Multiply_VectorFloat
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

struct FVector UObject::Multiply_VectorFloat ( struct FVector A, float B )
{
	static UFunction* pFnMultiply_VectorFloat = NULL;

	if ( ! pFnMultiply_VectorFloat )
		pFnMultiply_VectorFloat = (UFunction*) UObject::GObjObjects()->Data[ 2661 ];

	UObject_execMultiply_VectorFloat_Parms Multiply_VectorFloat_Parms;
	memcpy ( &Multiply_VectorFloat_Parms.A, &A, 0xC );
	Multiply_VectorFloat_Parms.B = B;

	this->ProcessEvent ( pFnMultiply_VectorFloat, &Multiply_VectorFloat_Parms, NULL );

	return Multiply_VectorFloat_Parms.ReturnValue;
};

// Function Core.Object.Subtract_PreVector
// [0x00023411] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )

struct FVector UObject::Subtract_PreVector ( struct FVector A )
{
	static UFunction* pFnSubtract_PreVector = NULL;

	if ( ! pFnSubtract_PreVector )
		pFnSubtract_PreVector = (UFunction*) UObject::GObjObjects()->Data[ 2665 ];

	UObject_execSubtract_PreVector_Parms Subtract_PreVector_Parms;
	memcpy ( &Subtract_PreVector_Parms.A, &A, 0xC );

	this->ProcessEvent ( pFnSubtract_PreVector, &Subtract_PreVector_Parms, NULL );

	return Subtract_PreVector_Parms.ReturnValue;
};

// Function Core.Object.FInterpConstantTo
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Current                        ( CPF_Parm )
// float                          Target                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// float                          InterpSpeed                    ( CPF_Parm )

float UObject::FInterpConstantTo ( float Current, float Target, float DeltaTime, float InterpSpeed )
{
	static UFunction* pFnFInterpConstantTo = NULL;

	if ( ! pFnFInterpConstantTo )
		pFnFInterpConstantTo = (UFunction*) UObject::GObjObjects()->Data[ 2669 ];

	UObject_execFInterpConstantTo_Parms FInterpConstantTo_Parms;
	FInterpConstantTo_Parms.Current = Current;
	FInterpConstantTo_Parms.Target = Target;
	FInterpConstantTo_Parms.DeltaTime = DeltaTime;
	FInterpConstantTo_Parms.InterpSpeed = InterpSpeed;

	this->ProcessEvent ( pFnFInterpConstantTo, &FInterpConstantTo_Parms, NULL );

	return FInterpConstantTo_Parms.ReturnValue;
};

// Function Core.Object.FInterpTo
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Current                        ( CPF_Parm )
// float                          Target                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// float                          InterpSpeed                    ( CPF_Parm )

float UObject::FInterpTo ( float Current, float Target, float DeltaTime, float InterpSpeed )
{
	static UFunction* pFnFInterpTo = NULL;

	if ( ! pFnFInterpTo )
		pFnFInterpTo = (UFunction*) UObject::GObjObjects()->Data[ 2401 ];

	UObject_execFInterpTo_Parms FInterpTo_Parms;
	FInterpTo_Parms.Current = Current;
	FInterpTo_Parms.Target = Target;
	FInterpTo_Parms.DeltaTime = DeltaTime;
	FInterpTo_Parms.InterpSpeed = InterpSpeed;

	this->ProcessEvent ( pFnFInterpTo, &FInterpTo_Parms, NULL );

	return FInterpTo_Parms.ReturnValue;
};

// Function Core.Object.FPctByRange
// [0x00022103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Value                          ( CPF_Parm )
// float                          InMin                          ( CPF_Parm )
// float                          InMax                          ( CPF_Parm )

float UObject::FPctByRange ( float Value, float InMin, float InMax )
{
	static UFunction* pFnFPctByRange = NULL;

	if ( ! pFnFPctByRange )
		pFnFPctByRange = (UFunction*) UObject::GObjObjects()->Data[ 2677 ];

	UObject_execFPctByRange_Parms FPctByRange_Parms;
	FPctByRange_Parms.Value = Value;
	FPctByRange_Parms.InMin = InMin;
	FPctByRange_Parms.InMax = InMax;

	this->ProcessEvent ( pFnFPctByRange, &FPctByRange_Parms, NULL );

	return FPctByRange_Parms.ReturnValue;
};

// Function Core.Object.RandRange
// [0x00026103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          InMin                          ( CPF_Parm )
// float                          InMax                          ( CPF_Parm )
// float                          rounding_offset                ( CPF_OptionalParm | CPF_Parm )

float UObject::RandRange ( float InMin, float InMax, float rounding_offset )
{
	static UFunction* pFnRandRange = NULL;

	if ( ! pFnRandRange )
		pFnRandRange = (UFunction*) UObject::GObjObjects()->Data[ 2683 ];

	UObject_execRandRange_Parms RandRange_Parms;
	RandRange_Parms.InMin = InMin;
	RandRange_Parms.InMax = InMax;
	RandRange_Parms.rounding_offset = rounding_offset;

	this->ProcessEvent ( pFnRandRange, &RandRange_Parms, NULL );

	return RandRange_Parms.ReturnValue;
};

// Function Core.Object.FInterpEaseInOut
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )
// float                          Alpha                          ( CPF_Parm )
// float                          Exp                            ( CPF_Parm )

float UObject::FInterpEaseInOut ( float A, float B, float Alpha, float Exp )
{
	static UFunction* pFnFInterpEaseInOut = NULL;

	if ( ! pFnFInterpEaseInOut )
		pFnFInterpEaseInOut = (UFunction*) UObject::GObjObjects()->Data[ 2688 ];

	UObject_execFInterpEaseInOut_Parms FInterpEaseInOut_Parms;
	FInterpEaseInOut_Parms.A = A;
	FInterpEaseInOut_Parms.B = B;
	FInterpEaseInOut_Parms.Alpha = Alpha;
	FInterpEaseInOut_Parms.Exp = Exp;

	this->ProcessEvent ( pFnFInterpEaseInOut, &FInterpEaseInOut_Parms, NULL );

	return FInterpEaseInOut_Parms.ReturnValue;
};

// Function Core.Object.FInterpEaseOut
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )
// float                          Alpha                          ( CPF_Parm )
// float                          Exp                            ( CPF_Parm )

float UObject::FInterpEaseOut ( float A, float B, float Alpha, float Exp )
{
	static UFunction* pFnFInterpEaseOut = NULL;

	if ( ! pFnFInterpEaseOut )
		pFnFInterpEaseOut = (UFunction*) UObject::GObjObjects()->Data[ 2693 ];

	UObject_execFInterpEaseOut_Parms FInterpEaseOut_Parms;
	FInterpEaseOut_Parms.A = A;
	FInterpEaseOut_Parms.B = B;
	FInterpEaseOut_Parms.Alpha = Alpha;
	FInterpEaseOut_Parms.Exp = Exp;

	this->ProcessEvent ( pFnFInterpEaseOut, &FInterpEaseOut_Parms, NULL );

	return FInterpEaseOut_Parms.ReturnValue;
};

// Function Core.Object.FInterpEaseIn
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )
// float                          Alpha                          ( CPF_Parm )
// float                          Exp                            ( CPF_Parm )

float UObject::FInterpEaseIn ( float A, float B, float Alpha, float Exp )
{
	static UFunction* pFnFInterpEaseIn = NULL;

	if ( ! pFnFInterpEaseIn )
		pFnFInterpEaseIn = (UFunction*) UObject::GObjObjects()->Data[ 2699 ];

	UObject_execFInterpEaseIn_Parms FInterpEaseIn_Parms;
	FInterpEaseIn_Parms.A = A;
	FInterpEaseIn_Parms.B = B;
	FInterpEaseIn_Parms.Alpha = Alpha;
	FInterpEaseIn_Parms.Exp = Exp;

	this->ProcessEvent ( pFnFInterpEaseIn, &FInterpEaseIn_Parms, NULL );

	return FInterpEaseIn_Parms.ReturnValue;
};

// Function Core.Object.FCubicInterp
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          P0                             ( CPF_Parm )
// float                          T0                             ( CPF_Parm )
// float                          P1                             ( CPF_Parm )
// float                          T1                             ( CPF_Parm )
// float                          A                              ( CPF_Parm )

float UObject::FCubicInterp ( float P0, float T0, float P1, float T1, float A )
{
	static UFunction* pFnFCubicInterp = NULL;

	if ( ! pFnFCubicInterp )
		pFnFCubicInterp = (UFunction*) UObject::GObjObjects()->Data[ 2705 ];

	UObject_execFCubicInterp_Parms FCubicInterp_Parms;
	FCubicInterp_Parms.P0 = P0;
	FCubicInterp_Parms.T0 = T0;
	FCubicInterp_Parms.P1 = P1;
	FCubicInterp_Parms.T1 = T1;
	FCubicInterp_Parms.A = A;

	this->ProcessEvent ( pFnFCubicInterp, &FCubicInterp_Parms, NULL );

	return FCubicInterp_Parms.ReturnValue;
};

// Function Core.Object.SeededRand
// [0x00422401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            MaxVal                         ( CPF_Parm )
// int                            Seed                           ( CPF_Parm | CPF_OutParm )

int UObject::SeededRand ( int MaxVal, int* Seed )
{
	static UFunction* pFnSeededRand = NULL;

	if ( ! pFnSeededRand )
		pFnSeededRand = (UFunction*) UObject::GObjObjects()->Data[ 2711 ];

	UObject_execSeededRand_Parms SeededRand_Parms;
	SeededRand_Parms.MaxVal = MaxVal;

	this->ProcessEvent ( pFnSeededRand, &SeededRand_Parms, NULL );

	if ( Seed )
		*Seed = SeededRand_Parms.Seed;

	return SeededRand_Parms.ReturnValue;
};

// Function Core.Object.SeededFRand
// [0x00422401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Seed                           ( CPF_Parm | CPF_OutParm )

float UObject::SeededFRand ( int* Seed )
{
	static UFunction* pFnSeededFRand = NULL;

	if ( ! pFnSeededFRand )
		pFnSeededFRand = (UFunction*) UObject::GObjObjects()->Data[ 2718 ];

	UObject_execSeededFRand_Parms SeededFRand_Parms;

	this->ProcessEvent ( pFnSeededFRand, &SeededFRand_Parms, NULL );

	if ( Seed )
		*Seed = SeededFRand_Parms.Seed;

	return SeededFRand_Parms.ReturnValue;
};

// Function Core.Object.SeedRand
// [0x00022400] 
// Parameters infos:
// int                            A                              ( CPF_Parm )

void UObject::SeedRand ( int A )
{
	static UFunction* pFnSeedRand = NULL;

	if ( ! pFnSeedRand )
		pFnSeedRand = (UFunction*) UObject::GObjObjects()->Data[ 2722 ];

	UObject_execSeedRand_Parms SeedRand_Parms;
	SeedRand_Parms.A = A;

	this->ProcessEvent ( pFnSeedRand, &SeedRand_Parms, NULL );
};

// Function Core.Object.FCeil
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

int UObject::FCeil ( float A )
{
	static UFunction* pFnFCeil = NULL;

	if ( ! pFnFCeil )
		pFnFCeil = (UFunction*) UObject::GObjObjects()->Data[ 2725 ];

	UObject_execFCeil_Parms FCeil_Parms;
	FCeil_Parms.A = A;

	this->ProcessEvent ( pFnFCeil, &FCeil_Parms, NULL );

	return FCeil_Parms.ReturnValue;
};

// Function Core.Object.FFloor
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

int UObject::FFloor ( float A )
{
	static UFunction* pFnFFloor = NULL;

	if ( ! pFnFFloor )
		pFnFFloor = (UFunction*) UObject::GObjObjects()->Data[ 1424 ];

	UObject_execFFloor_Parms FFloor_Parms;
	FFloor_Parms.A = A;

	this->ProcessEvent ( pFnFFloor, &FFloor_Parms, NULL );

	return FFloor_Parms.ReturnValue;
};

// Function Core.Object.Round
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

int UObject::Round ( float A )
{
	static UFunction* pFnRound = NULL;

	if ( ! pFnRound )
		pFnRound = (UFunction*) UObject::GObjObjects()->Data[ 2729 ];

	UObject_execRound_Parms Round_Parms;
	Round_Parms.A = A;

	this->ProcessEvent ( pFnRound, &Round_Parms, NULL );

	return Round_Parms.ReturnValue;
};

// Function Core.Object.Lerp
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )
// float                          Alpha                          ( CPF_Parm )

float UObject::Lerp ( float A, float B, float Alpha )
{
	static UFunction* pFnLerp = NULL;

	if ( ! pFnLerp )
		pFnLerp = (UFunction*) UObject::GObjObjects()->Data[ 2732 ];

	UObject_execLerp_Parms Lerp_Parms;
	Lerp_Parms.A = A;
	Lerp_Parms.B = B;
	Lerp_Parms.Alpha = Alpha;

	this->ProcessEvent ( pFnLerp, &Lerp_Parms, NULL );

	return Lerp_Parms.ReturnValue;
};

// Function Core.Object.FClamp
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          V                              ( CPF_Parm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

float UObject::FClamp ( float V, float A, float B )
{
	static UFunction* pFnFClamp = NULL;

	if ( ! pFnFClamp )
		pFnFClamp = (UFunction*) UObject::GObjObjects()->Data[ 2735 ];

	UObject_execFClamp_Parms FClamp_Parms;
	FClamp_Parms.V = V;
	FClamp_Parms.A = A;
	FClamp_Parms.B = B;

	this->ProcessEvent ( pFnFClamp, &FClamp_Parms, NULL );

	return FClamp_Parms.ReturnValue;
};

// Function Core.Object.FMax
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

float UObject::FMax ( float A, float B )
{
	static UFunction* pFnFMax = NULL;

	if ( ! pFnFMax )
		pFnFMax = (UFunction*) UObject::GObjObjects()->Data[ 2740 ];

	UObject_execFMax_Parms FMax_Parms;
	FMax_Parms.A = A;
	FMax_Parms.B = B;

	this->ProcessEvent ( pFnFMax, &FMax_Parms, NULL );

	return FMax_Parms.ReturnValue;
};

// Function Core.Object.FMin
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

float UObject::FMin ( float A, float B )
{
	static UFunction* pFnFMin = NULL;

	if ( ! pFnFMin )
		pFnFMin = (UFunction*) UObject::GObjObjects()->Data[ 2745 ];

	UObject_execFMin_Parms FMin_Parms;
	FMin_Parms.A = A;
	FMin_Parms.B = B;

	this->ProcessEvent ( pFnFMin, &FMin_Parms, NULL );

	return FMin_Parms.ReturnValue;
};

// Function Core.Object.FRand
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UObject::FRand ( )
{
	static UFunction* pFnFRand = NULL;

	if ( ! pFnFRand )
		pFnFRand = (UFunction*) UObject::GObjObjects()->Data[ 2749 ];

	UObject_execFRand_Parms FRand_Parms;

	this->ProcessEvent ( pFnFRand, &FRand_Parms, NULL );

	return FRand_Parms.ReturnValue;
};

// Function Core.Object.Square
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Square ( float A )
{
	static UFunction* pFnSquare = NULL;

	if ( ! pFnSquare )
		pFnSquare = (UFunction*) UObject::GObjObjects()->Data[ 2753 ];

	UObject_execSquare_Parms Square_Parms;
	Square_Parms.A = A;

	this->ProcessEvent ( pFnSquare, &Square_Parms, NULL );

	return Square_Parms.ReturnValue;
};

// Function Core.Object.Sqrt
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Sqrt ( float A )
{
	static UFunction* pFnSqrt = NULL;

	if ( ! pFnSqrt )
		pFnSqrt = (UFunction*) UObject::GObjObjects()->Data[ 2755 ];

	UObject_execSqrt_Parms Sqrt_Parms;
	Sqrt_Parms.A = A;

	this->ProcessEvent ( pFnSqrt, &Sqrt_Parms, NULL );

	return Sqrt_Parms.ReturnValue;
};

// Function Core.Object.Loge
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Loge ( float A )
{
	static UFunction* pFnLoge = NULL;

	if ( ! pFnLoge )
		pFnLoge = (UFunction*) UObject::GObjObjects()->Data[ 2758 ];

	UObject_execLoge_Parms Loge_Parms;
	Loge_Parms.A = A;

	this->ProcessEvent ( pFnLoge, &Loge_Parms, NULL );

	return Loge_Parms.ReturnValue;
};

// Function Core.Object.Exp
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Exp ( float A )
{
	static UFunction* pFnExp = NULL;

	if ( ! pFnExp )
		pFnExp = (UFunction*) UObject::GObjObjects()->Data[ 2761 ];

	UObject_execExp_Parms Exp_Parms;
	Exp_Parms.A = A;

	this->ProcessEvent ( pFnExp, &Exp_Parms, NULL );

	return Exp_Parms.ReturnValue;
};

// Function Core.Object.Atan2
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

float UObject::Atan2 ( float A, float B )
{
	static UFunction* pFnAtan2 = NULL;

	if ( ! pFnAtan2 )
		pFnAtan2 = (UFunction*) UObject::GObjObjects()->Data[ 2764 ];

	UObject_execAtan2_Parms Atan2_Parms;
	Atan2_Parms.A = A;
	Atan2_Parms.B = B;

	this->ProcessEvent ( pFnAtan2, &Atan2_Parms, NULL );

	return Atan2_Parms.ReturnValue;
};

// Function Core.Object.Atan
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Atan ( float A )
{
	static UFunction* pFnAtan = NULL;

	if ( ! pFnAtan )
		pFnAtan = (UFunction*) UObject::GObjObjects()->Data[ 2767 ];

	UObject_execAtan_Parms Atan_Parms;
	Atan_Parms.A = A;

	this->ProcessEvent ( pFnAtan, &Atan_Parms, NULL );

	return Atan_Parms.ReturnValue;
};

// Function Core.Object.Tan
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Tan ( float A )
{
	static UFunction* pFnTan = NULL;

	if ( ! pFnTan )
		pFnTan = (UFunction*) UObject::GObjObjects()->Data[ 2771 ];

	UObject_execTan_Parms Tan_Parms;
	Tan_Parms.A = A;

	this->ProcessEvent ( pFnTan, &Tan_Parms, NULL );

	return Tan_Parms.ReturnValue;
};

// Function Core.Object.Acos
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Acos ( float A )
{
	static UFunction* pFnAcos = NULL;

	if ( ! pFnAcos )
		pFnAcos = (UFunction*) UObject::GObjObjects()->Data[ 1711 ];

	UObject_execAcos_Parms Acos_Parms;
	Acos_Parms.A = A;

	this->ProcessEvent ( pFnAcos, &Acos_Parms, NULL );

	return Acos_Parms.ReturnValue;
};

// Function Core.Object.Cos
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Cos ( float A )
{
	static UFunction* pFnCos = NULL;

	if ( ! pFnCos )
		pFnCos = (UFunction*) UObject::GObjObjects()->Data[ 2776 ];

	UObject_execCos_Parms Cos_Parms;
	Cos_Parms.A = A;

	this->ProcessEvent ( pFnCos, &Cos_Parms, NULL );

	return Cos_Parms.ReturnValue;
};

// Function Core.Object.Asin
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Asin ( float A )
{
	static UFunction* pFnAsin = NULL;

	if ( ! pFnAsin )
		pFnAsin = (UFunction*) UObject::GObjObjects()->Data[ 2779 ];

	UObject_execAsin_Parms Asin_Parms;
	Asin_Parms.A = A;

	this->ProcessEvent ( pFnAsin, &Asin_Parms, NULL );

	return Asin_Parms.ReturnValue;
};

// Function Core.Object.Sin
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Sin ( float A )
{
	static UFunction* pFnSin = NULL;

	if ( ! pFnSin )
		pFnSin = (UFunction*) UObject::GObjObjects()->Data[ 2782 ];

	UObject_execSin_Parms Sin_Parms;
	Sin_Parms.A = A;

	this->ProcessEvent ( pFnSin, &Sin_Parms, NULL );

	return Sin_Parms.ReturnValue;
};

// Function Core.Object.Abs
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Abs ( float A )
{
	static UFunction* pFnAbs = NULL;

	if ( ! pFnAbs )
		pFnAbs = (UFunction*) UObject::GObjObjects()->Data[ 2785 ];

	UObject_execAbs_Parms Abs_Parms;
	Abs_Parms.A = A;

	this->ProcessEvent ( pFnAbs, &Abs_Parms, NULL );

	return Abs_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_FloatFloat
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// float                          A                              ( CPF_Parm | CPF_OutParm )

float UObject::SubtractEqual_FloatFloat ( float B, float* A )
{
	static UFunction* pFnSubtractEqual_FloatFloat = NULL;

	if ( ! pFnSubtractEqual_FloatFloat )
		pFnSubtractEqual_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 2788 ];

	UObject_execSubtractEqual_FloatFloat_Parms SubtractEqual_FloatFloat_Parms;
	SubtractEqual_FloatFloat_Parms.B = B;

	this->ProcessEvent ( pFnSubtractEqual_FloatFloat, &SubtractEqual_FloatFloat_Parms, NULL );

	if ( A )
		*A = SubtractEqual_FloatFloat_Parms.A;

	return SubtractEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.AddEqual_FloatFloat
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// float                          A                              ( CPF_Parm | CPF_OutParm )

float UObject::AddEqual_FloatFloat ( float B, float* A )
{
	static UFunction* pFnAddEqual_FloatFloat = NULL;

	if ( ! pFnAddEqual_FloatFloat )
		pFnAddEqual_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 2791 ];

	UObject_execAddEqual_FloatFloat_Parms AddEqual_FloatFloat_Parms;
	AddEqual_FloatFloat_Parms.B = B;

	this->ProcessEvent ( pFnAddEqual_FloatFloat, &AddEqual_FloatFloat_Parms, NULL );

	if ( A )
		*A = AddEqual_FloatFloat_Parms.A;

	return AddEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.DivideEqual_FloatFloat
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// float                          A                              ( CPF_Parm | CPF_OutParm )

float UObject::DivideEqual_FloatFloat ( float B, float* A )
{
	static UFunction* pFnDivideEqual_FloatFloat = NULL;

	if ( ! pFnDivideEqual_FloatFloat )
		pFnDivideEqual_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 2795 ];

	UObject_execDivideEqual_FloatFloat_Parms DivideEqual_FloatFloat_Parms;
	DivideEqual_FloatFloat_Parms.B = B;

	this->ProcessEvent ( pFnDivideEqual_FloatFloat, &DivideEqual_FloatFloat_Parms, NULL );

	if ( A )
		*A = DivideEqual_FloatFloat_Parms.A;

	return DivideEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_FloatFloat
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// float                          A                              ( CPF_Parm | CPF_OutParm )

float UObject::MultiplyEqual_FloatFloat ( float B, float* A )
{
	static UFunction* pFnMultiplyEqual_FloatFloat = NULL;

	if ( ! pFnMultiplyEqual_FloatFloat )
		pFnMultiplyEqual_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 2799 ];

	UObject_execMultiplyEqual_FloatFloat_Parms MultiplyEqual_FloatFloat_Parms;
	MultiplyEqual_FloatFloat_Parms.B = B;

	this->ProcessEvent ( pFnMultiplyEqual_FloatFloat, &MultiplyEqual_FloatFloat_Parms, NULL );

	if ( A )
		*A = MultiplyEqual_FloatFloat_Parms.A;

	return MultiplyEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_FloatFloat
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

bool UObject::NotEqual_FloatFloat ( float A, float B )
{
	static UFunction* pFnNotEqual_FloatFloat = NULL;

	if ( ! pFnNotEqual_FloatFloat )
		pFnNotEqual_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 2803 ];

	UObject_execNotEqual_FloatFloat_Parms NotEqual_FloatFloat_Parms;
	NotEqual_FloatFloat_Parms.A = A;
	NotEqual_FloatFloat_Parms.B = B;

	this->ProcessEvent ( pFnNotEqual_FloatFloat, &NotEqual_FloatFloat_Parms, NULL );

	return NotEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.ComplementEqual_FloatFloat
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

bool UObject::ComplementEqual_FloatFloat ( float A, float B )
{
	static UFunction* pFnComplementEqual_FloatFloat = NULL;

	if ( ! pFnComplementEqual_FloatFloat )
		pFnComplementEqual_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 2807 ];

	UObject_execComplementEqual_FloatFloat_Parms ComplementEqual_FloatFloat_Parms;
	ComplementEqual_FloatFloat_Parms.A = A;
	ComplementEqual_FloatFloat_Parms.B = B;

	this->ProcessEvent ( pFnComplementEqual_FloatFloat, &ComplementEqual_FloatFloat_Parms, NULL );

	return ComplementEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_FloatFloat
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

bool UObject::EqualEqual_FloatFloat ( float A, float B )
{
	static UFunction* pFnEqualEqual_FloatFloat = NULL;

	if ( ! pFnEqualEqual_FloatFloat )
		pFnEqualEqual_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 2811 ];

	UObject_execEqualEqual_FloatFloat_Parms EqualEqual_FloatFloat_Parms;
	EqualEqual_FloatFloat_Parms.A = A;
	EqualEqual_FloatFloat_Parms.B = B;

	this->ProcessEvent ( pFnEqualEqual_FloatFloat, &EqualEqual_FloatFloat_Parms, NULL );

	return EqualEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.GreaterEqual_FloatFloat
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

bool UObject::GreaterEqual_FloatFloat ( float A, float B )
{
	static UFunction* pFnGreaterEqual_FloatFloat = NULL;

	if ( ! pFnGreaterEqual_FloatFloat )
		pFnGreaterEqual_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 2815 ];

	UObject_execGreaterEqual_FloatFloat_Parms GreaterEqual_FloatFloat_Parms;
	GreaterEqual_FloatFloat_Parms.A = A;
	GreaterEqual_FloatFloat_Parms.B = B;

	this->ProcessEvent ( pFnGreaterEqual_FloatFloat, &GreaterEqual_FloatFloat_Parms, NULL );

	return GreaterEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.LessEqual_FloatFloat
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

bool UObject::LessEqual_FloatFloat ( float A, float B )
{
	static UFunction* pFnLessEqual_FloatFloat = NULL;

	if ( ! pFnLessEqual_FloatFloat )
		pFnLessEqual_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 2819 ];

	UObject_execLessEqual_FloatFloat_Parms LessEqual_FloatFloat_Parms;
	LessEqual_FloatFloat_Parms.A = A;
	LessEqual_FloatFloat_Parms.B = B;

	this->ProcessEvent ( pFnLessEqual_FloatFloat, &LessEqual_FloatFloat_Parms, NULL );

	return LessEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Greater_FloatFloat
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

bool UObject::Greater_FloatFloat ( float A, float B )
{
	static UFunction* pFnGreater_FloatFloat = NULL;

	if ( ! pFnGreater_FloatFloat )
		pFnGreater_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 2823 ];

	UObject_execGreater_FloatFloat_Parms Greater_FloatFloat_Parms;
	Greater_FloatFloat_Parms.A = A;
	Greater_FloatFloat_Parms.B = B;

	this->ProcessEvent ( pFnGreater_FloatFloat, &Greater_FloatFloat_Parms, NULL );

	return Greater_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Less_FloatFloat
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

bool UObject::Less_FloatFloat ( float A, float B )
{
	static UFunction* pFnLess_FloatFloat = NULL;

	if ( ! pFnLess_FloatFloat )
		pFnLess_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 2827 ];

	UObject_execLess_FloatFloat_Parms Less_FloatFloat_Parms;
	Less_FloatFloat_Parms.A = A;
	Less_FloatFloat_Parms.B = B;

	this->ProcessEvent ( pFnLess_FloatFloat, &Less_FloatFloat_Parms, NULL );

	return Less_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Subtract_FloatFloat
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

float UObject::Subtract_FloatFloat ( float A, float B )
{
	static UFunction* pFnSubtract_FloatFloat = NULL;

	if ( ! pFnSubtract_FloatFloat )
		pFnSubtract_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 2831 ];

	UObject_execSubtract_FloatFloat_Parms Subtract_FloatFloat_Parms;
	Subtract_FloatFloat_Parms.A = A;
	Subtract_FloatFloat_Parms.B = B;

	this->ProcessEvent ( pFnSubtract_FloatFloat, &Subtract_FloatFloat_Parms, NULL );

	return Subtract_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Add_FloatFloat
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

float UObject::Add_FloatFloat ( float A, float B )
{
	static UFunction* pFnAdd_FloatFloat = NULL;

	if ( ! pFnAdd_FloatFloat )
		pFnAdd_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 2835 ];

	UObject_execAdd_FloatFloat_Parms Add_FloatFloat_Parms;
	Add_FloatFloat_Parms.A = A;
	Add_FloatFloat_Parms.B = B;

	this->ProcessEvent ( pFnAdd_FloatFloat, &Add_FloatFloat_Parms, NULL );

	return Add_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Percent_FloatFloat
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

float UObject::Percent_FloatFloat ( float A, float B )
{
	static UFunction* pFnPercent_FloatFloat = NULL;

	if ( ! pFnPercent_FloatFloat )
		pFnPercent_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 2839 ];

	UObject_execPercent_FloatFloat_Parms Percent_FloatFloat_Parms;
	Percent_FloatFloat_Parms.A = A;
	Percent_FloatFloat_Parms.B = B;

	this->ProcessEvent ( pFnPercent_FloatFloat, &Percent_FloatFloat_Parms, NULL );

	return Percent_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Divide_FloatFloat
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

float UObject::Divide_FloatFloat ( float A, float B )
{
	static UFunction* pFnDivide_FloatFloat = NULL;

	if ( ! pFnDivide_FloatFloat )
		pFnDivide_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 2843 ];

	UObject_execDivide_FloatFloat_Parms Divide_FloatFloat_Parms;
	Divide_FloatFloat_Parms.A = A;
	Divide_FloatFloat_Parms.B = B;

	this->ProcessEvent ( pFnDivide_FloatFloat, &Divide_FloatFloat_Parms, NULL );

	return Divide_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Multiply_FloatFloat
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

float UObject::Multiply_FloatFloat ( float A, float B )
{
	static UFunction* pFnMultiply_FloatFloat = NULL;

	if ( ! pFnMultiply_FloatFloat )
		pFnMultiply_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 2847 ];

	UObject_execMultiply_FloatFloat_Parms Multiply_FloatFloat_Parms;
	Multiply_FloatFloat_Parms.A = A;
	Multiply_FloatFloat_Parms.B = B;

	this->ProcessEvent ( pFnMultiply_FloatFloat, &Multiply_FloatFloat_Parms, NULL );

	return Multiply_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.MultiplyMultiply_FloatFloat
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Base                           ( CPF_Parm )
// float                          Exp                            ( CPF_Parm )

float UObject::MultiplyMultiply_FloatFloat ( float Base, float Exp )
{
	static UFunction* pFnMultiplyMultiply_FloatFloat = NULL;

	if ( ! pFnMultiplyMultiply_FloatFloat )
		pFnMultiplyMultiply_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 2851 ];

	UObject_execMultiplyMultiply_FloatFloat_Parms MultiplyMultiply_FloatFloat_Parms;
	MultiplyMultiply_FloatFloat_Parms.Base = Base;
	MultiplyMultiply_FloatFloat_Parms.Exp = Exp;

	this->ProcessEvent ( pFnMultiplyMultiply_FloatFloat, &MultiplyMultiply_FloatFloat_Parms, NULL );

	return MultiplyMultiply_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Subtract_PreFloat
// [0x00023411] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Subtract_PreFloat ( float A )
{
	static UFunction* pFnSubtract_PreFloat = NULL;

	if ( ! pFnSubtract_PreFloat )
		pFnSubtract_PreFloat = (UFunction*) UObject::GObjObjects()->Data[ 2855 ];

	UObject_execSubtract_PreFloat_Parms Subtract_PreFloat_Parms;
	Subtract_PreFloat_Parms.A = A;

	this->ProcessEvent ( pFnSubtract_PreFloat, &Subtract_PreFloat_Parms, NULL );

	return Subtract_PreFloat_Parms.ReturnValue;
};

// Function Core.Object.ToHex
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            A                              ( CPF_Parm )

struct FString UObject::ToHex ( int A )
{
	static UFunction* pFnToHex = NULL;

	if ( ! pFnToHex )
		pFnToHex = (UFunction*) UObject::GObjObjects()->Data[ 2859 ];

	UObject_execToHex_Parms ToHex_Parms;
	ToHex_Parms.A = A;

	this->ProcessEvent ( pFnToHex, &ToHex_Parms, NULL );

	return ToHex_Parms.ReturnValue;
};

// Function Core.Object.Clamp
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            V                              ( CPF_Parm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::Clamp ( int V, int A, int B )
{
	static UFunction* pFnClamp = NULL;

	if ( ! pFnClamp )
		pFnClamp = (UFunction*) UObject::GObjObjects()->Data[ 2862 ];

	UObject_execClamp_Parms Clamp_Parms;
	Clamp_Parms.V = V;
	Clamp_Parms.A = A;
	Clamp_Parms.B = B;

	this->ProcessEvent ( pFnClamp, &Clamp_Parms, NULL );

	return Clamp_Parms.ReturnValue;
};

// Function Core.Object.Max
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::Max ( int A, int B )
{
	static UFunction* pFnMax = NULL;

	if ( ! pFnMax )
		pFnMax = (UFunction*) UObject::GObjObjects()->Data[ 2865 ];

	UObject_execMax_Parms Max_Parms;
	Max_Parms.A = A;
	Max_Parms.B = B;

	this->ProcessEvent ( pFnMax, &Max_Parms, NULL );

	return Max_Parms.ReturnValue;
};

// Function Core.Object.Min
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::Min ( int A, int B )
{
	static UFunction* pFnMin = NULL;

	if ( ! pFnMin )
		pFnMin = (UFunction*) UObject::GObjObjects()->Data[ 2870 ];

	UObject_execMin_Parms Min_Parms;
	Min_Parms.A = A;
	Min_Parms.B = B;

	this->ProcessEvent ( pFnMin, &Min_Parms, NULL );

	return Min_Parms.ReturnValue;
};

// Function Core.Object.LargeRand
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Max                            ( CPF_Parm )

int UObject::LargeRand ( int Max )
{
	static UFunction* pFnLargeRand = NULL;

	if ( ! pFnLargeRand )
		pFnLargeRand = (UFunction*) UObject::GObjObjects()->Data[ 2874 ];

	UObject_execLargeRand_Parms LargeRand_Parms;
	LargeRand_Parms.Max = Max;

	this->ProcessEvent ( pFnLargeRand, &LargeRand_Parms, NULL );

	return LargeRand_Parms.ReturnValue;
};

// Function Core.Object.Rand
// [0x00022401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Max                            ( CPF_Parm )

int UObject::Rand ( int Max )
{
	static UFunction* pFnRand = NULL;

	if ( ! pFnRand )
		pFnRand = (UFunction*) UObject::GObjObjects()->Data[ 2878 ];

	UObject_execRand_Parms Rand_Parms;
	Rand_Parms.Max = Max;

	this->ProcessEvent ( pFnRand, &Rand_Parms, NULL );

	return Rand_Parms.ReturnValue;
};

// Function Core.Object.SubtractSubtract_Int
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm | CPF_OutParm )

int UObject::SubtractSubtract_Int ( int* A )
{
	static UFunction* pFnSubtractSubtract_Int = NULL;

	if ( ! pFnSubtractSubtract_Int )
		pFnSubtractSubtract_Int = (UFunction*) UObject::GObjObjects()->Data[ 2881 ];

	UObject_execSubtractSubtract_Int_Parms SubtractSubtract_Int_Parms;

	this->ProcessEvent ( pFnSubtractSubtract_Int, &SubtractSubtract_Int_Parms, NULL );

	if ( A )
		*A = SubtractSubtract_Int_Parms.A;

	return SubtractSubtract_Int_Parms.ReturnValue;
};

// Function Core.Object.AddAdd_Int
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm | CPF_OutParm )

int UObject::AddAdd_Int ( int* A )
{
	static UFunction* pFnAddAdd_Int = NULL;

	if ( ! pFnAddAdd_Int )
		pFnAddAdd_Int = (UFunction*) UObject::GObjObjects()->Data[ 2884 ];

	UObject_execAddAdd_Int_Parms AddAdd_Int_Parms;

	this->ProcessEvent ( pFnAddAdd_Int, &AddAdd_Int_Parms, NULL );

	if ( A )
		*A = AddAdd_Int_Parms.A;

	return AddAdd_Int_Parms.ReturnValue;
};

// Function Core.Object.SubtractSubtract_PreInt
// [0x00423411] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm | CPF_OutParm )

int UObject::SubtractSubtract_PreInt ( int* A )
{
	static UFunction* pFnSubtractSubtract_PreInt = NULL;

	if ( ! pFnSubtractSubtract_PreInt )
		pFnSubtractSubtract_PreInt = (UFunction*) UObject::GObjObjects()->Data[ 2887 ];

	UObject_execSubtractSubtract_PreInt_Parms SubtractSubtract_PreInt_Parms;

	this->ProcessEvent ( pFnSubtractSubtract_PreInt, &SubtractSubtract_PreInt_Parms, NULL );

	if ( A )
		*A = SubtractSubtract_PreInt_Parms.A;

	return SubtractSubtract_PreInt_Parms.ReturnValue;
};

// Function Core.Object.AddAdd_PreInt
// [0x00423411] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm | CPF_OutParm )

int UObject::AddAdd_PreInt ( int* A )
{
	static UFunction* pFnAddAdd_PreInt = NULL;

	if ( ! pFnAddAdd_PreInt )
		pFnAddAdd_PreInt = (UFunction*) UObject::GObjObjects()->Data[ 2890 ];

	UObject_execAddAdd_PreInt_Parms AddAdd_PreInt_Parms;

	this->ProcessEvent ( pFnAddAdd_PreInt, &AddAdd_PreInt_Parms, NULL );

	if ( A )
		*A = AddAdd_PreInt_Parms.A;

	return AddAdd_PreInt_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_IntInt
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            B                              ( CPF_Parm )
// int                            A                              ( CPF_Parm | CPF_OutParm )

int UObject::SubtractEqual_IntInt ( int B, int* A )
{
	static UFunction* pFnSubtractEqual_IntInt = NULL;

	if ( ! pFnSubtractEqual_IntInt )
		pFnSubtractEqual_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 2893 ];

	UObject_execSubtractEqual_IntInt_Parms SubtractEqual_IntInt_Parms;
	SubtractEqual_IntInt_Parms.B = B;

	this->ProcessEvent ( pFnSubtractEqual_IntInt, &SubtractEqual_IntInt_Parms, NULL );

	if ( A )
		*A = SubtractEqual_IntInt_Parms.A;

	return SubtractEqual_IntInt_Parms.ReturnValue;
};

// Function Core.Object.AddEqual_IntInt
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            B                              ( CPF_Parm )
// int                            A                              ( CPF_Parm | CPF_OutParm )

int UObject::AddEqual_IntInt ( int B, int* A )
{
	static UFunction* pFnAddEqual_IntInt = NULL;

	if ( ! pFnAddEqual_IntInt )
		pFnAddEqual_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 2896 ];

	UObject_execAddEqual_IntInt_Parms AddEqual_IntInt_Parms;
	AddEqual_IntInt_Parms.B = B;

	this->ProcessEvent ( pFnAddEqual_IntInt, &AddEqual_IntInt_Parms, NULL );

	if ( A )
		*A = AddEqual_IntInt_Parms.A;

	return AddEqual_IntInt_Parms.ReturnValue;
};

// Function Core.Object.DivideEqual_IntFloat
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// int                            A                              ( CPF_Parm | CPF_OutParm )

int UObject::DivideEqual_IntFloat ( float B, int* A )
{
	static UFunction* pFnDivideEqual_IntFloat = NULL;

	if ( ! pFnDivideEqual_IntFloat )
		pFnDivideEqual_IntFloat = (UFunction*) UObject::GObjObjects()->Data[ 2900 ];

	UObject_execDivideEqual_IntFloat_Parms DivideEqual_IntFloat_Parms;
	DivideEqual_IntFloat_Parms.B = B;

	this->ProcessEvent ( pFnDivideEqual_IntFloat, &DivideEqual_IntFloat_Parms, NULL );

	if ( A )
		*A = DivideEqual_IntFloat_Parms.A;

	return DivideEqual_IntFloat_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_IntFloat
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// int                            A                              ( CPF_Parm | CPF_OutParm )

int UObject::MultiplyEqual_IntFloat ( float B, int* A )
{
	static UFunction* pFnMultiplyEqual_IntFloat = NULL;

	if ( ! pFnMultiplyEqual_IntFloat )
		pFnMultiplyEqual_IntFloat = (UFunction*) UObject::GObjObjects()->Data[ 2904 ];

	UObject_execMultiplyEqual_IntFloat_Parms MultiplyEqual_IntFloat_Parms;
	MultiplyEqual_IntFloat_Parms.B = B;

	this->ProcessEvent ( pFnMultiplyEqual_IntFloat, &MultiplyEqual_IntFloat_Parms, NULL );

	if ( A )
		*A = MultiplyEqual_IntFloat_Parms.A;

	return MultiplyEqual_IntFloat_Parms.ReturnValue;
};

// Function Core.Object.Or_IntInt
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::Or_IntInt ( int A, int B )
{
	static UFunction* pFnOr_IntInt = NULL;

	if ( ! pFnOr_IntInt )
		pFnOr_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 2908 ];

	UObject_execOr_IntInt_Parms Or_IntInt_Parms;
	Or_IntInt_Parms.A = A;
	Or_IntInt_Parms.B = B;

	this->ProcessEvent ( pFnOr_IntInt, &Or_IntInt_Parms, NULL );

	return Or_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Xor_IntInt
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::Xor_IntInt ( int A, int B )
{
	static UFunction* pFnXor_IntInt = NULL;

	if ( ! pFnXor_IntInt )
		pFnXor_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 2912 ];

	UObject_execXor_IntInt_Parms Xor_IntInt_Parms;
	Xor_IntInt_Parms.A = A;
	Xor_IntInt_Parms.B = B;

	this->ProcessEvent ( pFnXor_IntInt, &Xor_IntInt_Parms, NULL );

	return Xor_IntInt_Parms.ReturnValue;
};

// Function Core.Object.And_IntInt
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::And_IntInt ( int A, int B )
{
	static UFunction* pFnAnd_IntInt = NULL;

	if ( ! pFnAnd_IntInt )
		pFnAnd_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 2916 ];

	UObject_execAnd_IntInt_Parms And_IntInt_Parms;
	And_IntInt_Parms.A = A;
	And_IntInt_Parms.B = B;

	this->ProcessEvent ( pFnAnd_IntInt, &And_IntInt_Parms, NULL );

	return And_IntInt_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_IntInt
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

bool UObject::NotEqual_IntInt ( int A, int B )
{
	static UFunction* pFnNotEqual_IntInt = NULL;

	if ( ! pFnNotEqual_IntInt )
		pFnNotEqual_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 2920 ];

	UObject_execNotEqual_IntInt_Parms NotEqual_IntInt_Parms;
	NotEqual_IntInt_Parms.A = A;
	NotEqual_IntInt_Parms.B = B;

	this->ProcessEvent ( pFnNotEqual_IntInt, &NotEqual_IntInt_Parms, NULL );

	return NotEqual_IntInt_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_IntInt
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

bool UObject::EqualEqual_IntInt ( int A, int B )
{
	static UFunction* pFnEqualEqual_IntInt = NULL;

	if ( ! pFnEqualEqual_IntInt )
		pFnEqualEqual_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 2924 ];

	UObject_execEqualEqual_IntInt_Parms EqualEqual_IntInt_Parms;
	EqualEqual_IntInt_Parms.A = A;
	EqualEqual_IntInt_Parms.B = B;

	this->ProcessEvent ( pFnEqualEqual_IntInt, &EqualEqual_IntInt_Parms, NULL );

	return EqualEqual_IntInt_Parms.ReturnValue;
};

// Function Core.Object.GreaterEqual_IntInt
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

bool UObject::GreaterEqual_IntInt ( int A, int B )
{
	static UFunction* pFnGreaterEqual_IntInt = NULL;

	if ( ! pFnGreaterEqual_IntInt )
		pFnGreaterEqual_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 2928 ];

	UObject_execGreaterEqual_IntInt_Parms GreaterEqual_IntInt_Parms;
	GreaterEqual_IntInt_Parms.A = A;
	GreaterEqual_IntInt_Parms.B = B;

	this->ProcessEvent ( pFnGreaterEqual_IntInt, &GreaterEqual_IntInt_Parms, NULL );

	return GreaterEqual_IntInt_Parms.ReturnValue;
};

// Function Core.Object.LessEqual_IntInt
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

bool UObject::LessEqual_IntInt ( int A, int B )
{
	static UFunction* pFnLessEqual_IntInt = NULL;

	if ( ! pFnLessEqual_IntInt )
		pFnLessEqual_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 2932 ];

	UObject_execLessEqual_IntInt_Parms LessEqual_IntInt_Parms;
	LessEqual_IntInt_Parms.A = A;
	LessEqual_IntInt_Parms.B = B;

	this->ProcessEvent ( pFnLessEqual_IntInt, &LessEqual_IntInt_Parms, NULL );

	return LessEqual_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Greater_IntInt
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

bool UObject::Greater_IntInt ( int A, int B )
{
	static UFunction* pFnGreater_IntInt = NULL;

	if ( ! pFnGreater_IntInt )
		pFnGreater_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 2936 ];

	UObject_execGreater_IntInt_Parms Greater_IntInt_Parms;
	Greater_IntInt_Parms.A = A;
	Greater_IntInt_Parms.B = B;

	this->ProcessEvent ( pFnGreater_IntInt, &Greater_IntInt_Parms, NULL );

	return Greater_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Less_IntInt
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

bool UObject::Less_IntInt ( int A, int B )
{
	static UFunction* pFnLess_IntInt = NULL;

	if ( ! pFnLess_IntInt )
		pFnLess_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 2940 ];

	UObject_execLess_IntInt_Parms Less_IntInt_Parms;
	Less_IntInt_Parms.A = A;
	Less_IntInt_Parms.B = B;

	this->ProcessEvent ( pFnLess_IntInt, &Less_IntInt_Parms, NULL );

	return Less_IntInt_Parms.ReturnValue;
};

// Function Core.Object.GreaterGreaterGreater_IntInt
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::GreaterGreaterGreater_IntInt ( int A, int B )
{
	static UFunction* pFnGreaterGreaterGreater_IntInt = NULL;

	if ( ! pFnGreaterGreaterGreater_IntInt )
		pFnGreaterGreaterGreater_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 2944 ];

	UObject_execGreaterGreaterGreater_IntInt_Parms GreaterGreaterGreater_IntInt_Parms;
	GreaterGreaterGreater_IntInt_Parms.A = A;
	GreaterGreaterGreater_IntInt_Parms.B = B;

	this->ProcessEvent ( pFnGreaterGreaterGreater_IntInt, &GreaterGreaterGreater_IntInt_Parms, NULL );

	return GreaterGreaterGreater_IntInt_Parms.ReturnValue;
};

// Function Core.Object.GreaterGreater_IntInt
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::GreaterGreater_IntInt ( int A, int B )
{
	static UFunction* pFnGreaterGreater_IntInt = NULL;

	if ( ! pFnGreaterGreater_IntInt )
		pFnGreaterGreater_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 2948 ];

	UObject_execGreaterGreater_IntInt_Parms GreaterGreater_IntInt_Parms;
	GreaterGreater_IntInt_Parms.A = A;
	GreaterGreater_IntInt_Parms.B = B;

	this->ProcessEvent ( pFnGreaterGreater_IntInt, &GreaterGreater_IntInt_Parms, NULL );

	return GreaterGreater_IntInt_Parms.ReturnValue;
};

// Function Core.Object.LessLess_IntInt
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::LessLess_IntInt ( int A, int B )
{
	static UFunction* pFnLessLess_IntInt = NULL;

	if ( ! pFnLessLess_IntInt )
		pFnLessLess_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 2952 ];

	UObject_execLessLess_IntInt_Parms LessLess_IntInt_Parms;
	LessLess_IntInt_Parms.A = A;
	LessLess_IntInt_Parms.B = B;

	this->ProcessEvent ( pFnLessLess_IntInt, &LessLess_IntInt_Parms, NULL );

	return LessLess_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Subtract_IntInt
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::Subtract_IntInt ( int A, int B )
{
	static UFunction* pFnSubtract_IntInt = NULL;

	if ( ! pFnSubtract_IntInt )
		pFnSubtract_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 2956 ];

	UObject_execSubtract_IntInt_Parms Subtract_IntInt_Parms;
	Subtract_IntInt_Parms.A = A;
	Subtract_IntInt_Parms.B = B;

	this->ProcessEvent ( pFnSubtract_IntInt, &Subtract_IntInt_Parms, NULL );

	return Subtract_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Add_IntInt
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::Add_IntInt ( int A, int B )
{
	static UFunction* pFnAdd_IntInt = NULL;

	if ( ! pFnAdd_IntInt )
		pFnAdd_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 2960 ];

	UObject_execAdd_IntInt_Parms Add_IntInt_Parms;
	Add_IntInt_Parms.A = A;
	Add_IntInt_Parms.B = B;

	this->ProcessEvent ( pFnAdd_IntInt, &Add_IntInt_Parms, NULL );

	return Add_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Percent_IntInt
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::Percent_IntInt ( int A, int B )
{
	static UFunction* pFnPercent_IntInt = NULL;

	if ( ! pFnPercent_IntInt )
		pFnPercent_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 2964 ];

	UObject_execPercent_IntInt_Parms Percent_IntInt_Parms;
	Percent_IntInt_Parms.A = A;
	Percent_IntInt_Parms.B = B;

	this->ProcessEvent ( pFnPercent_IntInt, &Percent_IntInt_Parms, NULL );

	return Percent_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Divide_IntInt
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::Divide_IntInt ( int A, int B )
{
	static UFunction* pFnDivide_IntInt = NULL;

	if ( ! pFnDivide_IntInt )
		pFnDivide_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 2968 ];

	UObject_execDivide_IntInt_Parms Divide_IntInt_Parms;
	Divide_IntInt_Parms.A = A;
	Divide_IntInt_Parms.B = B;

	this->ProcessEvent ( pFnDivide_IntInt, &Divide_IntInt_Parms, NULL );

	return Divide_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Multiply_IntInt
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::Multiply_IntInt ( int A, int B )
{
	static UFunction* pFnMultiply_IntInt = NULL;

	if ( ! pFnMultiply_IntInt )
		pFnMultiply_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 2972 ];

	UObject_execMultiply_IntInt_Parms Multiply_IntInt_Parms;
	Multiply_IntInt_Parms.A = A;
	Multiply_IntInt_Parms.B = B;

	this->ProcessEvent ( pFnMultiply_IntInt, &Multiply_IntInt_Parms, NULL );

	return Multiply_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Subtract_PreInt
// [0x00023411] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )

int UObject::Subtract_PreInt ( int A )
{
	static UFunction* pFnSubtract_PreInt = NULL;

	if ( ! pFnSubtract_PreInt )
		pFnSubtract_PreInt = (UFunction*) UObject::GObjObjects()->Data[ 2976 ];

	UObject_execSubtract_PreInt_Parms Subtract_PreInt_Parms;
	Subtract_PreInt_Parms.A = A;

	this->ProcessEvent ( pFnSubtract_PreInt, &Subtract_PreInt_Parms, NULL );

	return Subtract_PreInt_Parms.ReturnValue;
};

// Function Core.Object.Complement_PreInt
// [0x00023411] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )

int UObject::Complement_PreInt ( int A )
{
	static UFunction* pFnComplement_PreInt = NULL;

	if ( ! pFnComplement_PreInt )
		pFnComplement_PreInt = (UFunction*) UObject::GObjObjects()->Data[ 2980 ];

	UObject_execComplement_PreInt_Parms Complement_PreInt_Parms;
	Complement_PreInt_Parms.A = A;

	this->ProcessEvent ( pFnComplement_PreInt, &Complement_PreInt_Parms, NULL );

	return Complement_PreInt_Parms.ReturnValue;
};

// Function Core.Object.SubtractSubtract_Byte
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  A                              ( CPF_Parm | CPF_OutParm )

unsigned char UObject::SubtractSubtract_Byte ( unsigned char* A )
{
	static UFunction* pFnSubtractSubtract_Byte = NULL;

	if ( ! pFnSubtractSubtract_Byte )
		pFnSubtractSubtract_Byte = (UFunction*) UObject::GObjObjects()->Data[ 2983 ];

	UObject_execSubtractSubtract_Byte_Parms SubtractSubtract_Byte_Parms;

	this->ProcessEvent ( pFnSubtractSubtract_Byte, &SubtractSubtract_Byte_Parms, NULL );

	if ( A )
		*A = SubtractSubtract_Byte_Parms.A;

	return SubtractSubtract_Byte_Parms.ReturnValue;
};

// Function Core.Object.AddAdd_Byte
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  A                              ( CPF_Parm | CPF_OutParm )

unsigned char UObject::AddAdd_Byte ( unsigned char* A )
{
	static UFunction* pFnAddAdd_Byte = NULL;

	if ( ! pFnAddAdd_Byte )
		pFnAddAdd_Byte = (UFunction*) UObject::GObjObjects()->Data[ 2986 ];

	UObject_execAddAdd_Byte_Parms AddAdd_Byte_Parms;

	this->ProcessEvent ( pFnAddAdd_Byte, &AddAdd_Byte_Parms, NULL );

	if ( A )
		*A = AddAdd_Byte_Parms.A;

	return AddAdd_Byte_Parms.ReturnValue;
};

// Function Core.Object.SubtractSubtract_PreByte
// [0x00423411] ( FUNC_Final )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  A                              ( CPF_Parm | CPF_OutParm )

unsigned char UObject::SubtractSubtract_PreByte ( unsigned char* A )
{
	static UFunction* pFnSubtractSubtract_PreByte = NULL;

	if ( ! pFnSubtractSubtract_PreByte )
		pFnSubtractSubtract_PreByte = (UFunction*) UObject::GObjObjects()->Data[ 2989 ];

	UObject_execSubtractSubtract_PreByte_Parms SubtractSubtract_PreByte_Parms;

	this->ProcessEvent ( pFnSubtractSubtract_PreByte, &SubtractSubtract_PreByte_Parms, NULL );

	if ( A )
		*A = SubtractSubtract_PreByte_Parms.A;

	return SubtractSubtract_PreByte_Parms.ReturnValue;
};

// Function Core.Object.AddAdd_PreByte
// [0x00423411] ( FUNC_Final )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  A                              ( CPF_Parm | CPF_OutParm )

unsigned char UObject::AddAdd_PreByte ( unsigned char* A )
{
	static UFunction* pFnAddAdd_PreByte = NULL;

	if ( ! pFnAddAdd_PreByte )
		pFnAddAdd_PreByte = (UFunction*) UObject::GObjObjects()->Data[ 2992 ];

	UObject_execAddAdd_PreByte_Parms AddAdd_PreByte_Parms;

	this->ProcessEvent ( pFnAddAdd_PreByte, &AddAdd_PreByte_Parms, NULL );

	if ( A )
		*A = AddAdd_PreByte_Parms.A;

	return AddAdd_PreByte_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_ByteByte
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  B                              ( CPF_Parm )
// unsigned char                  A                              ( CPF_Parm | CPF_OutParm )

unsigned char UObject::SubtractEqual_ByteByte ( unsigned char B, unsigned char* A )
{
	static UFunction* pFnSubtractEqual_ByteByte = NULL;

	if ( ! pFnSubtractEqual_ByteByte )
		pFnSubtractEqual_ByteByte = (UFunction*) UObject::GObjObjects()->Data[ 2995 ];

	UObject_execSubtractEqual_ByteByte_Parms SubtractEqual_ByteByte_Parms;
	SubtractEqual_ByteByte_Parms.B = B;

	this->ProcessEvent ( pFnSubtractEqual_ByteByte, &SubtractEqual_ByteByte_Parms, NULL );

	if ( A )
		*A = SubtractEqual_ByteByte_Parms.A;

	return SubtractEqual_ByteByte_Parms.ReturnValue;
};

// Function Core.Object.AddEqual_ByteByte
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  B                              ( CPF_Parm )
// unsigned char                  A                              ( CPF_Parm | CPF_OutParm )

unsigned char UObject::AddEqual_ByteByte ( unsigned char B, unsigned char* A )
{
	static UFunction* pFnAddEqual_ByteByte = NULL;

	if ( ! pFnAddEqual_ByteByte )
		pFnAddEqual_ByteByte = (UFunction*) UObject::GObjObjects()->Data[ 2998 ];

	UObject_execAddEqual_ByteByte_Parms AddEqual_ByteByte_Parms;
	AddEqual_ByteByte_Parms.B = B;

	this->ProcessEvent ( pFnAddEqual_ByteByte, &AddEqual_ByteByte_Parms, NULL );

	if ( A )
		*A = AddEqual_ByteByte_Parms.A;

	return AddEqual_ByteByte_Parms.ReturnValue;
};

// Function Core.Object.DivideEqual_ByteByte
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  B                              ( CPF_Parm )
// unsigned char                  A                              ( CPF_Parm | CPF_OutParm )

unsigned char UObject::DivideEqual_ByteByte ( unsigned char B, unsigned char* A )
{
	static UFunction* pFnDivideEqual_ByteByte = NULL;

	if ( ! pFnDivideEqual_ByteByte )
		pFnDivideEqual_ByteByte = (UFunction*) UObject::GObjObjects()->Data[ 3002 ];

	UObject_execDivideEqual_ByteByte_Parms DivideEqual_ByteByte_Parms;
	DivideEqual_ByteByte_Parms.B = B;

	this->ProcessEvent ( pFnDivideEqual_ByteByte, &DivideEqual_ByteByte_Parms, NULL );

	if ( A )
		*A = DivideEqual_ByteByte_Parms.A;

	return DivideEqual_ByteByte_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_ByteFloat
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// unsigned char                  A                              ( CPF_Parm | CPF_OutParm )

unsigned char UObject::MultiplyEqual_ByteFloat ( float B, unsigned char* A )
{
	static UFunction* pFnMultiplyEqual_ByteFloat = NULL;

	if ( ! pFnMultiplyEqual_ByteFloat )
		pFnMultiplyEqual_ByteFloat = (UFunction*) UObject::GObjObjects()->Data[ 3006 ];

	UObject_execMultiplyEqual_ByteFloat_Parms MultiplyEqual_ByteFloat_Parms;
	MultiplyEqual_ByteFloat_Parms.B = B;

	this->ProcessEvent ( pFnMultiplyEqual_ByteFloat, &MultiplyEqual_ByteFloat_Parms, NULL );

	if ( A )
		*A = MultiplyEqual_ByteFloat_Parms.A;

	return MultiplyEqual_ByteFloat_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_ByteByte
// [0x00423401] ( FUNC_Final )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  B                              ( CPF_Parm )
// unsigned char                  A                              ( CPF_Parm | CPF_OutParm )

unsigned char UObject::MultiplyEqual_ByteByte ( unsigned char B, unsigned char* A )
{
	static UFunction* pFnMultiplyEqual_ByteByte = NULL;

	if ( ! pFnMultiplyEqual_ByteByte )
		pFnMultiplyEqual_ByteByte = (UFunction*) UObject::GObjObjects()->Data[ 3010 ];

	UObject_execMultiplyEqual_ByteByte_Parms MultiplyEqual_ByteByte_Parms;
	MultiplyEqual_ByteByte_Parms.B = B;

	this->ProcessEvent ( pFnMultiplyEqual_ByteByte, &MultiplyEqual_ByteByte_Parms, NULL );

	if ( A )
		*A = MultiplyEqual_ByteByte_Parms.A;

	return MultiplyEqual_ByteByte_Parms.ReturnValue;
};

// Function Core.Object.OrOr_BoolBool
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  A                              ( CPF_Parm )
// unsigned long                  B                              ( CPF_Parm | CPF_SkipParm )

bool UObject::OrOr_BoolBool ( unsigned long A, unsigned long B )
{
	static UFunction* pFnOrOr_BoolBool = NULL;

	if ( ! pFnOrOr_BoolBool )
		pFnOrOr_BoolBool = (UFunction*) UObject::GObjObjects()->Data[ 3014 ];

	UObject_execOrOr_BoolBool_Parms OrOr_BoolBool_Parms;
	OrOr_BoolBool_Parms.A = A;
	OrOr_BoolBool_Parms.B = B;

	this->ProcessEvent ( pFnOrOr_BoolBool, &OrOr_BoolBool_Parms, NULL );

	return OrOr_BoolBool_Parms.ReturnValue;
};

// Function Core.Object.XorXor_BoolBool
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  A                              ( CPF_Parm )
// unsigned long                  B                              ( CPF_Parm )

bool UObject::XorXor_BoolBool ( unsigned long A, unsigned long B )
{
	static UFunction* pFnXorXor_BoolBool = NULL;

	if ( ! pFnXorXor_BoolBool )
		pFnXorXor_BoolBool = (UFunction*) UObject::GObjObjects()->Data[ 3018 ];

	UObject_execXorXor_BoolBool_Parms XorXor_BoolBool_Parms;
	XorXor_BoolBool_Parms.A = A;
	XorXor_BoolBool_Parms.B = B;

	this->ProcessEvent ( pFnXorXor_BoolBool, &XorXor_BoolBool_Parms, NULL );

	return XorXor_BoolBool_Parms.ReturnValue;
};

// Function Core.Object.AndAnd_BoolBool
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  A                              ( CPF_Parm )
// unsigned long                  B                              ( CPF_Parm | CPF_SkipParm )

bool UObject::AndAnd_BoolBool ( unsigned long A, unsigned long B )
{
	static UFunction* pFnAndAnd_BoolBool = NULL;

	if ( ! pFnAndAnd_BoolBool )
		pFnAndAnd_BoolBool = (UFunction*) UObject::GObjObjects()->Data[ 3022 ];

	UObject_execAndAnd_BoolBool_Parms AndAnd_BoolBool_Parms;
	AndAnd_BoolBool_Parms.A = A;
	AndAnd_BoolBool_Parms.B = B;

	this->ProcessEvent ( pFnAndAnd_BoolBool, &AndAnd_BoolBool_Parms, NULL );

	return AndAnd_BoolBool_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_BoolBool
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  A                              ( CPF_Parm )
// unsigned long                  B                              ( CPF_Parm )

bool UObject::NotEqual_BoolBool ( unsigned long A, unsigned long B )
{
	static UFunction* pFnNotEqual_BoolBool = NULL;

	if ( ! pFnNotEqual_BoolBool )
		pFnNotEqual_BoolBool = (UFunction*) UObject::GObjObjects()->Data[ 3026 ];

	UObject_execNotEqual_BoolBool_Parms NotEqual_BoolBool_Parms;
	NotEqual_BoolBool_Parms.A = A;
	NotEqual_BoolBool_Parms.B = B;

	this->ProcessEvent ( pFnNotEqual_BoolBool, &NotEqual_BoolBool_Parms, NULL );

	return NotEqual_BoolBool_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_BoolBool
// [0x00023401] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  A                              ( CPF_Parm )
// unsigned long                  B                              ( CPF_Parm )

bool UObject::EqualEqual_BoolBool ( unsigned long A, unsigned long B )
{
	static UFunction* pFnEqualEqual_BoolBool = NULL;

	if ( ! pFnEqualEqual_BoolBool )
		pFnEqualEqual_BoolBool = (UFunction*) UObject::GObjObjects()->Data[ 3030 ];

	UObject_execEqualEqual_BoolBool_Parms EqualEqual_BoolBool_Parms;
	EqualEqual_BoolBool_Parms.A = A;
	EqualEqual_BoolBool_Parms.B = B;

	this->ProcessEvent ( pFnEqualEqual_BoolBool, &EqualEqual_BoolBool_Parms, NULL );

	return EqualEqual_BoolBool_Parms.ReturnValue;
};

// Function Core.Object.Not_PreBool
// [0x00023411] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  A                              ( CPF_Parm )

bool UObject::Not_PreBool ( unsigned long A )
{
	static UFunction* pFnNot_PreBool = NULL;

	if ( ! pFnNot_PreBool )
		pFnNot_PreBool = (UFunction*) UObject::GObjObjects()->Data[ 3034 ];

	UObject_execNot_PreBool_Parms Not_PreBool_Parms;
	Not_PreBool_Parms.A = A;

	this->ProcessEvent ( pFnNot_PreBool, &Not_PreBool_Parms, NULL );

	return Not_PreBool_Parms.ReturnValue;
};

// Function Core.DistributionVector.GetVectorValue
// [0x00024400] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          F                              ( CPF_OptionalParm | CPF_Parm )
// int                            LastExtreme                    ( CPF_OptionalParm | CPF_Parm )

struct FVector UDistributionVector::GetVectorValue ( float F, int LastExtreme )
{
	static UFunction* pFnGetVectorValue = NULL;

	if ( ! pFnGetVectorValue )
		pFnGetVectorValue = (UFunction*) UObject::GObjObjects()->Data[ 3248 ];

	UDistributionVector_execGetVectorValue_Parms GetVectorValue_Parms;
	GetVectorValue_Parms.F = F;
	GetVectorValue_Parms.LastExtreme = LastExtreme;

	this->ProcessEvent ( pFnGetVectorValue, &GetVectorValue_Parms, NULL );

	return GetVectorValue_Parms.ReturnValue;
};

// Function Core.DistributionFloat.GetFloatValue
// [0x00024400] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          F                              ( CPF_OptionalParm | CPF_Parm )

float UDistributionFloat::GetFloatValue ( float F )
{
	static UFunction* pFnGetFloatValue = NULL;

	if ( ! pFnGetFloatValue )
		pFnGetFloatValue = (UFunction*) UObject::GObjObjects()->Data[ 3238 ];

	UDistributionFloat_execGetFloatValue_Parms GetFloatValue_Parms;
	GetFloatValue_Parms.F = F;

	this->ProcessEvent ( pFnGetFloatValue, &GetFloatValue_Parms, NULL );

	return GetFloatValue_Parms.ReturnValue;
};

// Function Core.HelpCommandlet.Main
// [0x00020C00] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Params                         ( CPF_Parm | CPF_NeedCtorLink )

int UHelpCommandlet::eventMain ( struct FString Params )
{
	static UFunction* pFnMain = NULL;

	if ( ! pFnMain )
		pFnMain = (UFunction*) UObject::GObjObjects()->Data[ 3252 ];

	UHelpCommandlet_eventMain_Parms Main_Parms;
	memcpy ( &Main_Parms.Params, &Params, 0xC );

	this->ProcessEvent ( pFnMain, &Main_Parms, NULL );

	return Main_Parms.ReturnValue;
};

// Function Core.Commandlet.Main
// [0x00020C00] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Params                         ( CPF_Parm | CPF_NeedCtorLink )

int UCommandlet::eventMain ( struct FString Params )
{
	static UFunction* pFnMain = NULL;

	if ( ! pFnMain )
		pFnMain = (UFunction*) UObject::GObjObjects()->Data[ 3230 ];

	UCommandlet_eventMain_Parms Main_Parms;
	memcpy ( &Main_Parms.Params, &Params, 0xC );

	this->ProcessEvent ( pFnMain, &Main_Parms, NULL );

	return Main_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif