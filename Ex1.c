#include <stdio.h>

int main() {
    
    int numero;
    
    scanf("%d", &numero);
    
    numero --;
    printf("Antecessor: %d \n", numero);
    
    numero+=2;
    printf("Sucessor: %d \n", numero);
    
	return 0;
}