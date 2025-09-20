#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWords(const char *str) {
    int count = 0;
    int inWord = 0;

    while (*str) {
        if (isspace(*str)) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            count++;
        }
        str++;
    }

    return count;
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline character if any
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    int wordCount = countWords(str);
    printf("Number of words: %d\n", wordCount);

    return 0;
}