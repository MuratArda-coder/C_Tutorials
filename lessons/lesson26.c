#include<stdio.h>


int topla(int sayi1,int sayi2) {

return(sayi1+sayi2);
}

// dönüş değeri intiger olduğu için int le fonksiyon yapıldı

int faktoriyel(int sayi) {

int fact = 1;
// for da sayi yazmaya gerek yok zaten değeri belli
for(sayi;sayi>0;sayi--) {
	fact *= sayi;
}
return (fact);

}

int main() {

int sayi1;
int sayi2;
int toplam;
int n;

printf("1. sayiyi giriniz:");
scanf("%d",&sayi1);
printf("2. sayiyi giriniz:");
scanf("%d",&sayi2);


printf("Toplam: %d\n",topla(sayi1,sayi2));
toplam = topla(sayi1,sayi2);
printf("Toplam: %d",toplam);

printf("Faktoriyeli girilecek olan sayiyi giriniz: ");
scanf("%d",&n);
printf("faktoriyel: %d",faktoriyel(n));

printf("\n");
return 0;
// void fonksiyonun değerini başka değere eşitleyemezsin
}
