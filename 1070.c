#include <stdio.h>
 
int main() {
 
 int b, impar = 0;
 
 scanf("%d", &b);
 
 while(impar <= 5){
	 if (b%2 != 0){
		 printf("%d\n",b);
		 impar++;
	 }
	b++;
 }

    return 0;
}