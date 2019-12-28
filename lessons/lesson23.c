#include<stdio.h>

/*

	'0''1''2''3'
     '0' 1  2  3  4
     '1' 5  6  7  8
     '2' 9 10 11 12


*/
int main() {

int matris[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
int row,cow;
int row1,cow1;
int matris1[3][4];

printf("%d \n",matris[1][2]);

// row = satır, cow = sütun

for(row=0;row<3;row++) {

	for(cow=0;cow<4;cow++) {
		printf("%d ",matris[row][cow]);
	}
	printf("\n");
}
printf("Kendi Matrisini Yarat\n");
for(row1=0;row1<3;row1++) {

	for(cow1=0;cow1<4;cow1++) {
		printf("%d ninci satırın %d ninci elemanını giriniz: ",row1,cow1);
		scanf("%d",&matris1[row1][cow1]);
	}
	printf("\n");
}
for(row1=0;row1<3;row1++) {

	for(cow1=0;cow1<4;cow1++) {
		printf("%d ",matris1[row1][cow1]);
	}
	printf("\n");
}

printf("\n");
return 0;

}
