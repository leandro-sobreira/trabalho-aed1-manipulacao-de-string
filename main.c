#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main(){

    int vet[TAM];
    int altVet[TAM];

    int opc;
    int vetFlag = 0;

    do{ // Loop principal
        do{ // Loop de inserção
            printf( "1 - Inserir\n"
                    "2 - Buscar\n"
                    "3 - Listar Ordenado\n"
                    "4 - Sair\n"
            );
            scanf("%d", &opc);
        }while (opc < 1 && opc > 4);

        switch (opc)
        {
            case 1:
                for (int i = 0; i < TAM; i++)
                {
                    char continuar;
                    printf("Insira o valor da posicao vet[%d]: ", i);
                    scanf("%d", &vet[i]);
                    printf("Quer continuar? (s/n)");
                    scanf(" %c", &continuar);
                    if (continuar == 'n') break;
                }
            break;
            
            default:
                break;
        }
    }while (opc != 4);
    
    system("pause");
    return 0;
}