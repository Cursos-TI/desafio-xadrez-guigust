#include <stdio.h>

int main() {
    // Declaração da Variável para escolha da peça ou encerrar o jogo
    int opcao, informacao;

    do
    {
        //Variavel para uso do while e do/while
        int contador = 1;

        printf("###################\n");
        printf("### Jogo Xadrez ###\n");
        printf("###################\n\n");
        printf("\n");

        // Menu principal
        printf("Escolha uma peça para movimentar: \n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("4. Cavalo\n"); //Acrescido pelo desafio Aventureiro
        printf("99. Informações sobre o movimento da peça\n");
        printf("0. Sair\n");
        printf("->: ");
        scanf("%d", &opcao);
        printf("\n");


        //Verifica a opção escolhida pelo usuário
        switch (opcao)
        {
        // Torre
        case 1:
            printf("Movimentando a Torre \n");
            //Movimentando a torre com o while
            while (contador < 6)
            {
            printf("Movimento %d: Frente\n", contador);
            contador++;
            }
            

            break;
        // Bispo
        case 2:
            printf("Movimentando o  Bispo\n");
            // Movimentando a torre com o For
            for (int i = 1; i < 6; i++)
            {
            printf("Movimento %d: Cima / Direita \n", i);
            }
            printf("### Movimento finalizado");
            break;

        // Rainha
        case 3:
            printf("Movimentando a Rainha \n");
            // Movimento da rainha com do/while
            do
            {
            printf("Movimento %d: Esqueda\n", contador);
            contador++;
            } while (contador <= 8);
            
            break;

        // Cavalo
        case 4:
            printf("Movimentando o  Cavalo\n");
            // For aninhados para movimento do cavalo
            //Variáveis para iteração do for
            int i = 0, j = 0;
            for (i = 0; i < 1; i++)
            {
            for (j = 0; j < 2; j++)
            {
                printf("Movimento %d: Baixo\n", j + 1);
            }
            
            printf("Movimento %d: Esquerda\n ", j + 1);
            }
            
            break;

        // Sair
        case 0:
            printf("Saindo do Jogo! \n");
            break;

        // Informações sobre o movimento:
        case 99:
            printf("Escolha uma peça para obter informações sobre o movimento: \n");
            printf("1. Torre\n");
            printf("2. Bispo\n");
            printf("3. Rainha\n");
            printf("4. Cavalo\n");
            printf("0. Retornar\n");
            scanf("%d", &informacao);
            printf("##################\n");

            //Verifica a escolha do usuário
            switch (informacao)
            {
            case 1:
                printf("Torre: \n");
                break;

            case 2:
                printf("Bispo: \n");
                break;

            case 3:
                printf("Rainha: \n");
                break;

            case 4:
                printf("Cavalo: \n");
                break;

            // Retorna ao menu principal
            case 0:
                printf("Retornando ao menu principal\n");
                break;

            default:
                printf("Opção invalida!\n");
                break;
            }
            break;

        //Opção Invalida
        default:
            printf("Opção invalida! Tente novamente.\n");
            break;
        }

        
    } while (opcao != 0);
    
    printf("### Jogo encerrado!");

    return 0;
}
