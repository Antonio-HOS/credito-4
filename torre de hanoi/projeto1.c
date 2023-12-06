#include <stdio.h>

int count = 0; 
int quantidade = 4; 

void TorreHanoi(int origem, int destino, int auxiliar, int quantidade, int xau){
  if( quantidade == 1 ){
    printf("Move de %d para %d\n", origem, destino);
    count+=1;
    // if(xau==1){
    //   printf("-->aaa\n");
    // }else if(xau==2){
    //    printf("-->bbb\n");
    // }else if(xau==3){
    //    printf("-->ccc\n");

    // };
  }else{
    TorreHanoi(origem, auxiliar, destino, quantidade-1,1);
    TorreHanoi(origem, destino, auxiliar, 1,2);
    TorreHanoi(auxiliar, destino, origem, quantidade-1,3);
  }
}

int main(){
  TorreHanoi(1, 3, 2, quantidade, 0);
  printf("\nQuantidade de Discos: %d\n", quantidade);
  printf("Numero minimo de movimentos: %d\n\n", count);
  return 0;
}