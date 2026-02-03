#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    while (str[i] != '\0' && str[i] != '\n') {
        i++;
    }


    for (j = 0; j < i; j++) {
        rev[j] = str[i - j - 1];
    }

    rev[j] = '\0';

    printf("Reversed string: %s\n", rev);

    return 0;
}
