#include <stdio.h>
#include <stdlib.h>
// Peça ao usuátio para digitar três numeros inteiros e imprima a soma deles.


int main(){
	int a, b, c;
	printf("Digite um valor: ");
	scanf("%d", &a);

	printf("Digite outro valor: ");
	scanf("%d", &b);

	printf("Digite ainda outro valor: ");
	scanf("%d", &c);

	int d = a+b+c;
	printf("A Soma dos três valores digitados é: %d", d);

}
