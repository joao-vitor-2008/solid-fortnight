#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* create_random_matrix(int m, int n) {
	int* mtrz = malloc(sizeof(int) * (m * n));

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			mtrz[(i * n) + j] = (rand() % 200) - 99;
		}
	}

	return mtrz;
}

void print_matrix(int* ptr, int m, int n) {
	for (int i = 0; i < m; i++) {
		printf("[");
		for (int j = 0; j < n; j++) {
			printf(" %3d ", ptr[(i * n) + j]);
		}
		printf("]\n");
	}
}

int max(int* arr, int size) {
	int max_val = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max_val) {
			max_val = arr[i];
		}
	}
	return max_val;
}

int main() {
	srand(time(NULL));

	int m, n;

	printf("Linhas (m)? ");
	scanf("%d", &m);
	printf("Colunas (n)? ");
	scanf("%d", &n);

	int* rm_ptr = create_random_matrix(m, n);

	print_matrix(rm_ptr, m, n);

	int ma = max(rm_ptr, m * n);
	printf("Maior elemento: %d\n", ma);

	free(rm_ptr);

	return 0;
}
