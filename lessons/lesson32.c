#include<stdio.h>

//Call By Value

void degerdegistir(int a,int b) {

int gecici = a;

a = b;
b = gecici;
printf("a:%d b:%d\n",a,b);

//int a ve int b fonksiyon çalıştığı sürece varlar sadece x ve y nin değeri atanmıştır.

}










int main() {

int x = 5;
int y = 10;

degerdegistir(x,y);

printf("x:%d y:%d\n",x,y);



printf("\n");
return 0;

}
