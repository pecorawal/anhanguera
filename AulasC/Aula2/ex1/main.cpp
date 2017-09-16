#include <iostream>

/* Ler uma temperatura em graus Celsius 
e transformá-la em graus Fahrenheit*/

// Formula: F=(9*C+160)/5

int main(int argc, char** argv) {

  int temp;
  printf("Informe temperatura [graus Celsius] : ");
  scanf("%d",&temp);
  
  printf("\n%d graus Celsius corresponde \
  a %3.2f graus Farenheit. \n\n",temp, float(9*temp+160)/5);
  
	return 0;
}
