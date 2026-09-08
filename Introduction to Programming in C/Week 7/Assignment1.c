#include <stdio.h>

struct Vector3D {
    int x;
    int y;
    int z;
};

struct Vector3D add(struct Vector3D a, struct Vector3D b);
struct Vector3D subtract(struct Vector3D a, struct Vector3D b);
int dotProduct(struct Vector3D a, struct Vector3D b);
struct Vector3D crossProduct(struct Vector3D a, struct Vector3D b);

int main() {
    struct Vector3D a, b;
    struct Vector3D sum, difference, cross;
    int dot;

    scanf("%d %d %d", &a.x, &a.y, &a.z);
    scanf("%d %d %d", &b.x, &b.y, &b.z);

    sum = add(a, b);
    difference = subtract(a, b);
    dot = dotProduct(a, b);
    cross = crossProduct(a, b);

    printf("%d %d %d\n", sum.x, sum.y, sum.z);
    printf("%d %d %d\n", difference.x, difference.y, difference.z);
    printf("%d\n", dot);
    printf("%d %d %d", cross.x, cross.y, cross.z);

    return 0;
}

/* Complete the following functions */

struct Vector3D add(struct Vector3D a, struct Vector3D b) {
    struct Vector3D result;

    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;

    return result;
}

struct Vector3D subtract(struct Vector3D a, struct Vector3D b) {
    struct Vector3D result;

    result.x = a.x - b.x;
    result.y = a.y - b.y;
    result.z = a.z - b.z;

    return result;
}

int dotProduct(struct Vector3D a, struct Vector3D b) {
    return (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
}

struct Vector3D crossProduct(struct Vector3D a, struct Vector3D b) {
    struct Vector3D result;

    result.x = (a.y * b.z) - (a.z * b.y);
    result.y = (a.z * b.x) - (a.x * b.z);
    result.z = (a.x * b.y) - (a.y * b.x);

    return result;
}