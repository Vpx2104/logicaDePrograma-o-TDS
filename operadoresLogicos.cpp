#include <iostream> 

int main() {
    int a, b;

    //solicite ao usuario para digitar 2 numeros 
    printf("digite o primeiro numero (0 ou 1): ");
    scanf("%d", &a);
    printf("digite o segundo numero (0 ou 1): ");
    scanf("%d, &b");

    //operador AND
    printf("\n0operador AND (&&):\n");
    printf("%d && %d = %d\n", a, b, a && b);

    //operador OR
    printf("\n0perador OR (||):\n");
    printf("%d || %d = %d\n", a, b, a || b);

    //operador NOT
    printf("\n0perador NOT (!):\n");
    printf("!%d = %d\n", a, !a);
    printf("!%d = %d\n", b, !b);

return 0;
}