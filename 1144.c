#include <stdio.h>
 
int main() {
 int i = 1, n, x=1, y=1, z=1;
 scanf("%d",&n);
 while(i<= n){
     printf("%d %d %d\n",x*i, y*i*i, z*i*i*i);
     printf("%d %d %d\n",x*i, y*i*i+1, z*i*i*i+1);
     i++;
 }
    return 0;
}