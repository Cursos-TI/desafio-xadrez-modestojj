#include <stdio.h>
   
void moverBispo(int casasBispo){
    if(casasBispo > 0){
        moverBispo(casasBispo -1);//essa funcao moverBispo eu puxo no main()
        printf("Direita %d\n", casasBispo);
        printf("cima %d\n", casasBispo);
        printf("\n");//os prints aparecem no main o void faz a logica
    }
}

void moverTorre(int casasTorre){

    if (casasTorre > 0)
    {
        moverTorre(casasTorre - 1);
        printf("Direita %d\n", casasTorre);
        printf("\n");
    }
    
}

void moverRainha(int casasRainha){

    if (casasRainha > 0)
    {
        moverRainha(casasRainha - 1);
        printf("Esquerda %d\n", casasRainha);
        printf("\n");
    }
    

}

int main(){
    int peca;
    printf("Escolha uma peça do xadres\n");
    printf("1 - Bispo\n");
    printf("2 - Torre\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    printf("5 - Sair do jogo\n");
    printf("Opção: ");
    scanf("%d", &peca);// aqui eu estou lendo o digito do usuario
    printf("\n");

    if (peca == 1) //se ele digitar 1 acontece esses comandos
    {
        printf("você escolheu Bispo\n");
        printf("\n");
        moverBispo(5);//puxei a funcao do void (5) é o numero de loops 
    }else if (peca == 2)
    {
        printf("você escolheu Torre\n");
        printf("\n");
        moverTorre(2);
    }else if (peca == 3)
    {
        printf("você escolheu Rainha\n");
        printf("\n");
        moverRainha(8);   

    }else if (peca == 4)
    {
        printf("você escolheu Cavalo\n");
       for (int i = 0; i < 1; i++)
       {
        if (i == 1)continue;
        printf("cima %d\n");
    }
       
         printf("Direita %d\n");
    }else if (peca == 5)
    {
        printf("saindo do jogo...\n");
    }else if (peca < 0 || peca > 5)
    {
        printf("ERRO[digite um valor válido!!]");
    }
  
    return 0;
}