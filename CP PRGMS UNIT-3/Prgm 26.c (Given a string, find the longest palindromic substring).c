#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end)
{
    while (start < end)
    {
        if (str[start] != str[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}

int main()
{
    char str[100];
    int i, j;
    int start = 0, maxLen = 1;
    int len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        for (j = i; j < len; j++)
        {
            if (isPalindrome(str, i, j) && (j - i + 1) > maxLen)
            {
                start = i;
                maxLen = j - i + 1;
            }
        }
    }

    printf("Longest Palindromic Substring: ");
    for (i = start; i < start + maxLen; i++)
        printf("%c", str[i]);

    printf("\nLength: %d\n", maxLen);

    return 0;
}
