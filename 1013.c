#include <stdio.h>
#include <stdlib.h>
 
int main() {
 int a,b,c,maiorAB,maior2;
 scanf("%d",&a);
 scanf("%d",&b);
 scanf("%d",&c);
 maiorAB = (a+b+abs(a-b))/2;
 maior2 = (maiorAB+c+abs(maiorAB-c))/2;
 printf("%d eh o maior\n",maior2);
  
    return 0;
}