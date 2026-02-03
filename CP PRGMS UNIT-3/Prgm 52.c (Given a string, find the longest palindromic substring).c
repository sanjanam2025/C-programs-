#include <stdio.h>
#include <string.h>


int isPalindrome(char str[], int start, int end) {
    while (start < end) {
        if (str[start] != str[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}

int main() {
    char str[100], longest[100];
    int i, j, len, maxLen = 0, startIndex = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            if (isPalindrome(str, i, j)) {
                if (j - i + 1 > maxLen) {
                    maxLen = j - i + 1;
                    startIndex = i;
                }
            }
        }
    }


    for (i = 0; i < maxLen; i++) {
        longest[i] = str[startIndex + i];
    }
    longest[maxLen] = '\0';

    printf("Longest palindromic substring: %s\n", longest);

    return 0;
}
