#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
    
    setlocale(LC_ALL, "portuguese, brazil");

    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhacâo *\n");
    printf("******************************************\n");

    int segundos = time(0);
    srand(segundos);
    
    int numerogrande = rand();
    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    while(1) {

        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Você n?o pode chutar números negativos!\n");
            continue;
        }

    int acertou = (chute == numerosecreto);
    int maior = chute > numerosecreto;

    if(acertou) {
        printf("Parabéns! Você acertou!\n");
        printf("Jogue de novo, você é um bom jogador!\n");

        break;
    }

            else if(maior) {
                printf("Seu chute foi maior que o número secreto\n");
            }

            else {
                printf("Seu chute foi menor que o número secreto\n");
            }

            tentativas++;

            double pontosperdidos = abs(chute - numerosecreto) / (double)2;
            pontos = pontos - pontosperdidos;

        }

        printf("Fim de jogo!\n");
        printf("Você acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
}
