#include<stdio.h>


int main() {

int a,b,c,d,e;
float aritmetik;

printf("5 tane sayı giriniz: ");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
aritmetik = (a+b+c+d+e)/5.0;
printf("Girdiğiniz sayilarin aritmetik ortalamasi %.2f dir",aritmetik);

printf("\n");

}
