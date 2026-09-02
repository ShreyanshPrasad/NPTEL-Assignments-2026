#include <stdio.h>

/* Complete the function 
check if an n x n matrix A is symmetric
Return 1 if symmetric
Return 0 if not symmetric 
*/
int isSymmetric(int n, int A[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int n;
    
    // Read the size of the square matrix
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    int A[n][n];

    // Read the matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Check symmetry and print result
    printf("%d", isSymmetric(n, A));

    return 0;
}