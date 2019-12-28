#include<stdio.h>

int main() {

int i;
int j;

for(i=0;i<10;i++){

	printf("%d\n",i);

}

for(i=0,j=1;i<10 && j<5 ; i++,j++){


	printf("i: %d j: %d\n",i,j);

}
printf("MORE\n");
for(i=0;i<3;i++) {
	for(j=0;j<3;j++) {
		printf("i: %d j: %d\n",i,j);
	
	}


}
	


printf("\n");
return 0;
}
