#include <iostream>


/*Preencher um vetor com n�meros inteiros (8unidades); 
solicitar um n�mero do teclado.
Pesquisar se esse n�mero existe no vetor. 
Se existir, imprimir em qual posi��o do vetor. 
Se n�o existir, imprimir "Numero n�o encontrado":
 */

int main(int argc, char** argv) {
	
	int x, vet[8], num, achei=0;
		for(int x=0;x<8;x++)
			{
				printf("\n[%d] Digite um numero: ",x);
				scanf("%d",&vet[x]);
			}
	printf("\n\n");
	printf("Digite um valor a ser pesquisado: ");
	scanf("%d",&num);

	for(int x=0;x<8;x++)
		if(vet[x]==num)
		{
			printf("\n O numero %d esta na posicao %d: ",num,x);
			achei=1;
		}
	if(achei!=1)
	printf("\n Este numero nao existe");
	printf("\n\n");

	
	return 0;
}
