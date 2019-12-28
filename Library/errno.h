2.3 errno.h

The errno header is used as a general error handler.

Macros:

    EDOM
    ERANGE

Variables:

    errno 

2.3.1 EDOM

Declaration:

    #define EDOM some_value 

EDOM is an identifier macro declared with #define. Its value represents a domain error which is returned by some math functions when a domain error occurs.

2.3.2 ERANGE

Declaration:

    #define ERANGE some_value 

ERANGE is an identifier macro declared with #define. Its value represents a range error which is returned by some math functions when a range error occurs.

2.3.3 errno

Declaration:

    int errno; 

The errno variable has a value of zero at the beginning of the program. If an error occurs, then this variable is given the value of the error number. 
