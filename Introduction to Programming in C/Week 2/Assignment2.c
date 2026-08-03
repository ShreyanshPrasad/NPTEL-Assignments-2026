#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int num;
    int current = 0, max = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            current++;
            if (current > max)
                max = current;
        } else {
            current = 0;
        }
    }

    printf("%d", max);

    return 0;
}