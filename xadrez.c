#include <stdio.h>
/* 
Torre: Move-se em linha reta horizontalmente ou verticalmente. (5 casa)
Bispo: Move-se na diagonal (cima direita) (cima esquerda) 5 cs
Rainha: Move-se em todas as direções (8 casa)
*/

/* 
O (for) é usado para um número de iterações pré-definido. 
O (while) executa o bloco enquanto uma condição for verdadeira.
O (do-while) executa o bloco primeiro e depois verifica a condição, garantindo a execução pelo menos uma vez. 
*/
int main(){

    int peca;
    int opcaoTorre;
    int opcaoBispo;
    int opcaoRainha;
    int opcaoCavalo;
  do
  {
    
    printf("Escolha uma peça do xadres\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    printf("5 - Sair do jogo\n");
    printf("Opção: ");
    scanf("%d", &peca);
    printf("\n");
    
    switch (peca)
    {
        //se esolher torre o jogador pode escolher a direção D ou E
        case 1:
        printf("Escolha uma direção\n");
        printf("1 - Direita\n");
        printf("2 - Esquerda\n");
        printf("Opção: ");
        scanf("%d", &opcaoTorre);
        printf("\n");
        
        
        for (int i = 0; i < 5; i++){
            if (opcaoTorre == 1)
            
            {
                printf("Direita\n");
            } else if (opcaoTorre == 2)
            
            {
                printf("Esquerda\n");
            }
        }
        break;
        
        
        case 2:
        int b = 0;
        
        printf("Escolha uma direção\n");
        printf("1 - Diagonal/Cima/Direita\n"); 
        printf("2 - Diagonal/Cima/Esquerda\n");
        printf("3 - Diagonal/Baixo/direita\n");
        printf("4 - Diagonal/Baixo/Esquerda\n");
        printf("Opção: ");
        scanf("%d", &opcaoBispo);
        printf("\n");
        while (b < 5)
        {
            if (opcaoBispo == 1)
            {
                printf("Diagonal/Direita\n");
            } else if (opcaoBispo == 2)
            {
                printf("Diagonal/Esquerda\n");
            } else if (opcaoBispo == 3)
            {
                printf("Diagonal/Baixo/Direita\n");
            }else if (opcaoBispo == 4)
            {
                printf("Diagonal/Baixo/Esquerda\n");
            }else 
            {
                printf("valor invalido\n");
            }
            b++;
            
        }
        
        break;
        case 3:
        
        printf("Rainha\n");
        printf("Escolha uma direção\n");
        printf("1 - Cima\n"); 
        printf("2 - Baixo\n");
        printf("3 - Direita\n"); 
        printf("4 - Esquerda\n");
        printf("5 - Diagonal/Cima/Direita\n"); 
        printf("6 - Diagonal/Cima/Esquerda\n");
        printf("7 - Diagonal/Baixo/direita\n");
        printf("8 - Diagonal/Baixo/Esquerda\n");
        printf("Opção: ");
        scanf("%d", &opcaoRainha);
        printf("\n");
        for (int i = 1; i <= 8; i++)
        {
            if (opcaoRainha == 1)
            {
                printf("Cima\n");
            } else if (opcaoRainha == 2)
            {
                printf("Baixo\n");
            }else if (opcaoRainha == 3)
            {
                printf("Direita\n"); 
            }else if (opcaoRainha == 4)
            {
                printf("Esquerda\n");
            }else if (opcaoRainha == 5)
            {
                printf("Diagonal/Cima/Direita\n");
            }else if (opcaoRainha == 6)
            {
                printf("Diagonal/Cima/Esquerda\n");
            }else if (opcaoRainha == 7)
            {
                printf("Diagonal/Baixo/direita\n");
            }else if (opcaoRainha == 8)
            {
                printf("Diagonal/Baixo/Esquerda\n");
            }
            
        }
        break;
        
        
        case 4:
        printf("Escolha uma direção\n");
        printf("1 - Cima/Direita\n"); 
        printf("2 - Cima/Esquerda\n");
        printf("3 - Baixo/Direita\n");
        printf("4 - Baixo/Esquerda\n");
        printf("Opção: ");
        scanf("%d", &opcaoCavalo);
        printf("\n");
        if (opcaoCavalo == 1)
        {
            //(i) = 2; se condicao decidir ate 2 ;(i) decrementa 1 
            for (int i = 2; i >= 2; i--)
            
            {
                //(j)inicia com 0; se meu j for menor q 2; j crementa + 1 ate chegar em 2. no caso 2x pra cima
                for (int j = 0; j < 2; j++)
                {
                    printf("cima\n");
                }
                printf("direita\n");
            }
        } else if (opcaoCavalo == 2)
        {
            for (int i = 2; i >= 2; i--)
            
            {
                for (int j = 0; j < 2; j++)
                {
                    printf("cima\n");
                }
                printf("Esquerda\n");
            }
        }else if (opcaoCavalo == 3)
        {
            for (int i = 3, j = 0; i >= 2 && j < 2; i--, j++)
        {
            printf("Baixo\n");
        }
        printf("Direita\n");
        printf("Esquerda\n");
        
    }else if (opcaoCavalo == 4)
    {
        for (int i = 3, j = 0; i >= 2 && j < 2; i--, j++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        
    }
    break;
    
}
if (peca == 5)
{
    printf("Saindo do jogo...\n");
}



} while (peca > 5);

}