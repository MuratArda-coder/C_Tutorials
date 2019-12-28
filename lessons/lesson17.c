#include<stdio.h>
#include<stdlib.h>

/*

Fibonachi serisi
1,1,2,3,5,8,13,21,....

*/

int main() {

int ilksayi=1;
int ikincisayi=1;
int i;

printf("%d, %d, ",ilksayi,ikincisayi);

for(i=0;i<12;i++) {
	int temp = ikincisayi;
	ikincisayi += ilksayi;
	ilksayi = temp;
	printf("%d, ",ikincisayi);

}


printf("\n");
return 0;
}
