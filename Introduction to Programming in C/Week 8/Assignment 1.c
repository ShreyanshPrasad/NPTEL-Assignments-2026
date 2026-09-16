#include <stdio.h>

int main() {
    int n, m;
    int a[100][100];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int maxSum = 0;
    int maxRow = 0;

    /*
       Complete the code here.
    */
    for (int i = 0; i < n; i++) {
        int rowSum = 0;

        for (int j = 0; j < m; j++) {
            rowSum += a[i][j];
        }

        // Use > so that the first row is retained in case of a tie
        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRow = i;
        }
    }

    printf("Row %d\n", maxRow + 1);
    printf("Sum %d", maxSum);

    return 0;
}