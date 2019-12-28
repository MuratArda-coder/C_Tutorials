#include<stdio.h>
#define PI 3.14

int main() {
//belirsizlikler int mainin hemen altına yazılır en azından C de//
int yaricap;
float hacim;

/*

GİRİŞ ÇIKIŞ FONKSİYONLARI
printf ve scanf
float bir değer olan x i ekrana bastırmak için printf("%f",x); yapıyoruz. Benzer bir şekilde, folat olan bir x tanımlayıp daha sonra bu değeri kullanıcıdan almak istersekte scanf("%f",&x); şeklinde yazıyoruz "&" işareti x e kullanıcıdan gelen değeri atadığımızı gösteriyor. Diğer for format belirliyicileri printf ile aynıdır.

*/

// stdio.h ----> standart input output kütüphanesi //
// #define -sabit- -değeri- bir sabit değer atamak istediğimizde kullanırız//


printf("kürenini yaricapini giriniz: ");
scanf("%d",&yaricap);

hacim = (4/3.0)*PI*yaricap*yaricap*yaricap;

printf("kürenin hacmi %f dir",hacim);

printf("\n");

}
