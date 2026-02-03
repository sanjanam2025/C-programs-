#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char pwd[50];
    int upper = 0, lower = 0, digit = 0, special = 0;

    printf("Enter password: ");
    scanf("%s", pwd);

    int len = strlen(pwd);

    for (int i = 0; i < len; i++) {
        if (isupper(pwd[i]))
            upper = 1;
        else if (islower(pwd[i]))
            lower = 1;
        else if (isdigit(pwd[i]))
            digit = 1;
        else
            special = 1;
    }

    if (len < 8 || len > 15) {
        printf("Weak Password\n");
    }
    else if (upper && lower && digit && special) {
        printf("Strong Password\n");
    }
    else if ((upper || lower) && digit) {
        printf("Moderate Password\n");
    }
    else {
        printf("Weak Password\n");
    }

    return 0;
}
