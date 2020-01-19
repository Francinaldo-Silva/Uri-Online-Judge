#include <stdio.h>
 
int main() {

 int peca1, peca2;
 int qtde1, qtde2;
 double vlr1, vlr2, total;
 
 scanf("%d %d %lf", &peca1, &qtde1, &vlr1);
 scanf("%d %d %lf", &peca2, &qtde2, &vlr2);
 
 total = (vlr1 * qtde1 + vlr2 * qtde2);
 
 printf("VALOR A PAGAR: R$ %.2lf\n", total);
 
    return 0;
}