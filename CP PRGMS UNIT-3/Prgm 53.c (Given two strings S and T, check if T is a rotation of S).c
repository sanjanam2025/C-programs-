#include <stdio.h>
#include <string.h>

int isRotation(char S[], char T[]) {
    int lenS = strlen(S);
    int lenT = strlen(T);

    if (lenS != lenT)
        return 0;

    char temp[2 * lenS + 1];
    strcpy(temp, S);
    strcat(temp, S);


    if (strstr(temp, T) != NULL)
        return 1;
    else
        return 0;
}

int main() {
    char S[100], T[100];

    printf("Enter string S: ");
    scanf("%s", S);

    printf("Enter string T: ");
    scanf("%s", T);

    if (isRotation(S, T))
        printf("T is a rotation of S.\n");
    else
        printf("T is not a rotation of S.\n");

    return 0;
}
