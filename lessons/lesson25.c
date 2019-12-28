#include<stdio.h>

void hatayibas(int hata) {

printf("Hata Kodu %d",hata);

}

// void işlemleri dış dünyaya dönmez

int main() {

int sayi;
printf("Pozitif sayi giriniz: ");
scanf("%d",&sayi);
if(sayi<0) {
	hatayibas(404);
}
else {
	printf("Mükemmel");
}

printf("\n");
return 0;
}
