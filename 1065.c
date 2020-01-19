#include <stdio.h>
 
int main() {
 
 int i = 1, p = 0;
 int v;
 
 while(i <= 5) {
 	scanf("%d", &v);

 	if(v%2 == 0){
		 p++;
	 }
	 i++;
 }
  printf("%d valores pares\n", p);
 
    return 0;
}