2.1 assert.h

The assert header is used for debugging purposes.

Macros:

    assert(); 

External References:

    NDEBUG 

2.1.1 assert

Declaration:

    void assert(int expression); 

The assert macro allows diagnostic information to be written to the standard error file.

If expression evaluates to 0 (false), then the expression, sourcecode filename, and line number are sent to the standard error, and then calls the abort function. If the identifier NDEBUG ("no debug") is defined with #define NDEBUG then the macro assert does nothing.

Common error outputting is in the form:

    Assertion failed: expression, file filename, line line-number 

Example:

    #include<assert.h>

    void open_record(char *record_name)
    {
      assert(record_name!=NULL);
      /* Rest of code */
    }

    int main(void)
    {
      open_record(NULL);
    }


