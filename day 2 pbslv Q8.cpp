#include <stdio.h>
int main() {
    int asciiValue;
    printf("Enter an ASCII value (0-127): ");
    scanf("%d", &asciiValue);
    printf("The character for ASCII value %d is '%c'\n", asciiValue, asciiValue);
    return 0;
}
