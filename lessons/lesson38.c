#include<stdio.h>
#define Max 50
/*

BUBBLE SORT

*/


void bubblesort(int arr[],int size) {
int temp;
int i,j;
for(i=0;i<size;i++) {
	for(j=1;j<size-i;j++) {
		if (arr[j-1]>arr[j]) {
			temp = arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
		}
	}
}

}


int main() {

int array[Max],size;
int i;
int sayilar[] = {3,4,12,1,34,16};
printf("kac Elemanlı: ");
scanf("%d",&size);
for(i=0;i<size;i++) {
	scanf("%d",&array[i]);
}
bubblesort(array,size);
for(i=0;i<size;i++) {
	printf("%d, ",array[i]);
}
printf("\n");
for(i=0;i<6;i++) {
	printf("%d, ",sayilar[i]);
}
printf("\n");
bubblesort(sayilar,6);
for(i=0;i<6;i++) {
	printf("%d, ",sayilar[i]);
}





printf("\n");
return 0;
}
