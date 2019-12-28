#include<stdio.h>

int main() {

/*

TİP DÖNÜŞÜMLERİ
Otomatik Dönüşümler
Örneğin bir aritmetik ifadede bütün tipler aynı değildir. Mesela 3.2/2 dediğimiz zaman float ve in beraber oluyor. Burda sonuç ne olcaktır. 1.6 çünkü otomatik bir dönüşüm yapılıyor.(2 sayısı floata çevrilip 2.0 oluyor aslında).

Otomatik Dönüşüm Çizelgesi
char
short ----> int ----> float ----> double ----> long
						double
mesela in ve double beraberse herkes double la otomatik olarak çevrilir(sağa doğru öncelik artıyor)

Manuel Dönüşümler
Otomatik dönüşümlerin olmadığı yerlerde kendimiz yapabiliriz.
3.2 sayısını int yapmak istersek ----> (int)3.2 ----> 3 sonucunu verir.(kesirli kısmı atar.)
	
*/

int x = 3;
float y = 0.1;
printf("%f\n",x/y);

printf("%f\n",2*4.2+4%2);
printf("%f\n",12.5/2);
printf("%d\n",(int)3.2);
printf("%f\n",(float)3);
printf("%.2f\n",(float)3);



}
