#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10], i, j, k, m, n, p, q;

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of the first matrix: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d%d", &p, &q);
    if (n != p) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }
    printf("Enter the elements of the second matrix: \n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("The product of the matrices is: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
