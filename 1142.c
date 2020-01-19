#include <stdio.h>

int main(){
   int N, i=1;
   int x=1, y=2, z=3;
   scanf("%i", &N);
   while(i<=N){
       printf("%i %i %i PUM\n", x, y, z);
       x+=4;
       y+=4;
       z+=4;
       i++;
   }
    return 0;
}