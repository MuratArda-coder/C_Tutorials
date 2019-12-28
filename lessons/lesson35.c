#include<stdio.h>
#include<string.h>


int benimstrlen(char *p) {


int uzunluk = 0;
int i=0;

for(;p[i]!='\0';i++) {

uzunluk++;

}

return uzunluk;




}











int main() {

char yazi[5] = "tura";
char *p = yazi;

printf("%s\n",yazi);
printf("%s\n",p);
printf("%s\n",p+1);
printf("%s\n",p+2);



printf("%jd",strlen(yazi));




printf("\n");
return 0;

}


