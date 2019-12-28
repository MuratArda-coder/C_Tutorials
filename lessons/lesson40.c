#include<stdio.h>
#define Max 50

/*

İNSERTİON SORT

*/


void insertionsort(int arr[],int size) {

int i,j;
int element;

for(i=1;i<size;i++) {
	element = arr[i];
	j = i-1;
	while(j>=0 && arr[j]>element) {
		arr[j+1] = arr[j];
		j--;
	}
	arr[j+1] = element;
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
insertionsort(array,size);
for(i=0;i<size;i++) {
	printf("%d, ",array[i]);
}
printf("Hazır Array\n");
for(i=0;i<6;i++) {
	printf("%d, ",sayilar[i]);
}
printf("\n");
insertionsort(sayilar,6);
for(i=0;i<6;i++) {
	printf("%d, ",sayilar[i]);
}





printf("\n");
return 0;
}
