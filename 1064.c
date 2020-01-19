#include <stdio.h>
 
int main() {
 
 int i = 1, y = 0;
 double x, media, soma = 0;
 
 
 while(i <= 6){
	 scanf("%lf", &x);
	 if (x > 0.0){
	 	y++;
  soma = soma + x;
	 }
	 i++;
 }
 media = soma/y;
 
 printf("%d valores positivos\n", y);
 printf("%.1lf\n", media);
 
    return 0;
}