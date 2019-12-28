#include<stdio.h>


/*

bool veritipi - true(doğru) ya da false(yanlış)

*/


int main() {

int note;

printf("Notunuzu giriniz: ");
scanf("%d",&note);

if(note>60) {

printf("Dersten geçtiniz");


}
else { 

printf("Dersten kaldınız");

}



printf("\n");

}
