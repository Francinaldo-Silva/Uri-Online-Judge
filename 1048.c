#include <stdio.h>
 
int main() {
 
 double  valor, salario, soma; 
 int porcentagem;
 char p = '%';
 
 
 scanf("%lf", &valor);
 
 if (valor >= 0.0 && valor <= 400.00){
	 soma = (valor*15)/100;
	 salario = soma + valor;
	 porcentagem = 15;
 }
 else if (valor >= 400.01 && valor <= 800.00){
	 soma = (valor*12)/100;
	 salario = soma + valor;
	 porcentagem = 12;
 }
 else if (valor >= 800.01 && valor <= 1200.00){
	 soma = (valor*10)/100;
	 salario = soma + valor;
	 porcentagem = 10;
 }
 else if (valor >= 1200.01 && valor <= 2000.00){
	 soma = (valor*7)/100;
	 salario = soma + valor;
	 porcentagem = 7;
 }
 else if (valor > 2.000){
	 soma = (valor*4)/100;
	 salario = soma + valor;
	 porcentagem = 4;
 }
 printf("Novo salario: %.2lf\n", salario);
 printf("Reajuste ganho: %.2lf\n", soma);
 printf("Em percentual: %d %c\n", porcentagem, p);
 
 
    return 0;
}