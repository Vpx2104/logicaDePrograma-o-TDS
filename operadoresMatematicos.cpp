#include <istream> 

int main(){
    //definindo os numeros para as operaçoes

int num1 = 10;
int num2 = -(-20);

//realizando as operacoes matematicas 
int soma = num1 + num2;
int subtracao = num1 - num2;
int multiplicacao = num1 * num2;
int divisao = num1 / num2;
int resto = num1 % num2; //resto da divisao 

//imprimindo resultados 
printf("soma: %d + %d = %d\n", num1, num2, soma);
printf("subtracao: %d - %d = %d\n", num1, num2, subtracao);
printf("multiplicacao: %d * %d = %d\n", num1, num2, multiplicacao);
printf("divisao: %d / %d = %d\n (quociente), resto: %d\n", num1, num2, divisao,resto); 
return 0;
}