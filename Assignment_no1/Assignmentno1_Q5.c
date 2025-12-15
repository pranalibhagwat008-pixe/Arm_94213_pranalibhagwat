#include <stdio.h>

// Function to check alphabet and perform XOR
void checkAlphabet(char ch) {
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("%c is an alphabet.\n", ch);

        // XOR with 32
        char xorResult = ch ^ 32;
        printf("After XOR with 32: %c\n", xorResult);
    } else {
        printf("%c is NOT an alphabet.\n", ch);
    }
}

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    checkAlphabet(ch);

    return 0;
}

