#include<stdio.h>

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
printf("%d",x); ------> ekrana 5 değerini b2:11 / 14:46



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

/*

x+y -----> x ile y i toplar.
x-y -----> x den y yi çıkarır.
x*y -----> x ile y i çarpar.
x/y -----> x ile y yi böler.
x^y -----> x in y üssünü alır.

x%y -----> x ile y nin bölümünden kalanı verir.

+x -----> x sayısını + ile çarpar (sonuç değişmez yani)
-x -----> x sayısını eksi ile çarpar (x in işareti değişir yani)

*/

/*

-x, x+y*z, (x/7)*y-(x*a+1), 3+4*7 bu gibi ifadeler birer aritmetik ifadelerdir

İŞLEM SIRASI:
Tekli Operatörler : (+), (-), (-x,+x) 1. öncelik kendi aralarında sağdan sola. 
İkili Operatörler : *, /, %, ^ 2. önceliktir kendi aralarında sağdan sola.
İkili Operatörler : +, - 3. önceliktir kendi aralarında sağdan sola.

parantez içi herzaman öncelikle yapılır. 
Matematikle Aynı !

*/

/*

ATAMALAR, ARTTIRMA, AZALTMA İŞLEMLERİ

değişken(variable) = ifade(expression)2:11 / 14:46

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
arasındaki fark:2:11 / 14:46

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

/*

GİRİŞ ÇIKIŞ FONKSİYONLARI
printf ve scanf
float bir değer olan x i ekrana bastırmak için printf("%f",x); yapıyoruz. Benzer bir şekilde, folat olan bir x tanımlayıp daha sonra bu değeri kullanıcıdan almak istersekte scanf("%f",&x); şeklinde yazıyoruz "&" işareti x e kullanıcıdan gelen değeri atadığımızı gösteriyor. Diğer for format belirliyicileri printf ile aynıdır.

*/

/*

bool veritipi - true(doğru) ya da false(yanlış)

*/

/*

BOOL VERİTİPİ (true yada false)

Mantıksal ifadeler doğru ise 	true
mantıksal ifadeler yanlış ise	false
Aynı zamanda 0 olmayan bütün sayılar (1,123,4234 vs.) true değer sayılır
0 ise false değerdir.

Mantıksal Operatörler
< ------> küçük müdür a<b şeklinde
> -------> büyük müdür a>b şeklinde
<= ------> küçük yada eşit midir a <= b şeklinde
>= ------> büyük yada eşit midir a >=b şeklinde
== ------> eşit midir a==b şeklinde
!= ------> eşit değil midir a!= şeklinde

Mantıksal Bağlaçlar 
Bir çok mantıksal ifadeyi işlemi bağlayan araçlardır.

&& ----> mantıksal and("ve") bağlacı. true&&true&&false gibi bağlanabilirler. && olduğu cümlenin true olması için bütün ifadenin true olması gerekir. Eğer bu cümlenin içinde bir tane bile false varsa bu mantıksal ifade false olur.

|| -----> mantıksal or ("ya da") bağlacı. true||true||false gibi bağlanabilir. || olduğu cümlenin true olabilmesi için en az bir ifadenin true olması gerekir.
Eğer hepsi false sa o ifde false olur.

! ----> mantıksal nor ("değili") operatörü. true olan bir ifadeyi false yapar. false olan ifadeyi true yapar

şartlı cümleler

a = x>y ? x:y;

*/

// stdio.h ----> standart input output kütüphanesi //
// #define -sabit- -değeri- bir sabit değer atamak istediğimizde kullanırız//
//belirsizlikler int mainin hemen altına yazılır en azından C de//
/* 

#include<math.h> matematik kütüphanesi
bu kütüphane kullandıysan kodu terminalden "gcc kökbulma.c -lm" diye çağırmalısın.
fazladan "-lm" komutu 
gcc isim.c -o isim ----> farklı isimde kaydederek derlemek
*/


/*

int -----> %d
unsigned int -----> %u
long -----> %Id
char -----> %c
float -----> %f
double -----> %If
char[] -----> %s
pointer adresi -----> %p,%u

*/

/*
C de Kütüphaneler

stdio.h -----> Standart giriş/çıkış fonksiyonları
conio.h -----> DOS destekli giriş/çıkış fonksiyonları
math.h -----> Matematiksel fonksiyonlar
stdlib.h -----> Dönüşüm sıralam fonksiyonları
graphics.h -----> Grafik fonksiyonları
dos.h -----> DOS fonksiyonları
ctype.h -----> Karakter dönüşüm ve sınıflandırma
string.h ----->Alfa sayısal

*/

// void işlemleri dış dünyaya dönmez,arreyin içindeki karakterleri değiştirir
// void fonksiyonun değerini başka değere eşitleyemezsin

/*

char  isim[] = "murat";

'm'
'u'
'r'
'a'
't'
'\0' -----> c bunu karakter dizisinin bittiğini anlaması için kendiliğinden koyar. karakter dizisinin uzunluğu kendiliğinden belirlenir.

*/

/*

POİNTER lar
-Gösterici
-Bellek yerini gösterir
-RAM tasarlanma şekilleri aynıdır
	BELLEK
	-1 byte kutucuklar blunur
	-Bir sürü kutucuklar
	-Adresler
-Adres bilgisi tutan değişkenlerdir
	ADRES
	-Bellek kutularının başlangıç yeri
int i = 5;

int *p = &i;


pointer int değerini tutacaksa pointer int türünde olacaktır
* işareti pointer olduğunu belirtir
p pointer i i'nin terini tutar 
pointer 2 byte olmalı


int j;
scanf("%d",&j);

& -----> j nin adres bilgisini verir
int -----> 4 byte

& -----> Değişkenin adres bilgisini verir
* -----> Adresteki değeri verir 

*/

/*
(pointer la olması)
FILE *filep = fopen("dosya_adı","Mod");
Modlar:
w -----> Dosya oluşturur,o isimde dosya varsa siler boş dosya oluşturur.
r -----> Dosyaları okumamızı sağlar.dosya yoksa NULL değer verir.
a -----> Dosyanın içindeki değerleri kaybetmeden değiştirmemizi sağlar.
w+ -----> Yazma ve Okuma
r+
a+

(Daha Çok var internetten bakılabilr)

fopen("dosya_adi","Mod"); ----->
fclose("filep"); -----> Var olan dosyayı kapatır.
fputc(character,file); -----> Karakteri dosyaya yazdırır.
fgets("hangi arrayin içine yazacağı","alacağı en fazla karakter",stdi);

*/













 
