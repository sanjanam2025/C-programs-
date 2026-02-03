#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[50];
    int digitCount = 0;

    printf("Enter phone number: ");
    scanf("%s", str);


    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i]))
            digitCount++;
    }

    int maskCount = digitCount - 4;


    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            if (maskCount > 0) {
                str[i] = '*';
                maskCount--;
            }
        }
    }

    printf("Masked data: %s\n", str);

    return 0;
}
