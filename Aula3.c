#include <stdio.h>

int main(){
int valor1;
int valor2;
int resultado;
char operacao;

valor1 = 10;
valor2 = 2;

//SOMA: resultado = valor1 + valor2;
//SUBTRAÇÃO: resultado = valor1 - valor2;
//MULTIPLICAÇÃO: resultado = valor1 + valor2;
//DIVISÃO: resultado = valor1 / valor2;
//RESTO: resultado = valor1 % valor2;

printf("Insira uma operacao:\n");
scanf("%c", &operacao);

printf("insira 2 valores:\n");
printf("Valor 1:\n");
scanf("%d", &valor1);
printf("Valor2:\n");
scanf("%d", &valor2);

if(operacao == '+'){
printf("resultado: %d\n", valor1 + valor2);

}
else if(operacao == '-'){
printf("resultado: %d\n", valor1 - valor2);

}
if(operacao == '*'){
printf("resultado: %d\n", valor1 * valor2);

}
else if(operacao == '/'){
printf("resultado: %d\n", valor1 / valor2);

}
else{
printf("resultado: %d\n", valor1 % valor2);

}

    return 0;
}
