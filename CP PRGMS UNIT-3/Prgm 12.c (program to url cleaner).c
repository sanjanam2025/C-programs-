#include <stdio.h>
#include <string.h>

int main() {
    char url[200], clean[200];
    int i = 0, j = 0;

    printf("Enter URL: ");
    gets(url);


    if (strncmp(url, "http://", 7) == 0)
        i = 7;
    else if (strncmp(url, "https://", 8) == 0)
        i = 8;


    if (strncmp(&url[i], "www.", 4) == 0)
        i += 4;


    while (url[i] != '\0' && url[i] != '?') {
        clean[j++] = url[i++];
    }


    if (j > 0 && clean[j - 1] == '/')
        j--;

    clean[j] = '\0';

    printf("Clean URL: %s\n", clean);

    return 0;
}
