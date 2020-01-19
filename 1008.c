#include <stdio.h>
 
int main() {

 int numFuncionario, numHorasTrab;
 float salarioFuncionario, salarioFinal;
 
 scanf("%d", &numFuncionario);
 scanf("%d", &numHorasTrab);
 scanf("%f", &salarioFuncionario);
 
 salarioFinal = numHorasTrab * salarioFuncionario;
 
 printf("NUMBER = %d\n", numFuncionario);
 printf("SALARY = U$ %.2f\n", salarioFinal);
 
    return 0;
}