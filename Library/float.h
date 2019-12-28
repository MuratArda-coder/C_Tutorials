2.4 float.h

The float header defines the minimum and maximum limits of floating-point number values.

2.4.1 Defined Values

A floating-point number is defined in the following manner:

    sign value E exponent 

Where sign is plus or minus, value is the value of the number, and exponent is the value of the exponent.

The following values are defined with the #define directive. These values are implementation-specific, but may not be any lower than what is given here. Note that in all instances FLT refers to type float, DBL refers to double, and LDBL refers to long double.

FLT_ROUNDS
		Defines the way floating-point numbers are rounded.

	-1	indeterminable
	0	toward zero
	1	to nearest
	2	toward positive infinity
	3	toward negative infinity
FLT_RADIX 2
	Defines the base (radix) representation of the exponent (i.e. base-2 is binary, base-10 is the normal decimal representation, base-16 is Hex).
FLT_MANT_DIG
DBL_MANT_DIG
LDBL_MANT_DIG
	Defines the number of digits in the number (in the FLT_RADIX base).
FLT_DIG 6
DBL_DIG 10
LDBL_DIG 10
	The maximum number decimal digits (base-10) that can be represented without change after rounding.
FLT_MIN_EXP
DBL_MIN_EXP
LDBL_MIN_EXP
	The minimum negative integer value for an exponent in base FLT_RADIX.
FLT_MIN_10_EXP -37
DBL_MIN_10_EXP -37
LDBL_MIN_10_EXP -37
	The minimum negative integer value for an exponent in base 10.
FLT_MAX_EXP
DBL_MAX_EXP
LDBL_MAX_EXP
	The maximum integer value for an exponent in base FLT_RADIX.
FLT_MAX_10_EXP +37
DBL_MAX_10_EXP +37
LDBL_MAX_10_EXP +37
	The maximum integer value for an exponent in base 10.
FLT_MAX 1E+37
DBL_MAX 1E+37
LDBL_MAX 1E+37
	Maximum finite floating-point value.
FLT_EPSILON 1E-5
DBL_EPSILON 1E-9
LDBL_EPSILON 1E-9
	Least significant digit representable.
FLT_MIN 1E-37
DBL_MIN 1E-37
LDBL_MIN 1E-37
	Minimum floating-point value. 
