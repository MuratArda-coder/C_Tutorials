#include<stdio.h>


struct Ogrenci{

char isim[20];
char soyisim[20];
int numara;

};

void goster(struct Ogrenci a) {

printf("Ogrencinin bilgileri: %s %s %d\n",a.isim,a.soyisim,a.numara);

}

struct Ogrenci degerAl() {

	struct Ogrenci yeni;
	printf("Bilgileri Giriniz: ");
	scanf("%s %s %d",&yeni.isim,&yeni.soyisim,&yeni.numara);

	return yeni;
}






int main() {

struct Ogrenci ogrenci1 = {"Murat Arda","Önsü",1665};
struct Ogrenci ogrenci2 = degerAl();


goster(ogrenci1);
goster(ogrenci2);


printf("\n");
return 0;
}
