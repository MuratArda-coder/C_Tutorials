 2.8 setjmp.h

The setjmp header is used for controlling low-level calls and returns to and from functions.

Macros:

    setjmp(); 

Functions:

    longjmp(); 

Variables:

    typedef jmp_buf 

2.8.1 Variables and Definitions

The variable type jmp_buf is an array type used for holding information for setjmp and longjmp.

2.8.2 setjmp

Declaration:

    int setjmp(jmp_buf environment); 

Saves the environment into the variable environment. If a non-zero value is returned, then this indicates that the point in the sourcecode was reached by a longjmp. Otherwise zero is returned indicating the environment has been saved.

2.8.3 longjmp

Declaration:

    void longjmp(jmp_buf environment, int value); 

Causes the environment to be restored from a setjmp call where the environment variable had been saved. It causes execution to goto the setjmp location as if setjmp had returned the value of the variable value. The variable value cannot be zero. However, if zero is passed, then 1 is replaced. If the function where setjmp was called has terminated, then the results are undefined.

Example:

    #include<setjmp.h>
    #include<stdio.h>

    void some_function(jmp_buf);

    int main(void)
    {
      int value;
      jmp_buf environment_buffer;

      value=setjmp(environment_buffer);
      if(value!=0)
       {
        printf("Reached this point from a longjmp with value=%d.\n",value);
        exit(0);
       }
      printf("Calling function.\n");
      some_function(environment_buffer);
      return 0;
    }

    void some_function(jmp_buf env_buf)
    {
      longjmp(env_buf,5);
    }

The output from this program should be:

Calling function.
Reached this point from a longjmp with value=5.

