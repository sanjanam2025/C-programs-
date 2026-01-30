#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);

    int visited[256] = {0};
    int start = 0, maxLen = 0, startIndex = 0;
    int hasDigit = 0;

    for (int end = 0; str[end] != '\0'; end++) {

        while (visited[str[end]]) {
            if (isdigit(str[start]))
                hasDigit = 0;
            visited[str[start]] = 0;
            start++;
        }

        visited[str[end]] = 1;
        if (isdigit(str[end]))
            hasDigit = 1;

        if (hasDigit && (end - start + 1) > maxLen) {
            maxLen = end - start + 1;
            startIndex = start;
        }
    }

    if (maxLen == 0) {
        printf("No valid substring found\n");
    } else {
        printf("Longest substring: ");
        for (int i = startIndex; i < startIndex + maxLen; i++)
            printf("%c", str[i]);
    }

    return 0;
}
