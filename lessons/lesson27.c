#include<stdio.h>

// Asal sayımı değil mi ?

int asal_mi(int sayi) {

int i;

for(i=2;i<sayi;i++) {
	if(sayi%i == 0) {
		return 0;
	}
}
return 1;
}





int main() {

int n;
printf("Sayi giriniz: ");
scanf("%d",&n);
if (n>0) {
	if(n == 1) {
		printf("Sayi asal sayi değildir");
	}
	else if(asal_mi(n) == 0) {
		printf("Sayi asal sayi değildir");
	}
	else {
		printf("Sayi asal sayidir");
	}
}
else {
	printf("Sayi asal sayi değildir");
}
printf("\n");
return 0;
}
