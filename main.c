#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main(){

    int vet[TAM];
    int altVet[TAM];

    int opc;
    int vetFlag = 0;

    do{ // Loop principal
        printf( "1 - Inserir\n"
                "2 - Buscar\n"
                "3 - Listar Ordenado\n"
                "4 - Sair\n"
                "O que quer fazer? "
        );
        scanf("%d", &opc);
        switch (opc)
        {
            case 1: // Inserir
                for (int i = 0; i < TAM; i++)
                {
                    char continuar;
                    printf("Insira o valor da posicao vet[%d]: ", i);
                    scanf("%d", &vet[i]);
                    printf("Quer continuar? (s/n): ");
                    scanf(" %c", &continuar);
                    if (continuar == 'n') break;
                }
                vetFlag = 1;
            break;

            case 2: // Busca
                if (vetFlag == 0)
                {
                    printf("Primeiramente insira algo na string! \n");
                }else{
                    int posicao = -1;
                    int busca;

                    printf("Qual numero esta procurando? ");
                    scanf("%d", &busca);
                    for (int i = 0; i < TAM; i++)
                    {
                        posicao = -1;
                        if (vet[i] == busca)
                        {
                            posicao = i;
                        } else {
                            posicao = -1;
                        }
                        if (posicao != -1)
                        {
                            printf("Valor encontrado em vet[%d]\n", i);
                        }
                    }
                    if (posicao == -1)
                    {
                        printf("Valor nao encontrado\n");
                    }
                    
                }
            break;

            case 4:
                printf("Obrigado por usar nosso programa :D");
            break;
            
            default:
                printf("Opcao invalida");
                system("pause");
        }
    }while (opc != 4);
    
    system("pause");
    return 0;
}