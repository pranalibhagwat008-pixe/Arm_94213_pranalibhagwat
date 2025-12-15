#include <stdio.h>

void swapXOR(int *a, int *b)
{
    *a = *a ^ *b;   // Step 1
    *b = *a ^ *b;   // Step 2
    *a = *a ^ *b;   // Step 3
}

int main()
{
    int x, y;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    printf("\nBefore swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    swapXOR(&x, &y);

    printf("\nAfter swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

