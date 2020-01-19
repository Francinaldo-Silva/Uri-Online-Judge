#include <stdio.h>
 
int main() {

 char nome[20];
 double salarioFixo, totalVendas, salarioFinal;
 
 scanf("%s", &nome);
 scanf("%lf %lf", &salarioFixo, &totalVendas);
 
 salarioFinal = salarioFixo + totalVendas * 0.15;
 
 printf("TOTAL = R$ %.2lf\n", salarioFinal);
 
    return 0;
}