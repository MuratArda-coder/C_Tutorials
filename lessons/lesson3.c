#include<stdio.h>

int main() {
/*

x+y -----> x ile y i toplar.
x-y -----> x den y yi çıkarır.
x*y -----> x ile y i çarpar.
x/y -----> x ile y yi böler.
x^y -----> x in y üssünü alır.

x%y -----> x ile y nin bölümünden kalanı verir.

+x -----> x sayısını + ile çarpar (sonuç değişmez yani)
-x -----> x sayısını eksi ile çarpar (x in işareti değişir yani)

*/

int x1 = 1;
int x2 = -2;

printf("%d\n",12+9);
printf("%d\n",12-9);
printf("%d\n",12*9);
printf("%d\n",12/9);
printf("%d\n",12%9);
printf("%d\n",12+9);
printf("%d\n",12^9);

printf("%f\n",12.1+9.34);
printf("%.3f\n",12.132/9.34);

printf("%d",x1+x2);

getchar();

}
