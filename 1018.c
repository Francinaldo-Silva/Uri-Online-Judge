#include <stdio.h>
 
int main() {
 
    int ced;
    scanf("%d",&ced);
    printf("%d\n",ced);
    printf("%d nota(s) de R$ 100,00\n",ced/100);
    ced = ced%100;
    printf("%d nota(s) de R$ 50,00\n",ced/50);
    ced = ced%50;
    printf("%d nota(s) de R$ 20,00\n",ced/20);
    ced = ced%20;
    printf("%d nota(s) de R$ 10,00\n",ced/10);
    ced = ced%10;
    printf("%d nota(s) de R$ 5,00\n",ced/5);
    ced = ced%5;
    printf("%d nota(s) de R$ 2,00\n",ced/2);
    ced = ced%2;
    printf("%d nota(s) de R$ 1,00\n",ced);

 
    return 0;
}