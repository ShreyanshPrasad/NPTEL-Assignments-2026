#include <stdio.h>
#include <stdlib.h>

void genBinary(char *s, int i, int N) {
    if (i == N) {
        s[N] = '\0';
        printf("%s\n", s);
        return;
    }

    s[i] = '0';
    genBinary(s, i + 1, N);

    s[i] = '1';
    genBinary(s, i + 1, N);
}

int main(void) {
    char A[8];
    int n;
    scanf("%d", &n);
    genBinary(A, 0, n);
    return 0;
}