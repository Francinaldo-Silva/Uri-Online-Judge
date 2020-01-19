#include <stdio.h>
 
int main() {
 
 int vlr1, vlr2, vlr3;
 int vlr4, vlr5, vlr6;
 int trocarValor;
 
 scanf("%d %d %d", &vlr1, &vlr2, &vlr3);
 
 vlr4 = vlr1;
 vlr5 = vlr2;
 vlr6 = vlr3;
 
 if (vlr4 > vlr5){
	 trocarValor = vlr4;
	 vlr4 = vlr5;
	 vlr5 = trocarValor;
 }
 if (vlr4 > vlr6){
	 trocarValor = vlr4;
	 vlr4 = vlr6;
	 vlr6 = trocarValor;
 }
 if (vlr5 > vlr6){
	 trocarValor = vlr5;
	 vlr5 = vlr6;
	 vlr6 = trocarValor;
 }
 
 printf("%d\n%d\n%d\n", vlr4, vlr5, vlr6);
 printf("\n");
 printf("%d\n%d\n%d\n", vlr1, vlr2, vlr3);
 
    return 0;
}