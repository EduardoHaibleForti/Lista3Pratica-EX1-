#include <stdio.h>
#include <stdlib.h>

void rotateArray(int arr[], int n, int rotations, char direction) {
    int temp[n];


    rotations = rotations % n;


    if (direction == 'E') {
        rotations = n - rotations;
    }


    for (int i = 0; i < n; i++) {
        temp[(i + rotations) % n] = arr[i];
    }


    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, rotations;
    char direction;


    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Digite os elementos do array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Digite o n�mero de rota��es: ");
    scanf("%d", &rotations);


    printf("Digite a dire��o da rota��o (E para esquerda, D para direita): ");
    scanf(" %c", &direction);


    rotateArray(arr, n, rotations, direction);


    printf("Array ap�s a rota��o:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

