#include <stdio.h>
#include <stdlib.h>

#define size 6


int compare(int* a, int* b) {
    return *a > *b;
  }

int main() {
    int ar[size];
    int kiltrik = 0;
    
    for (int c = 0; c < size; c++) {
        scanf_s("%d", &ar[c]);
    }

    qsort(ar, size, sizeof(int), compare); //compare - функтор

    for (int a = 0; a < size; a++) {
		printf("%d \n", ar[a]);
	}

    printf("\n");

    for (int y = 0; y < size; y++) {
        int i = y + 1;
        int u = i + 1;
        if (ar[i] + ar[u] > ar[y] && ar[i] + ar[y] > ar[u] && ar[y] + ar[u] > ar[i]) {
                    kiltrik++;
        }  
    }
    printf("\n%d \n", kiltrik);
}
	