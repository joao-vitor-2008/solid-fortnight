#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// numeros
int index_numeros = 0;
int n = -1;
int i_impares;
int i_pares;
int contador;

// vetores
int pares[200];
int impares[200];

// funções extras
bool mult(int n, int m) {
    return n % m == 0;
}

void insert(int index, int n, int* arr) {
    arr[index] = n;
}

bool eh_primo(int n) {
    int res = 0;
    for(int i = 1; i < (n/2); i++) {
        if(n % i == 0) res++;
    }
    return res == 1;
}
// fim de extras

int main() {
    printf("Digite um numero inteiro\n");
    while(n != 0 && contador < 200) {
        scanf("%d", &n);
        if( mult(n,2) && mult(n,7) ){
            insert(i_pares, n, pares);
            i_pares++;
        }
        if( !mult(n,2) && eh_primo(n) ){
            insert(i_impares, n, impares);
            i_impares++;
        }

        contador++;
    }

    printf("Pares Multiplos de 7\n");
    for(int i=0; i <= i_pares; i++) printf("%d, ", pares[i]);
    
    printf("\nImpares primos\n");
    for(int i=0; i <= i_impares; i++) printf("%d, ", impares[i]);

    return 0;
}
