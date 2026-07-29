#include <stdio.h>

int main()
{
    // Declare variables
    int a, b, result;
    char op;

    // Read the first integer, operator, and second integer
    scanf("%d %c %d", &a, &op, &b);

    // Perform the required operation

    // Complete the code here:
    if (op == '+')
        result = a + b;
    else if (op == '-')
        result = a - b;
    else
        result = a * b;

    // Print the result
    printf("%d", result);

    return 0;
}