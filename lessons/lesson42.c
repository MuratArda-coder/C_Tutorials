#include<stdio.h>

struct Araba {

int tekerleksayisi;
int vitessayisi;
int model;
float motor;
int beygir;




};



int main() {

struct Araba araba1 = {0};
struct Araba araba2 = {4,6,2011,3.0,300};
struct Araba araba3;

araba3 = araba2;

printf("%d %d %d %.2f %d \n",araba1.tekerleksayisi,araba1.vitessayisi,araba1.model,araba1.motor,araba1.beygir);
printf("%d %d %d %.2f %d\n",araba2.tekerleksayisi,araba2.vitessayisi,araba2.model,araba2.motor,araba2.beygir);
printf("%d %d %d %.2f %d\n",araba3.tekerleksayisi,araba3.vitessayisi,araba3.model,araba3.motor,araba3.beygir);




printf("\n");
return 0;
}
