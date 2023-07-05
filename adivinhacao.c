#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "portuguese, brazil");

    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhac?o *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

    int chute;

    int ganhou = 0;

    int tentativas = 1;

    
    while(ganhou == 0) { 
        
        printf("Tentativa %d de\n", tentativas);
        printf("Qual o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0){
            printf("Você n?o pode chutar n?meros negativos!\n");
            
            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;
        
        if(acertou) {
            printf("Parab?ns, você acertou! \n");
            printf("Jogue de novo, você e um bom jogador! \n");
        
            ganhou = 1;
        }

        else if(maior){
            printf("Seu chute foi maior que o numero secreto!\n");
        } 
        
        else {
            printf("Seu chute foi menor que o numero secreto!\n");
        }
        
        tentativas = tentativas + 1;
    }

    printf("Fim de jogo!\n");
    printf("Você acertou em %d tentativas!", tentativas + 1);
}
