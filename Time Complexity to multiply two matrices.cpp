#include <stdio.h>
#include <time.h>
#define N 100
void multiplyMatrix(int A[N][N], int B[N][N], int C[N][N], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            C[i][j] = 0;
            for (int k = 0; k < size; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
int main() {
    int A[N][N], B[N][N], C[N][N];
    int size;

    printf("Enter the size of the matrices: ");
    scanf("%d", &size);

    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    clock_t start_time = clock(); 
    multiplyMatrix(A, B, C, size);
    clock_t end_time = clock(); 
    printf("Product of matrices A and B:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Time taken for multiplication: %f seconds\n", time_taken);

    return 0;
}

