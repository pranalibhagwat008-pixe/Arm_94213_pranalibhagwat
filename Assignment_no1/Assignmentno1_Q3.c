#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num, i;

    if (argc != 2) {
        printf("Usage: %s number\n", argv[0]);
        return 0;
    }

    num = atoi(argv[1]);

    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 0;
    }

    printf("Binary representation of %d is: ", num);

    for (i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");

    return 0;
}

