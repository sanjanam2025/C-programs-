#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int key;

    printf("Enter a string: ");
    gets(str);

    printf("Enter key (shift value): ");
    scanf("%d", &key);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (isupper(ch)) {
            str[i] = (ch - 'A' + key) % 26 + 'A';
        }
        else if (islower(ch)) {
            str[i] = (ch - 'a' + key) % 26 + 'a';
        }

    }

    printf("Encrypted string: %s\n", str);

    return 0;
}
