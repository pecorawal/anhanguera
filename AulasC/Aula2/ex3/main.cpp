#include <iostream>

/* 
Elaborar um programa que efetue a leitura de valores positivos inteiros 
até que um valor negativo seja informado. 
Ao final devem  ser apresentados o maior e menor valor 
informados pelo usuário. 

*/

int main(int argc, char** argv) {

int numero=0, maior=0, menor=0;	

while (numero >= 0)
	{
		printf("Informe um valor positivo: ");
		scanf("%d", &numero);
		
		if (numero <0)
		 break;			
		
		if (numero > maior)
// se o numero informado for maior que o conteudo atual
// da variavel maior, esta variavel recebe o numero informado
			maior = numero;
		else 
			menor = numero;
		
	}
	
	printf("O maior eh %d e o menor eh %d\n", maior, menor);
	
	
	return 0;
}
