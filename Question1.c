// A c program to find the length of a String

#include <stdio.h>

int main() {
    char str[100];   
    int length = 0;  

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input string (with spaces)

    // Loop through each character until '\0' is found
    while (str[length] != '\0') {
        length++;
    }

    // fgets() also stores '\n' before '\0' if there's space,
    // so remove it from the count if present
    if (str[length - 1] == '\n') {
        length--;
    }

    printf("Length of the string is: %d\n", length);

    return 0;
}
