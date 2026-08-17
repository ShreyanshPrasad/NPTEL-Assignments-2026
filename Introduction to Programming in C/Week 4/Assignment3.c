#include <stdio.h>
#include <string.h>

int checkAnagram(char w1[], char w2[]) {
    int freq[256] = {0};

    for (int i = 0; w1[i] != '\0'; i++) {
        freq[(unsigned char)w1[i]]++;
    }

    for (int i = 0; w2[i] != '\0'; i++) {
        freq[(unsigned char)w2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0)
            return 0;
    }

    return 1;
}

int main() {
    char w1[21], w2[21];
    int n, isAnagram = 0;

    scanf("%d", &n);
    scanf("%s", w1);
    scanf("%s", w2);

    if (strlen(w1) == strlen(w2)) {
        isAnagram = checkAnagram(w1, w2);
    }

    printf("%d", isAnagram);

    return 0;
}