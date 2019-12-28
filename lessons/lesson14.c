#include<stdio.h>

int main() {

int i;
int n,fact=1;

i = 0;

while(i<10) {

i++;

printf("%d)Merhaba Dünya\n",i);
}

printf("faktöriyeli girilecek olan sayıyı giriniz: ");
scanf("%d",&n);

while (n!=0) {

fact = fact*n;
--n;
}

printf("sayının faktoriyeli = %d",fact);

printf("\n");

return 0;

}
