#include <stdio.h>
#include <locale.h>

//Nível 3: Algoritmos Avançados (31-50)

//Ordenação por Selection Sort: Implemente o algoritmo de ordenação Selection Sort.

// Função para realizar a ordenação por Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;

    for (i = 0; i < n - 1; i++) {
        // Encontra o índice do menor elemento na parte não ordenada
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Troca o menor elemento encontrado com o primeiro elemento não ordenado
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
	 setlocale(LC_ALL, "");
	 
    int arr[10];
    int i;

    // Pede ao usuário para inserir 10 números
    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Ordena o array usando Selection Sort
    selectionSort(arr, 10);

    // Exibe a lista ordenada
    printf("Lista ordenada:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
