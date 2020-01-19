#include <stdio.h>
 
int main() {
 
 int i = 1, y = 0;
 double x;
 
 
 while(i <= 6){
	 scanf("%lf", &x);
	 if (x > 0.0)
	 	y++;
	 i++;
 }
 printf("%d valores positivos\n", y);
 
    return 0;
}