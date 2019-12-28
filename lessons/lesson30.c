#include<stdio.h>

int main() {

int i = 5;

int *p = &i;

/*

pointer int değerini tutacaksa pointer int türünde olacaktır
* işareti pointer olduğunu belirtir
p pointer i i'nin terini tutar 
pointer 2 byte olmalı

*/

printf("%p \n",p);
printf("%u \n",p);
printf("%d",*p);


printf("\n");
return 0;

}
