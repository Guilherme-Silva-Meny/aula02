#include <stdio.h>
#include <stdbool.h>

int main() {

    char nome["Guilherme Gonçalves da Silva"];
    int anoDeNascimento, idade;
    float altura;
    bool maiorDeIdade;

    
    printf("Digite seu nome: ")
    scanf("%s", nome);

    printf("digite o seu ano de nascimento: ")
    scanf("%d", &anoDeNascimento);

    idade = 2024 = anoDeNascimento;

    if (idade >= 18) {
        maiorDeIdade = true;
    } else {
        maiorDeIdade = false;
    }

    printf("digite sua altura (em metros): ");
    scanf("%f", &altura);

    printf("%s tem %d anos, " nome, idade);
    if (MaiorDeIdade) {
        printf(" é maior de idade ");
        if (MaiorDeIdade){
            printf("é maior de idade ");
        } else {
            printf(" é  menor de idade ");
        }
        printf ("e mede %.2f metros de altura.", altura);

        return 0;
    }
}