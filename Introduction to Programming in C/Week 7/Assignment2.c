#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    char name[100];
    int physics;
    int chemistry;
    int maths;
};

// comparator for qsort
/* The compare() function should return a negative value
   if a should come before b, a positive value if a should
   come after b. */

int compare(const void *a, const void *b) {
    const struct Student *s1 = (const struct Student *)a;
    const struct Student *s2 = (const struct Student *)b;

    // Higher Physics marks first
    if (s1->physics != s2->physics) {
        return s2->physics - s1->physics;
    }

    // If Physics is equal, higher Chemistry marks first
    if (s1->chemistry != s2->chemistry) {
        return s2->chemistry - s1->chemistry;
    }

    // If both are equal, higher Mathematics marks first
    return s2->maths - s1->maths;
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student arr[100];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", arr[i].name, &arr[i].physics,
              &arr[i].chemistry, &arr[i].maths);
    }

    qsort(arr, n, sizeof(struct Student), compare);

    for (int i = 0; i < n; i++) {
        printf("%s %d %d %d\n", arr[i].name,
               arr[i].physics, arr[i].chemistry, arr[i].maths);
    }

    return 0;
}