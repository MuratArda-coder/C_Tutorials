#include<stdio.h>

int main() {

// TEk yorum satırı. tek yorumlar için compiler(derleyici) yorumlar arasına yazdığımız şeyleri görmezden gelir) //

/*


çoklu yorum satırı
buranın arasını dilediğiniz gibi yorumlarla doldurabilirsiniz

*/

/*

DEĞİŞKENLER
Temel değişkenlerimiz: char,int,float,double,short,long

Char veritipi: 1 byte(8 bit) , 0 dan 255 (2^8) e kadar değer alabilir.her bir ASCII tablosundaki bir değere eşdeğerdir.

İnt veritipi: 4 byte (32 bit) , -2^16 dan +2^16 ya kadar değer alır. tamsayıdır. -2 32 45 gibi değerler alır.


Short veritipi (short int): 2 byte (16 bit) , -2^8 den +2^16 kadar değer alır. int ile aynıdır.sadece alacağı değer aralığı farklıdır.

Long veritipi (long int): 8 byte (64 bit) , -2^32 den +2^32 kadar değer alır. int ile aynıdır.sadece alacağı değer aralığı farklıdır. Çok büyük sayılar için kullanılabilir.

Float veritipi: Kesirli sayıları tutmak için kullanılır. Byte ı işletim sistemine göre değişebilir.  2.13 -4.2 gibi sayıları ifade etmek için kullanılır.

Double veritipi: Aynı float gibi kesirli sayıları ifade etmek için kullanılır. Ancak floattan daha kapsamlıdır. 2.123456452421345 gibi değerler için idealdir.

Ancak programcılar genelde sadece char,int,float ve double kullanırlar.veri tipleri hakkında daha fazla şey öğrenmek için internetten araştırabilirsiniz

*/

/*

DEŞİKEN TANIMLAMA:
Veritipi Deişkenadı;

*/

/*

FORMAT BELİRLEYİCİLER:
%d ------>  int değerler için printf de format belirleyici olarak kullanılır.
örnek:
int x = 5;
printf("%d",x); ------> ekrana 5 değerini basar.

%f ------> float ve double  için format belirleyici olarak kullanılır.
örnek:
float f = 3.14;
double d = 4.21;
printf("%f %d",f,d); ------> ekrana sırasıyla 3.14 4.21 değerlerini basar.

%c ------> karakterler için kullanılır.
örnek:
char c1 = 'c';
printf("%c",c1); ------> ekrana c basar.
printf("%d",c1); ------> ekrana ASCII tablosunda c nin değerini basar.

%s ------> karakter dizileri için kullanılır.("Cprogramlama")
örnek:
printf("%s","Cprogramlama"); ------> ekrana Cprogramlama yazar.

*/


int a = 42;
char b1 = 66;
char c1 = 'g';
float t = 4.234;
double d1 = 5.783212;

printf("%d \n%c \n%d \n%f \n%f \n%s \n",a,b1,c1,t,d1,"C languages");
printf("important : %.2f %12d\n",t,a);
printf("Char examples: \t");
printf("%c %d \n",b1,b1);
printf("%c %d \n",c1,c1);


printf("%ld byte\n",sizeof(char));
printf("%ld byte\n",sizeof(int));
printf("%ld byte\n",sizeof(short int));
printf("%ld byte\n",sizeof(long int));
printf("%ld byte\n",sizeof(float));
printf("%ld byte\n",sizeof(double));


getchar();

}
