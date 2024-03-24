#include <stdio.h>
#include <stdlib.h>

int main () { 
	int n1, soma;
	
	printf("digite um numero maior que 0 e menor que 1000: ");
	scanf("%d", &n1);
	
	if (n1 <= 0) {
		printf("digite um numero maior");
	}else if(n1 < 10){
		soma = n1;
	}else if(n1 < 100){
		soma = (n1 / 10) + (n1 % 10);
	}else if(n1 < 1000){
		soma = (n1 / 100) + ((n1/10) % 10) + (n1 % 10);
	}else if (n1 >= 1000) {
		printf("digite um numero menor");
	}
	
	if (n1 > 0 && n1 < 1000) {
		printf("\n\nA soma dos valores e: %d", soma);
	}
}
