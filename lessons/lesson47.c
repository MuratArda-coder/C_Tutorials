#include<stdio.h>
#include<string.h>

struct Ogrenci{

char isim[20];
char soyisim[20];
int numara;

};

struct Ogrenci *degerAl1(struct Ogrenci *p) {

strcpy(p->isim,"Mehmet");
strcpy(p->soyisim ,"Gencol");
p->numara = 455;




return p;
}

void degerAl2(struct Ogrenci *p) {

strcpy(p->isim,"Mehmet");
strcpy(p->soyisim ,"Gencol");
p->numara = 455;



}



void goster(struct Ogrenci *p) {

printf("Öğrencinin Bilgileri\n\tİsim bilgisi: %s\n\tSoyisim bilgisi: %s\n\tNumara bilgisi: %d\n", p->isim,p->soyisim,p->numara);

}


int main() {

struct Ogrenci *tut;

struct Ogrenci ogrenci1 = {"Ahmet","Gedikli",505};
goster(&ogrenci1);



tut = degerAl1(&ogrenci1);
printf("%s %s %d\n",tut->isim,tut->soyisim,tut->numara);

degerAl2(&ogrenci1);
printf("%s %s %d\n",ogrenci1.isim,ogrenci1.soyisim,ogrenci1.numara);

printf("\n");
return 0;
}
