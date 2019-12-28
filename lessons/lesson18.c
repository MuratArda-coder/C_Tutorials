#include<stdio.h>

int main() {

int toplam =0;
int i;
int sayi;

for(i = 0; 1;i++) {

	printf("sayiyi giriniz: (cikmak için -1 e basiniz): ");
	scanf("%d",&sayi);


	if (sayi == -1) {
		break;
	
	}

	toplam +=sayi;

}

printf("%d",toplam);



printf("\n");

return 0;
}
