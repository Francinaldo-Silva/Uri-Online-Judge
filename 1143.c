#include <stdio.h>

int main(){
   int N, i=1;
   int x=1, y=1, z=1;
   scanf("%i", &N);
   while(i<=N){
       printf("%i %i %i\n", x*i, y*i*i, z*i*i*i);
       
       i++;
   }
    return 0;
}