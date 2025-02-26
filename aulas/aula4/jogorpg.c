#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  //variavel que captura o valor do dado
  int numeroDado;

  //variavel que gerencia a entrada e saida da estrutura de controle
  int saida = 1;

  //mudando a semente que gera numeros aleatorios
  srand(time(NULL));

  printf("O jogo começou!\n");
  
  
  while(saida){
    printf("Jogando o dado...\n");
    numeroDado = rand() % 6 + 1;
    printf("O numero sorteado foi: %d\n", numeroDado);
    
    printf("Deseja continuar? \n0 - Não\n1 - Sim\nEscolha: ");
    scanf("%d", &saida);
  }
    
    
    printf("O jogo acabou!\n");
    
    return 0;
    
}