
#include <iostream>

//declara e inicializa variavel
int main() {
    int numero = 10;
    float pi =3.14159;
    char letra = 'a';
    std::string nome = "vitor";
    bool istrue = true;

//usando printf para formatar e imprimir os valores das variaveis
printf("numero: %d\n", numero);
printf("pi: %.2f\n", pi);
printf("letra: %c\n", letra);
printf("nome: %s\n", nome.c_str());     
printf("istrue: %d\n", istrue);

//retorna 0 para indicar sucesso
return 0;
} 

