#include <stdio.h>
 
int main() {

 int idadeDias, ano = 0, mes = 0, dia = 0;

 scanf ("%d", &idadeDias);

 ano = (idadeDias / 365);
 mes = (idadeDias % 365) / 30;
 dia = (idadeDias % 365) % 30;

 printf ("%d ano(s)\n", ano);
 printf ("%d mes(es)\n", mes);
 printf ("%d dia(s)\n", dia);
 
   return 0;
}