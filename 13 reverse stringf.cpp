#include <stdio.h>
#include <string.h>
void printReverse(char str[], int length) {
    if (length == 0) {
        return;  
    } else {
        printf("%c", str[length - 1]);
        printReverse(str, length - 1);
    }
}

int main() {
    char inputString[100];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0';
    int length = strlen(inputString);
    printf("Reverse of the string: ");
    printReverse(inputString, length);

    return 0;
}

