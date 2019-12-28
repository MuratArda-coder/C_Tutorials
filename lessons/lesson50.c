#include<stdio.h>

int main() {

char text[256];

FILE *filep;
filep = fopen("yaz.txt","a");


if (filep == NULL) {
	printf("Dosya oluşturulamadı");
}
else {
	printf("bir şey yazin: ");
	fgets(text,256,stdin);
	fputs(text,filep);
	printf("dosya yazildi");
	fclose(filep);
}







printf("\n");
return 0;
}
