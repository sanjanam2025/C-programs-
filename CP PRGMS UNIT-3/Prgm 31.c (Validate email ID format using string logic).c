#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    int atCount = 0, dotCount = 0;
    int atPos = -1, dotPos = -1;

    printf("Enter email ID: ");
    scanf("%s", email);

    int len = strlen(email);


    for (int i = 0; i < len; i++) {
        if (email[i] == ' ') {
            printf("Invalid Email ID\n");
            return 0;
        }
        if (email[i] == '@') {
            atCount++;
            atPos = i;
        }
        if (email[i] == '.') {
            dotCount++;
            dotPos = i;
        }
    }


    if (atCount == 1 &&
        dotCount >= 1 &&
        atPos > 0 &&
        dotPos < len - 1 &&
        atPos < dotPos) {
        printf("Valid Email ID\n");
    } else {
        printf("Invalid Email ID\n");
    }

    return 0;
}
