#include <stdio.h>
#define N 8
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int matrix[N][N];
    printf("Enter the elements of the 8x8 matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Initial matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    int firstNeg = -1, lastPos = -1;
    for (int i = 0; i < N; i++) {
        if (matrix[i][N - 1 - i] < 0 && firstNeg == -1) {
            firstNeg = i;
        } else if (matrix[i][N - 1 - i] > 0) {
            lastPos = i;
        }
    }
    if (firstNeg != -1 && lastPos != -1) {
        swap(&matrix[firstNeg][N - 1 - firstNeg], &matrix[lastPos][N - 1 - lastPos]);
    }
    printf("\nMatrix after swap:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
