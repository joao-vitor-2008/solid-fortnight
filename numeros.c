#include<stdio.h>
#include<stdbool.h>

// variaveis
int arr[3];
int n = -1;


bool eh_mult(int n, int m) {
    return n % m == 0;
}

int main() {
    while(n != 0) {
    
        scanf("%d", &n);
    
        if(eh_mult(n, 11)) {
            if (eh_mult(n, 2)) arr[0]++;
            if (eh_mult(n, 3)) arr[1] += 1;
            if (eh_mult(n, 5)) arr[2] += 1;
        }
        else if(eh_mult(n, 7)) {
            if (eh_mult(n, 2)) arr[0] += 1;
            if (eh_mult(n, 3)) arr[1] += 1;
            if (eh_mult(n, 5)) arr[2] += 1;
        }
        else if(eh_mult(n, 13)) {
            if (eh_mult(n, 2)) arr[0] += 1;
            if (eh_mult(n, 3)) arr[1] += 1;
            if (eh_mult(n, 5)) arr[2] += 1;
        }
    }
    printf("2 | %d\n", arr[0]);
    printf("3 | %d\n", arr[1]);
    printf("5 | %d\n", arr[2]);
    return 0;
}