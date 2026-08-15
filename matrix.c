#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* create_random_matrix(int m, int n){
  srand(time(NULL));   //gera uma seed aleatoria
  
  int* mtrz = malloc(sizeof(int) * (m*n));   //Aloca um espaço em brando na memoria do tamanho da matriz

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      mtrz[(i*n) + j] = (rand() % 200) + (-99);    //aleatoriza a matriz
    }
  }

  return mtrz;
}

void print_matrix(int* ptr, int m, int n){
  for(int i = 0; i < m; i++){
    printf("[");
    for(int j = 0; j < n; j++){
      printf(" %d ", ptr[(i*n) + j]);
    }
    printf("]\n");
  }
}

int main(){
  int m;
  int n;

  printf("n? ");
  scanf("%d", &m);
  printf("n? ");
  scanf("%d", &n);

  int* rm_ptr = create_random_matrix(m, n);

  print_matrix(rm_ptr, m, n);
  
  free(rm_ptr);

  return 0;
}
