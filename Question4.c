//A C program to compare two strings 
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, flag = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Compare character by character
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            flag = 1;  // Strings are different
            break;
        }
        i++;
    }

    // If one string ended but not the other
    if ((str1[i] != '\0' || str2[i] != '\0') && flag == 0) {
        flag = 1;
    }

    if (flag == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}
