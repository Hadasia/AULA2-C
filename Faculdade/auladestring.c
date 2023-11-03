#include <stdio.h>

int main () {
    int valor1;
    int valor2;


    printf("Digite o primeiro valor: \n");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: \n");
    scanf("%d", &valor2);

    if (valor1 > valor2){
        printf("%d e maior que %d \n", valor1, valor2);
    } 
    
    else if (valor1 < valor2){
        printf("%d e menor que %d \n", valor1, valor2);
    }
    
    else if (valor1 == valor2){
        printf("Os valores sao iguais \n");
    }

    if (valor1 % valor2 == 0) {
        printf("%d e multiplo de %d \n", valor1, valor2);
    }

    else {
        printf("%d nao e multiplo de %d \n", valor1, valor2);
    }
    

    return 0;
}