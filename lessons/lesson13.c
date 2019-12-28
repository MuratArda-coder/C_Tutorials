#include<stdio.h>
#include<math.h>

int main() {

int islem,A,B;
float sonuc;

printf("işlemler:\n1)toplama\n2)çıkarma\n3)çarpma\n4)bölme\n5)bölümünden kalanı bulma\n");
scanf("%d",&islem);

switch(islem) {

	case 1:
		printf("ilk sayıyı giriniz: ");
		scanf("%d",&A);
		printf("ikinci sayıyı giriniz: ");
		scanf("%d",&B);
		sonuc = A+B;
		printf("%.2f",sonuc);
		break;
	case 2:
		printf("ilk sayıyı giriniz: ");
		scanf("%d",&A);
		printf("ikinci sayıyı giriniz: ");
		scanf("%d",&B);
		sonuc = A-B;
		printf("%.2f",sonuc);
		break;
	case 3:
		printf("ilk sayıyı giriniz: ");
		scanf("%d",&A);
		printf("ikinci sayıyı giriniz: ");
		scanf("%d",&B);
		sonuc = A*B;
		printf("%.2f",sonuc);
		break;
	case 4:
		printf("ilk sayıyı giriniz: ");
		scanf("%d",&A);
		printf("ikinci sayıyı giriniz: ");
		scanf("%d",&B);
		sonuc = A/B;
		printf("%.2f",sonuc);
		break;
	case 5:
		printf("ilk sayıyı giriniz: ");
		scanf("%d",&A);
		printf("ikinci sayıyı giriniz: ");
		scanf("%d",&B);
		sonuc = A%B;
		printf("%.2f",sonuc);
		break;
	default:
		printf("yanlis islem");
		break;
}

printf("\n");

return 0;

}
