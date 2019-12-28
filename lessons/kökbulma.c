#include<stdio.h>
#include<math.h>

/*

ax^2 + bx + c
gcc kökbulma.c -lm
*/

int main() {


int a,b,c;
float x1,x2;
float delta;

printf("ax^2 + bx + c\n");

printf("Denklemin a sını giriniz: ");
scanf("%d",&a);
printf("Denklemin b sını giriniz: ");
scanf("%d",&b);
printf("Denklemin c sını giriniz: ");
scanf("%d",&c);

delta = b*b-4*a*c;
x1 = (-b+(sqrt(delta)))/2*a;
x2 = (-b-(sqrt(delta)))/2*a;



printf("denklemin 1. kökü %.2f dir\n",x1);
printf("denklemin 2. kökü %.2f dir\n",x2);


printf("\n");

return 0;

}
