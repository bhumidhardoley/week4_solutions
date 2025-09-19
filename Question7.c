//  A C program to read multiple lines of text and then count the number of characters , words and lines in the text

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char line[200];
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;

    printf("Enter text (type END on a new line to finish):\n");

    while (1) {
        fgets(line, sizeof(line), stdin);

        // Stop when user enters "END"
        if (strncmp(line, "END", 3) == 0 && (line[3] == '\n' || line[3] == '\0')) {
            break;
        }

        lineCount++;

        for (int i = 0; line[i] != '\0'; i++) {
            char ch = line[i];

            if (ch != '\n') {  // Don't count newline as a character
                charCount++;
            }

            if (isspace(ch)) {
                inWord = 0;  // We are between words
            } else if (inWord == 0) {
                inWord = 1;
                wordCount++;  // Start of a new word
            }
        }
    }

    printf("\nStatistics:\n");
    printf("Characters: %d\n", charCount);
    printf("Words: %d\n", wordCount);
    printf("Lines: %d\n", lineCount);

    return 0;
}
