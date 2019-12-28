#include<stdio.h>

struct Student{

char isim[15];
char soyisim[15];
int numara;
int yas;




};







int main() {

struct Student Ahmet = {"Ahmet","Gedikli",135,23};
printf("%s,%s,%d,%d",Ahmet.isim,Ahmet.soyisim,Ahmet.numara,Ahmet.yas);








printf("\n");
return 0;
}
