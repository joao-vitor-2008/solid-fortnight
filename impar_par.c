#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// numeros
int index_numeros = 0;
int n = -1;

// vetores
int numeros[200];

// funções extras
bool mult(int n, int m) {
    return n % m == 0;
}

void insert(int index, int n, int* arr) {
    arr[index] = n;
}

bool eh_primo(int n) {
    int res = 0;
    for(int i = 0; i < (n/2); i++) {
        if(n % i == 0) res++;
    }
    return res == 1;
}
// fim de extras

int main() {
    printf("Digite um numero inteiro\n");
    while(n != 0 && qtd_n < 200) {
        scanf("%d", &n);
        insert(index_numeros, n, numeros);
        qtd_n++;
    }
    
    for(int i=0, i <= index_numeros, i++){
        if()
    }
    }
    
    printf("Pares multiplos de 7\n");
    for(int j = 0; j <= i_par; j++){
        if(mult(pares[j], 7)) printf("%d, ", pares[j]);
    }
    printf("\nImpares primos\n");
    for(int j = 0; j <= i_impar; j++){
        if(eh_primo(impares[j])) printf("%d", impares[j]);
    }
    
    return 0;
}
