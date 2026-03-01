#include <stdio.h>            //Função para acessar as bibliotecas
int numero2 = 0;             //Declara o formato da variável numero 2(número inteiro) e o seu valor :0
int numero3 = 0;            //Declara o formato da variável numero 3(número inteiro) e o seu valor:0   
int Movimentocompleto= 1;   //Declara o formato da variável Movimentocompleto (número inteiro) e o seu valor :0


int main(){                                                //Função que faz ao programa rodar


     for(int numero1= 0;numero1<=4; numero1++){          //Estrutura de repetição que inicialização de numero1 no fmato de número inteiro, 1 ==0 e verifica se numero 1 é maior ou igual a cinco, se sim executa o código abaixo e acrescenta 1 a numero1 no final.
        printf("Torre:\n");                              //Mostra a palavra Torre
        printf("Direita\n");                            //Mostra a palavra Direita para mostra o movimento da torre
          

     } 

     printf("\n \n" );                                  //Faz um espaçamento
     
     while(numero2 <=4){                             //Estrutura de repetição que verifica se numero 2 è igula a 0
      printf("Bispo\n");                            //se sim mostra :Bispo
      printf("Cima,Direita\n");                    //Mostra a palavra cima e direita para mostrar o movimento do bispo
      numero2++  ;                                //Acrescenta 1 ao número2

     


      }
       printf("\n \n") ;                             //faz um espaçamento
      
      
      
      
      do{                                //Estrutura   de repetição que mostra a palavra Rainha e a palavra Esquerda para mostra o movimento da rainha           
         printf("Rainha:\n");           //Mostra a palavra Rainha 
         printf("Esquerda\n");         //mostra a palavra Esquerda
         numero3++;                   //Adiciona 1 a numero3

      } while(numero3<=7) ;//se numero3 for menor ou igual a 0 ,repete a sequencia   
        
      
       
      while(Movimentocompleto--)                           //Decrementa em 1 o movimentocompleto e executa o for
      {
         for(int numero5 = 0;numero5 <2;numero5 ++){      // função que inicializa o numero 5,verifica se numero5 é menor que 2 se sim executa o código e no final incremeta um  ao numero5
           printf("Cavalo:\n");                          //Mostra a palavra Cavalo duas vezes
           printf("Baixo:\n");                          //Mostra a palavra Baixo duas vezes
          }
           printf("Direita\n");                       //imprime Direita uma vez após finalizar o for

         } 
        }
