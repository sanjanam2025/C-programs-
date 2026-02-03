#include <stdio.h>

int main() {
    char email[100];
    char username[100];
    int i = 0;

    printf("Enter email address: ");
    scanf("%s", email);


    while (email[i] != '@' && email[i] != '\0') {
        username[i] = email[i];
        i++;
    }

    username[i] = '\0';

    if (email[i] == '@')
        printf("Username: %s\n", username);
    else
        printf("Invalid email address\n");

    return 0;
}
