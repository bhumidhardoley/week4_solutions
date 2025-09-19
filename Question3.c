// A C program to append a string to another string
#include <stdio.h>

int main() {
    char str1[200], str2[100];
    int i = 0, j = 0;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters added by fgets (if any)
    while (str1[i] != '\0') {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }

    while (str2[j] != '\0') {
        if (str2[j] == '\n') {
            str2[j] = '\0';
            break;
        }
        j++;
    }

    // Append str2 at the end of str1
    i = 0;
    while (str1[i] != '\0') {
        i++;
    }

    j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';  // Add null terminator at the end

    printf("Appended string: %s\n", str1);

    return 0;
}
