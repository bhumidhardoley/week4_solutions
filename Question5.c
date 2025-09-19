// A C program to reverse a given string

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0, temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the length of the string (excluding '\n' and '\0')
    while (str[j] != '\0') {
        if (str[j] == '\n') {  // remove newline from fgets
            str[j] = '\0';
            break;
        }
        j++;
    }

    // Reverse the string in place
    j = j - 1;  // last valid character index
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
