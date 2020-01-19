#include <stdio.h>
 
int main() {
 
 float valor1, valor2, valor3;
 
 scanf ("%f %f %f", &valor1, &valor2, &valor3);
 
 if (valor1+valor2 > valor3 && valor2+valor3 > valor1 && valor1+valor3 > valor2){
 	 printf("Perimetro = %.1f\n", valor1+valor2+valor3);
 }
 else printf("Area = %.1f\n", ((valor1 + valor2)*valor3)/2);
  
    return 0;
}