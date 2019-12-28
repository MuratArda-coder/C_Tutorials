#include<stdio.h>


struct Ogrenci{

char isim[20];
char soyisim[20];
int numara;




};




int main() {

struct Ogrenci ogrenciler[3];
int i;

for(i=0;i<3;i++) {
	printf("%d ninci ogrencinin bilgilerini giriniz:",i+1);
	scanf("%s %s %d",&*ogrenciler[i].isim,&*ogrenciler[i].soyisim,&ogrenciler[i].numara);
}
for(i=0;i<3;i++) {
	printf("%d ninci ogrencinin bilgileri: %s %s %d \n",i+1,ogrenciler[i].isim,ogrenciler[i].soyisim,ogrenciler[i].numara);
}




printf("\n");
return 0;
}
