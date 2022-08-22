#include <stdio.h>
#include <stdlib.h>

int main() {
	float calc, kwh;
	printf("escreva seu consumo em Kw/h: ");
	scanf("%f", &kwh);
	calc = kwh*0.2;
	printf("Seu consumo foi de :%.2f Kw/h", calc);
	system("pause");


}
