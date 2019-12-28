#include<stdio.h>

int main() {


//FILE *filep = fopen("denemedosyasi1","w");
FILE *filep = fopen("denemedosyasi1","r");




if (filep == NULL) {
	printf("Dosya oluşturulamadı");
}
else {
	printf("Dosya oluşturuldu");
}







printf("\n");
return 0;

}


