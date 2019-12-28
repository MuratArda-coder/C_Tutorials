#include<stdio.h>

int main() {

int a = 5,*ap;
float b = 3.2,*bp;
double c = 3.412,*cp;
char d = 'a',*dp;
int sayilar[5] = {1,2,3,4,5};
int *arrayp;


int i,j =

ap = &a;
bp = &b;
cp = &c;
dp = &d;
arrayp = &sayilar[1];

printf("%p adresindeki intin değeri %d dir. \n",ap,*ap);
printf("%p adresindeki floatin değeri %f dir. \n",bp,*bp);
printf("%p adresindeki doublenin değeri %If dir. \n",cp,*cp);
printf("%p adresindeki charin değeri %c dir. \n",dp,*dp);
printf("%p adresindeki sayilain elemanın değeri %d dir. \n",arrayp,*arrayp);




printf("\n");
return 0;

}


