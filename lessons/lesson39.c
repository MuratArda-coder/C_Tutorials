#include<stdio.h>
#define Max 50

/*

SELECTİON SORT

*/


void selectionsort(int arr[],int size) {
int i,j;
int minimumindex;
int temp;

for(i=0;i<size;i++) {
	minimumindex = i; 
	for(j=i+1;j<size;j++) {
		if(arr[j]<arr[minimumindex]) {
			minimumindex = j;
		}
	temp = arr[i];
	arr[i] = arr[minimumindex];
	arr[minimumindex] = temp;
	
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
selectionsort(array,size);
for(i=0;i<size;i++) {
	printf("%d, ",array[i]);
}
printf("Hazır Array\n");
for(i=0;i<6;i++) {
	printf("%d, ",sayilar[i]);
}
printf("\n");
selectionsort(sayilar,6);
for(i=0;i<6;i++) {
	printf("%d, ",sayilar[i]);
}





printf("\n");
return 0;
}
