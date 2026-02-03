#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int freq[256] = {0};
    int n, idx = 0;
    char prev = '\0';

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);


    for (int i = 0; i < n; i++)
        freq[str[i]]++;

    for (int i = 0; i < n; i++) {
        int max = 0;
        char ch = '\0';


        for (int j = 0; j < 256; j++) {
            if (freq[j] > max && j != prev) {
                max = freq[j];
                ch = j;
            }
        }


        if (ch == '\0') {
            printf("Not possible to rearrange\n");
            return 0;
        }

        result[idx++] = ch;
        freq[ch]--;
        prev = ch;
    }

    result[idx] = '\0';

    printf("Rearranged string: %s\n", result);
    return 0;
}
