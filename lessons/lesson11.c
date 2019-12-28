#include<stdio.h>

int main() {

int vize1;
int vize2;
int final;
float genel;
float ortalama;
printf("1. vize notunuzu giriniz: ");
scanf("%d",&vize1);
printf("2. vize notunuzu giriniz: ");
scanf("%d",&vize2);
printf("final notunuzu giriniz: ");
scanf("%d",&final);
printf("üniversite ortalamasını giriniz: ");
scanf("%f",&genel);
ortalama = (vize1*3/10.0+vize2*3/10.0+final*4/10.0);
if (ortalama>=60) {
	printf("dersten geçtiniz");
}
else if(ortalama>=50) {
	printf("dersten büte kaldınız.\n");
	if(genel < 2.5) {
		printf("bütü geçsen bile dersi bir daha al");
	}
}
else {
	printf("dersten kaldınız");
}


printf("\n");

return 0;



}
