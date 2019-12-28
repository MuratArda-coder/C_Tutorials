#include<stdio.h>
#include<string.h>

int uzunlukdon(char name[]) {

int uzunluk = 0;
int i;

for(i=0; name[i] != '\0' ;i++) {
	uzunluk++;

}

return uzunluk;
}

void terscevir(char dizi[]) {

int i,uzunluk1,gecici;
uzunluk1 = strlen(dizi);
for(i=0;i<uzunluk1/2;i++) {

gecici = dizi[i];
dizi[i] = dizi[uzunluk1-1-i];
dizi[uzunluk1-1-i] = gecici;

}

}


int main() {

char isim[] = "Mustafa";
char dizi1[200];

printf("%d \n",uzunlukdon(isim));
//string.h fonksiyonu kütüphanesinde zaten hazırda olanı var:
printf("%jd \n",strlen(isim));


printf("Kelime Giriniz:");
scanf("%s",dizi1);
terscevir(dizi1);
printf("%s",dizi1);


printf("\n");
return 0;
}
