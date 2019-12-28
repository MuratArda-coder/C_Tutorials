#include<stdio.h>

int main() {


/*

-x, x+y*z, (x/7)*y-(x*a+1), 3+4*7 bu gibi ifadeler birer aritmetik ifadelerdir

İŞLEM SIRASI:
Tekli Operatörler : (+), (-), (-x,+x) 1. öncelik kendi aralarında sağdan sola. 
İkili Operatörler : *, /, %, ^ 2. önceliktir kendi aralarında sağdan sola.
İkili Operatörler : +, - 3. önceliktir kendi aralarında sağdan sola.

parantez içi herzaman öncelikle yapılır. 
Matematikle Aynı !

*/

printf("%d",(2+5*3)-3+4%2);




getchar();

}


