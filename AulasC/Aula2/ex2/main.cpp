#include <iostream>

/* Ler 2 números quaisquer e soma-los. 
Se a soma for maior que 10, mostrar o resultado da soma*/

int main(int argc, char** argv) {

float numero1, numero2;
printf("Informe o primeiro numero: ");
scanf("%f",&numero1);

printf("Informe o segundo numero: ");
scanf("%f",&numero2);

if ((numero1 + numero2) > 10)
printf("\nA soma dos numeros informados e %3.2f\n\n", numero1 + numero2);
else
printf("\nA soma dos numeros informados eh menor ou igual 10.");


return 0;
}
