#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
/*Mostre o valor em reais de cada kw (KILOWATT) a ser pago e o novo valor a ser pago por essa residencia com um desconto de 10%. 
Dado: 100 kilowatts custam 1/7 do salario minimo * quantidade de kw gasto por residencia.
*/	

float SM , kwgasto, umkw; 

printf("Informe o valor do salario minimo: "); 
scanf("%f",&SM); 

printf("\n\nInforme total Kw gasto na residencia: "); 
scanf("%f",&kwgasto); 
umkw = SM/7/100; 

printf("\n\nO valor de 1 Kw e: %3.2f\n\n",umkw); 
printf("\nO valor a ser pago pela residencia e: %4.2f",kwgasto * umkw); 
printf("\n\n Valor com desconto de 10%% e: %3.2f\n\n",(kwgasto * umkw) * 0.90); 

	return 0;
}
