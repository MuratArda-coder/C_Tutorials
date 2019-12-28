#include<stdio.h>
#include<string.h>

int main() {

char veri[25] = "yazilim bilimi";
int uzunluk = strlen(veri);
int i;

FILE *filep = fopen("yazilimbilimi.txt","w");

if (filep == NULL) {
	printf("Dosya oluşturulamadı");
}
else {
	for(i=0;i<uzunluk;i++) {
	fputc(veri[i],filep);
	printf("Yazilan karakter %c\n",veri[i]);
	}
	printf("Dosya başarıyla yazdırıldı");
}







printf("\n");
return 0;
}
