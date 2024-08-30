#include <stdio.h> // 1º passo = inclusao da biblioteca
#include <stdbool.h> // inclusao da biblioteca de teste logico

int main () { // 2º passo = função principal para iniciar o sistema

char nome[20] // caracteres , nome
int idade, anoDeNascimento; // numeros
float altura; //
bool maiorDeIdade; // 


// Solicitação do nome
printf("digite seu nome: "); // Irá solicitar na tela de usuário
scanf("%$", nome); // Irá ler a entrada do dado

// Solicitação do ano de nascimento
printf("digite seu ano de nascimento: "); // Irá solicitar na tela de usuário
scanf("%d", anoDeNascimento); // Irá ler a entrada do dado

// Calculo 
idade = 2024 = anoDeNascimento;

// verificando a maioridade

if (maiorDeIdade => 18){
    maiorDeIdade = true;
} else {
    maiorDeIdade = false;
}

//solicitação da altura

printf("digite sua altura: "); // irá solicitar na tela a altura do usuário
scanf("%f", altura); // irá ler a entrada do dado

//apresentação dos resultados

if (maiorDeIdade){
    printf (" é maior de idade");
} else {
    printf("é menor de idade");
}

printf("%s tem % anos de idade " , nome, idade);
printf(" e mede %f de altura. ", altura)

 return 0;

}