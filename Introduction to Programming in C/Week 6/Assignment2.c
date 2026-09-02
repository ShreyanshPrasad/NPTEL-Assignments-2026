#include <stdio.h>

int main() {
    int board[9][9];
    int i, j, k, r, c;
    int num;
    int valid = 1;

    // Read the 9x9 grid
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            scanf("%d", &board[i][j]);
        }
    }

    /* 1. Check Rows */
    for (i = 0; i < 9; i++) {
        int seen[10] = {0};

        for (j = 0; j < 9; j++) {
            num = board[i][j];

            if (num < 1 || num > 9 || seen[num]) {
                valid = 0;
                break;
            }

            seen[num] = 1;
        }

        if (!valid)
            break;
    }

    /* 2. Check Columns */
    if (valid) {
        for (j = 0; j < 9; j++) {
            int seen[10] = {0};

            for (i = 0; i < 9; i++) {
                num = board[i][j];

                if (num < 1 || num > 9 || seen[num]) {
                    valid = 0;
                    break;
                }

                seen[num] = 1;
            }

            if (!valid)
                break;
        }
    }

    /* 3. Check 3x3 Subgrids */
    if (valid) {
        for (r = 0; r < 9; r += 3) {
            for (c = 0; c < 9; c += 3) {
                int seen[10] = {0};

                for (i = r; i < r + 3; i++) {
                    for (j = c; j < c + 3; j++) {
                        num = board[i][j];

                        if (num < 1 || num > 9 || seen[num]) {
                            valid = 0;
                            break;
                        }

                        seen[num] = 1;
                    }

                    if (!valid)
                        break;
                }

                if (!valid)
                    break;
            }

            if (!valid)
                break;
        }
    }

    // Print result
    if (valid)
        printf("Valid Sudoku");
    else
        printf("Invalid Sudoku");

    return 0;
}