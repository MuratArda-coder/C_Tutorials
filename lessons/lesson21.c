#include<stdio.h>

int main() {

float sayilar[5];
int i;
float toplam = 0.0;

for(i=0;i<5;i++) { 

	printf("Bir sayi giriniz: ");
	scanf("%f",&sayilar[i]);

}
for(i=0;i<5;i++) {

	toplam+= sayilar[i];

}
printf("Girdiğiniz sayilarin aritmetik ortalaması %.2f dir",toplam/5);


printf("\n");
return 0;
}
