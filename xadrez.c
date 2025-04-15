#include <stdio.h>
// recursividade para chamar o movimento a ser utilizado

void movimentocima(int quantidade) {
    if (quantidade > 0)
     {
        printf("Cima\n");  
        movimentocima (quantidade - 1); 
    }
}

void diagonalcimadireita(int quantidade) {
    if (quantidade > 0)
    {
        printf("Cima\n");
        printf("Direita \n");
        diagonalcimadireita (quantidade -1);
    }

}

void diagonalcimaesquerda(int quantidade) {
    if (quantidade > 0)
    {
        printf("Cima\n");
        printf("Esquerda \n");
        diagonalcimaesquerda (quantidade -1);
    }

}

void diagonalbaixodireita(int quantidade) {
    if (quantidade > 0)
    {
        printf("Baixo\n");
        printf("Direita \n");
        diagonalbaixodireita (quantidade -1);
    }

}

void diagonalbaixoesquerda(int quantidade) {
    if (quantidade > 0)
    {
        printf("Baixo\n");
        printf("Esquerda \n");
        diagonalbaixoesquerda (quantidade -1);
    }

}

void movimentoesquerda(int quantidade) {
    if (quantidade > 0)
     {
        printf("Esquerda\n");  
        movimentoesquerda (quantidade - 1); 
    }
}

void movimentodireita(int quantidade) {
    if (quantidade > 0)
     {
        printf("Direita\n");  
        movimentodireita (quantidade - 1); 
    }
}

void movimentobaixo(int quantidade) {
    if (quantidade > 0)
     {
        printf("Baixo\n");  
        movimentobaixo (quantidade - 1); 
    }
}




// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // declaração das variaveis

    int pecaescolhida, direcaorainha, quantidade, direcaobispo, direcaotorre;
    int direcaocavalo, direcaocavalo2, casascavalo1, casascavalo2, peao, peao2;

    // Menu interativo

    printf("Escolha qual pedra você deseja movimentar:\n");
    printf("1. Rainha \n");
    printf("2. Bispo \n");
    printf("3. Torre \n");
    printf("4. Cavalo\n");
    printf("5. Peão \n");
    scanf("%d", &pecaescolhida);

    // Switch para trabalhar com as opções do usuario

    switch (pecaescolhida) 
        {
        case 1:
            printf("Otima escolha voce escolheu a Rainha \n");
            printf("A rainha pode se mover em qualquer direção \n");
            printf("Agora escolha qual direção voce vai mover a Rainha \n");
            printf("1.Cima \n");
            printf("2.Diagonal direita para cima \n");
            printf("3.Diagonal esquerda para cima \n");
            printf("4.Diagonal direita para baixo \n");
            printf("5.Diagonal esquerda para baixo \n");
            printf("6.Esquerda \n");
            printf("7.Direita \n");
            printf("8.Para baixo \n");
            scanf("%d", &direcaorainha);

            switch (direcaorainha)
            {
                case 1:
                printf("Voce pode andar no maximo 7 casas\n");
                printf("Escolha quantas casas você vai andar \n");
                scanf ("%d",&quantidade);

                // chamando o movimento escolhido
                movimentocima(quantidade);

                break;

                case 2:
                printf("Voce pode andar no maximo 7 casas\n");
                printf("Escolha quantas casas você vai andar \n");
                scanf ("%d",&quantidade);

                diagonalcimadireita(quantidade);

                break;

                case 3:
                printf("Voce pode andar no maximo 7 casas\n");
                printf("Escolha quantas casas você vai andar \n");
                scanf ("%d",&quantidade);

                diagonalcimaesquerda(quantidade);

                break;

                case 4:
                printf("Voce pode andar no maximo 7 casas\n");
                printf("Escolha quantas casas você vai andar \n");
                scanf ("%d",&quantidade);

                diagonalbaixodireita(quantidade);

                break;

                case 5:
                printf("Voce pode andar no maximo 7 casas\n");
                printf("Escolha quantas casas você vai andar \n");
                scanf ("%d",&quantidade);

                diagonalbaixoesquerda(quantidade);

                break;

                case 6:
                printf("Voce pode andar no maximo 7 casas\n");
                printf("Escolha quantas casas você vai andar \n");
                scanf ("%d",&quantidade);

                movimentoesquerda(quantidade);

                break;

                case 7:
                printf("Voce pode andar no maximo 7 casas\n");
                printf("Escolha quantas casas você vai andar \n");
                scanf ("%d",&quantidade);

                movimentodireita(quantidade);

                break;
                
                case 8:
                printf("Voce pode andar no maximo 7 casas\n");
                printf("Escolha quantas casas você vai andar \n");
                scanf ("%d",&quantidade);

                movimentobaixo(quantidade);

                break;

                default:
                printf("Opção Invalida. Tente novamente.\n");
                break;
            }
        break;

        case 2:
        printf("Otima escolha voce escolheu o Bispo \n");
        printf("O Bispo pode se mover na Diagonal em qualquer direção \n");
        printf("Agora escolha qual direção na diagonal voce vai mover o Bispo \n");
        printf("1.Diagonal direita para cima \n");
        printf("2.Diagonal esquerda para cima \n");
        printf("3.Diagonal direita para baixo \n");
        printf("4.Diagonal esquerda para baixo \n");
        scanf("%d", &direcaobispo);

        switch (direcaobispo)
        {
            case 1:
                printf("Voce pode andar no maximo 7 casas\n");
                printf("Escolha quantas casas você vai andar \n");
                scanf ("%d",&quantidade);

                diagonalcimadireita(quantidade);

                break;

            case 2:
                printf("Voce pode andar no maximo 7 casas\n");
                printf("Escolha quantas casas você vai andar \n");
                scanf ("%d",&quantidade);

                diagonalcimaesquerda(quantidade);

            break;

            case 3:
                printf("Voce pode andar no maximo 7 casas\n");
                printf("Escolha quantas casas você vai andar \n");
                scanf ("%d",&quantidade);

                diagonalbaixodireita(quantidade);

            break;

            case 4:
                printf("Voce pode andar no maximo 7 casas\n");
                printf("Escolha quantas casas você vai andar \n");
                scanf ("%d",&quantidade);

                diagonalbaixoesquerda(quantidade);

                break;

            default:
            printf("Opção Invalida. Tente novamente.\n");
            break;

        }
        break;
        
        case 3:

        printf("Otima escolha voce escolheu a Torre \n");
        printf("A Torre pode se mover em linha reta em qualquer direção \n");
        printf("Agora escolha qual direção voce vai mover a Torre \n");
        printf("1.Cima \n");
        printf("2.Esquerda \n");
        printf("3.Direita \n");
        printf("4.Para baixo \n");
        scanf("%d", &direcaotorre);

        switch (direcaotorre)
        {
            case 1:
                printf("Voce pode andar no maximo 7 casas\n");
                printf("Escolha quantas casas você vai andar \n");
                scanf ("%d",&quantidade);

                movimentocima(quantidade);

            break;

            case 2:
                printf("Voce pode andar no maximo 7 casas\n");
                printf("Escolha quantas casas você vai andar \n");
                scanf ("%d",&quantidade);

                movimentoesquerda(quantidade);

                break;

            case 3:
                printf("Voce pode andar no maximo 7 casas\n");
                printf("Escolha quantas casas você vai andar \n");
                scanf ("%d",&quantidade);

                movimentodireita(quantidade);

                break;

            case 4:
                printf("Voce pode andar no maximo 7 casas\n");
                printf("Escolha quantas casas você vai andar \n");
                scanf ("%d",&quantidade);

                movimentobaixo(quantidade);

                break;

            default:
                printf("Opção Invalida. Tente novamente. \n");
            break;
        }
        break;

        case 4:
        printf("Otima escolha voce escolheu o Cavalo \n");
        printf("O Cavalo pode se mover em L em qualquer direção \n");
        printf("Agora escolha qual direção voce vai começar a mover o Cavalo \n");
        printf("1.Cima \n");
        printf("2.Esquerda \n");
        printf("3.Direita \n");
        printf("4.Para baixo \n");
        scanf("%d", &direcaocavalo);

            switch (direcaocavalo)
            {
            case 1:
                printf ("Agora escolha se voce vai quere andar 1 ou 2 casas\n");
                scanf("%d",&casascavalo1);
                printf ("Agora escolha 1 para direita e 2 para esquerda \n");
                scanf("%d", &direcaocavalo2);
                if (direcaocavalo2 == 1)
                {
                    if (casascavalo1 == 1)
                    {
                        movimentocima(casascavalo1);
                        movimentodireita(2);
                    } else {
                        movimentocima(casascavalo1);
                        movimentodireita(1);
                    }

                } else if (direcaocavalo2 == 2)
                { 
                    movimentocima(casascavalo1);
                    movimentoesquerda(2);  

                } else {
                    movimentocima(casascavalo1);
                    quantidade = 1;
                    movimentoesquerda(quantidade);  

                }        
               
            break;

            case 2:
                printf ("Agora escolha se voce vai quere andar 1 ou 2 casas\n");
                scanf("%d",&casascavalo1);
                printf ("Agora escolha 1 para cima e 2 para baixo \n");
                scanf("%d", &direcaocavalo2);
                if (direcaocavalo2 == 1)
                {
                    if (casascavalo1 == 1)
                    {
                        movimentoesquerda(casascavalo1);
                        movimentocima(2);
                    } else {
                        movimentoesquerda(casascavalo1);
                        movimentocima(1);
                    }

                } else if (direcaocavalo2 == 2)
                { 
                    movimentoesquerda(casascavalo1);
                    movimentobaixo(2);  

                } else {
                    movimentoesquerda(casascavalo1);
                    movimentobaixo(1);  

                }        


            break;

            case 3:
                printf ("Agora escolha se voce vai quere andar 1 ou 2 casas\n");
                scanf("%d",&casascavalo1);
                printf ("Agora escolha 1 para cima e 2 para baixo \n");
                scanf("%d", &direcaocavalo2);
                if (direcaocavalo2 == 1)
                {
                    if (casascavalo1 == 1)
                    {
                        movimentodireita(casascavalo1);
                        movimentocima(2);
                    } else {
                        movimentodireita(casascavalo1);
                        movimentocima(1);
                    }

                } else if (direcaocavalo2 == 2)
                { 
                    movimentodireita(casascavalo1);
                    movimentobaixo(2);  

                } else {
                    movimentodireita(casascavalo1);
                    movimentobaixo(1);  

                } 

            break;

            case 4:
                printf ("Agora escolha se voce vai quere andar 1 ou 2 casas\n");
                scanf("%d",&casascavalo1);
                printf ("Agora escolha 1 para direita e 2 esquerda \n");
                scanf("%d", &direcaocavalo2);
                if (direcaocavalo2 == 1)
                {
                if (casascavalo1 == 1)
                {
                    movimentobaixo(casascavalo1);
                    movimentodireita(2);
                } else {
                    movimentobaixo(casascavalo1);
                    movimentodireita(1);
                }

                } else if (direcaocavalo2 == 2)
                { 
                movimentobaixo(casascavalo1);
                movimentoesquerda(2);  

                } else {
                movimentobaixo(casascavalo1);
                movimentoesquerda(1);  

            } 

            break;

            default:
            printf("Opção Invalida. Tente novamente. \n");
            
            }
        break;

        case 5:
        printf("Otima escolha voce escolheu o Peão \n");
        printf("O Peão pode se mover para cima 1 casa por vez \n");
        printf("Se for a primeira vez que você vai andar com o Peão ele tem a opção de andar duas casas \n");
        printf("Digite quantas casas você quer andar \n");
        scanf("%d", &quantidade);

        if (quantidade <= 2)
        {
            
            movimentocima(quantidade);

        } else {

            printf("Numero de casas invalido. Tente novamente \n");
        }

        break;

        default:
        printf("Opção Invalida. Tente novamente. \n");
        break;
        }

        return 0;
  
    }
    
    
  

    
    
       
        
    


