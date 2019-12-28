#include<stdio.h>

int main() {

/*

ATAMALAR, ARTTIRMA, AZALTMA İŞLEMLERİ

değişken(variable) = ifade(expression)
int x = 15;
int y = 14;
x = y;
y = x;
örnek
int x = 6`
int y = 7;
x = y; (y nin değeri x e atanıyor. x = 7, y = 7)
y = x+1; (x+1 hesaplanıyor(8) ve y ye atılıyor. x = 7, y = y = 8)

x = x+1
atama durumunda ilk başta sağ taraftaki kısım hesaplanır. sonra atama yapılır.

x+1 = 2; (Bu tür şeyler C de geçerli değildir. Sol taraftaki değer saf bir değişken olmalı. x gibi y gibi)

ARTTIRMA, AZALTMA İŞLEMLERİ
i=i+1;
bunun eşiti aynı zamanda i+=1; (i = i+1 ile aynı şey)
(değişken işlem=ifade)
C de kolay bir yöntem var.
üstteki işlem i yi bir arttırır.
i yi arttırmak C de i++ ve ++i gibi şeyler bulunuyor.

postfix : i++;
prefix : ++i;
arasındaki fark:
int i = 4;

printf("%d", i++); -----> ekrana 4 değerini bastırır.
Çünkü bu postfix halinde (i++) i nin arttırılmadan önceki değerini (4) kullanıyor.Bir sonraki satırda arttırıyor.

printf("%d"i++i); -----> ekrana 5 değerini bastırır.
çünkü bu prefix halinde (++i) i nin artmış değerini kullanıyor(5) bir sonraki satırda arttırıyor.

i-- ve --i aynı şekilde çalışıyor.

(değişken işlem=ifade) biraz daha açarsak,

i= i % a (==) i%=a
i= i * (a+1) (==) i*=a+1

İÇ İÇE AKTARMALAR
i=j=k=0
Bu şekilde bir atama varsa en sağdan başlayarak k ya 0 atılıyor. daha sonra j ye k nın değeri atılıyor (0). j =0 daha sonra i ye j nin değeri atılıyor. i = 0 oldu.

i = 0;
j = 0;
k = 0;
bu şekilde atamalarda en sağdan başlayarak işlem yapılır.(Ancak programcılar bunun karmaşık versiyonlarını tercih etmezler.)

*/

int x = 5;
int y = 7;
int a = 2;

x = y;
printf("x = %d y = %d\n",x,y);
y = x+a+1;
printf("x = %d y = %d\n",x,y);

x=4;
y=5;
a=6;

printf("x:%d y:%d a:%d\n", --x,++y,a++);
printf("x:%d y:%d a:%d\n", x,y,a);
printf("x:%d y:%d a:%d\n", x--,--y,a--);
printf("x:%d y:%d a:%d\n", x,y,a);

x += a+1;
printf("x = %d\n",x);

x = y =a+4;
printf("x:%d y:%d a:%d\n", x,y,a);



getchar();

}


