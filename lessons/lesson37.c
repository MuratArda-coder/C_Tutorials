#include<stdio.h>

char *gunismi(char *gundizisi[],int uzunluk,int hangigun) {

if (hangigun>=1 && hangigun<=7) {
	return gundizisi[hangigun-1];
}
else {
	return NULL;
}



}











int main() {

char *gunler[7] = {"pazartesi","sali","carsamba","perşembe","cuma","cumartesi","pazar"};
char *p= gunismi(gunler,7,5);
//char pointerlatı tutan array ler

printf("%s\n",gunler[0]);

if (p == NULL) {
	printf("NULL");
}
else {
	printf("%s",p);
}






printf("\n");
return 0;
}
