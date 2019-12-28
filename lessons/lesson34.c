#include<stdio.h>

int max(int *a,int uzunluk) {

int maks = a[0];
int i;

for(i=1;i<uzunluk;i++) {
	if(a[i]>maks) {
		maks = a[i];
	}
}

return maks;

}





int main() {

int sayilar[5] = {1,2,3,4,5};
int sayilar1[5] = {3,4,42,100,1};
int maks = max(sayilar1,5);


int *p = sayilar;
// Arraylerin başlangıç adresini direk arrayin ismini vererek belirtebiliriz
printf("%p\n",p);
printf("%p\n",p+1);
// +4 fark fvar dikkat edilen ;)
printf("%p\n",p+2);



printf("%d\n",*p);
printf("%d\n",*(p+1) );
printf("%d\n",*(p+2));
printf("%d\n",*(p+3));
printf("%d\n",*(p+4));
printf("\n");
printf("%d\n",p[0]);
printf("%d\n",p[1]);
printf("%d\n",p[2]);
printf("%d\n",p[3]);
printf("%d\n",p[4]);

/*
(p+1) -----> p[1]
		sayilar[1]

*/

printf("Sayilar1 dizisinin en büyük elemani %d dir",maks);






printf("\n");
return 0;

}








