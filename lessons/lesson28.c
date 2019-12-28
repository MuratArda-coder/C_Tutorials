#include<stdio.h>

int carp(int kume[],int size) {

int i=0;
int carpim=1;
for(;i<size;i++) {
	carpim *= kume[i];
}

return(carpim);
}
//cow belirtilmek zorundadır
void bastir(int matrisimiz[][4],int size_row) {
int r,c;
for(r=0;r<3;r++) {
	for(c=0;c<4;c++) {
		printf("%d ",matrisimiz[r][c]);
	}
	printf("\n");
}
}


int main() {

int sayilar[] = {1,2,3,4,5};
int matris[3][4];
int r,c;

printf("Sayilarin carpimi: %d\n",carp(sayilar,5));

printf("ÇOK BOYUTLU ARREYLER\n");
for(r=0;r<3;r++) {
	for(c=0;c<4;c++) {
		printf("%d ninci satirin %d ninci elemanini giriniz: ",r,c);
		scanf("%d",&matris[r][c]);
	}
}
bastir(matris,3);

printf("\n");
return 0;
}
