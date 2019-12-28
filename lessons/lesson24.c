#include<stdio.h>

/*

matris fonksiyonu yaratıp teker teker sütunların toplamını bastıracak bir program yaratma

*/


int main() {

int matris[3][4];
int r,c;
int sum = 0;

for(r=0;r<3;r++){
	for(c=0;c<4;c++) {
		printf("%d ninci satırın %d ninci elemanını giriniz: ",r,c);
		scanf("%d",&matris[r][c]);
	}
	printf("\n");	
}
for(r=0;r<3;r++){
	for(c=0;c<4;c++) {
		printf("%d ",matris[r][c]);
	}
	printf("\n");	
}

printf("Simdi sütunlarin Toplamını Alalım \n");

for(c=0;c<4;c++) {
	for(r=0;r<3;r++) {
		sum += matris[r][c];	
	}
	printf("%d ninci sütunlar toplamı %d dir \n",c,sum);
	sum = 0;
}





printf("\n");
return 0;

}
