#include<stdio.h>

int main() {

int sayi,toplam=0,hane=0;
printf("sayi giriniz: ");
scanf("%d",&sayi);

do {

toplam += sayi%10;
hane++;
sayi = sayi/10;


}
while(sayi>0);

printf("Sayinin rakamlari toplami %d'dir\nSayi %d hanelidir.",toplam,hane);

printf("\n");
return 0;

}
