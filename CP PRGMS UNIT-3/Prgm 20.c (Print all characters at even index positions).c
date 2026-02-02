#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Characters at even index positions:\n");
    for (i = 0; str[i] != '\0'; i++)
    {
        if (i % 2 == 0 && str[i] != '\n')
            printf("%c ", str[i]);
    }

    return 0;
}
