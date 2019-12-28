#include<stdio.h>

//Call By Reference
//Call by Value nin tam tersi
//Parametre olarak pointer değişkeni kullanılır

void degerdegistir(int *a,int *b) {

int gecici = *a;

*a = *b;
*b = gecici;
printf("*a:%d *b:%d\n",*a,*b);




}



int main() {

int x = 5;
int y = 10;

degerdegistir(&x,&y);

printf("x:%d y:%d\n",x,y);






printf("\n");
return 0;

}
