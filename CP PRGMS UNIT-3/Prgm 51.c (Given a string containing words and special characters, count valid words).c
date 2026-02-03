#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200], word[50];
    int i = 0, j = 0, validCount = 0;
    int isValid;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            if (j > 0) {
                word[j] = '\0';

                isValid = 1;
                for (int k = 0; k < j; k++) {
                    if (!isalpha(word[k])) {
                        isValid = 0;
                        break;
                    }
                }
                if (isValid)
                    validCount++;
                j = 0;
            }
            if (str[i] == '\0' || str[i] == '\n')
                break;
        } else {
            word[j++] = str[i];
        }
        i++;
    }

    printf("Number of valid words: %d\n", validCount);

    return 0;
}
