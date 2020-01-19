#include <stdio.h>
 
int main() {

 int tempoGasto, VelMedia;
 float total;
 
 scanf("%d %d", &tempoGasto, &VelMedia);
 
 total = (tempoGasto*VelMedia)/12.0;
 
 printf("%.3f\n", total);
 
   return 0;
}