#include <stdio.h>
#include <string.h>

int checkAnagram(char w1[], char w2[], int n) {
    int freq[26] = {0};

    for (int i = 0; i < n; i++) {
        freq[w1[i] - 'A']++;
    }

    for (int i = 0; i < n; i++) {
        freq[w2[i] - 'A']--;
    }

    for (int i = 0; i < 26; i++) {
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

    if (strlen(w1) == strlen(w2) && strlen(w1) == n)
        isAnagram = checkAnagram(w1, w2, n);


    printf("%d", isAnagram);

    return 0;
}