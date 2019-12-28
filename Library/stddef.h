 2.11 stddef.h

The stddef header defines several standard definitions. Many of these definitions also appear in other headers.

Macros:

    NULL
    offsetof();

Variables:

    typedef ptrdiff_t
    typedef size_t
    typedef wchar_t

2.11.1 Variables and Definitions

ptrdiff_t is the result of subtracting two pointers.
size_t is the unsigned integer result of the sizeof keyword.
wchar_t is an integer type of the size of a wide character constant.

NULL is the value of a null pointer constant.

offsetof(type, member-designator)

This results in a constant integer of type size_t which is the offset in bytes of a structure member from the beginning of the structure. The member is given by member-designator, and the name of the structure is given in type.

Example:

    #include<stddef.h>
    #include<stdio.h>

    int main(void)
    {
      struct user{
         char name[50];
         char alias[50];
         int level;
      };

      printf("level is the %d byte in the user structure.\n"),
              offsetof(struct user,level));
    }

The output should be:

level is the 100 byte in the user structure.

