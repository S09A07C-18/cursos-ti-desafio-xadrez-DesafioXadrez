#include <stdio.h>               //Função para acessar as bibliotecas
int numero2 = 0;                //Declara o formato da variável numero 2(número inteiro) e o seu valor :0
int numero3 = 0;               //Declara o formato da variável numero 3(número inteiro) e o seu valor:0   
int movimentocompleto = 1 ;    //Declara o formato da variável Movimentocompleto (número inteiro) e o seu valor :5
int movimentoCompleto = 1 ;  //Declara o formato da variável movimentoCompleto (número inteiro) e o seu valor :1


void moverTorre(int casas){     //Recursividade:Função que coleta o número de casas para executa o if
     if(casas > 0){            //Função if que verifica se o número de casas for maior que 0
     moverTorre(casas-1);     // A função chama a si mesma e faz a subtração casa-1 
     printf("Torre\n");      //Se sim mostra a palavra Torre
     printf("Direita\n");   //Se sim mostra a palavra Direta
     
     }}

void moverRainha(int casas){    //Recursividade:Função que coleta o número de casas para executa o if
     if(casas > 0){            //Função if que verifica se o número de casas for maior que 0
     moverRainha(casas-1);     // A função chama a si mesma e faz a subtração casa-1 
     printf("Rainha\n");      //Se sim mostra a palavra Torre
     printf("Esquerda\n");   //Se sim mostra a palavra Direta
     
 } 

   
}
     






   
int main(){                                                         //Função que faz ao programa rodar
     
     moverTorre(5);                                                 //Indica o número de casas para função moverTorre
      printf("\n\n");                                              //Faz um espaçamento
      while(movimentoCompleto--)                                  //Decrementa em 1 o movimentoCompleto
          for(int numero5 =0; numero5 <5;numero5++)              //Função que inicializa o numero5 = 0,verifica  se numero5 for menor que 5 ,se sim executa o código 
       {   printf("Bispo\n");                                   //imprime Bispo cinco vezes 
          printf("Cima,Direita\n") ;                             //Mostra cima e direita 

           }
     printf("\n\n");                                           //Faz um espaçamento
     moverRainha(8);                                           //Indica o número de casas para função moverRainha
    
     printf("\n\n");                                           //Faz um espaçamento

     while(movimentocompleto-- )                                                   //estrutura de repetição que decrementa em 1 o movimentoCompleto após realizar o for
       { for(int numero6 = 1 , numero7= 3; numero6 < numero7;numero6++){          //Estrutura de repetição que inicializa a variável numero5 = 0,verficia se numero5 é menor que 2 se sim executa os printfs e ao finalizar acrescenta 1 a numero5
                                                                                 //Repete a sequência até numero6 for igual a 3
                printf("Cavalo:\n");                                           //Mostra a palavra Cavalo
                printf("Cima\n");                                             //Mostra a palavra Baixo
               
            } printf("Cavalo:\n");                                           //Após executa o for,o while é executado ,executando mostra a palavra Cavalo
              printf("Direita\n");                                          //Mostra a palavra Direita

         }  return 0;                                                     //encerra o programa

         





      

          }