#include <stdio.h>
#include <string.h>

int main() {
    char emails[10][50];
    char domains[10][50];
    int count[10] = {0};
    int n, i, j, k, found;

    printf("Enter number of email IDs: ");
    scanf("%d", &n);

    printf("Enter email IDs:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", emails[i]);
    }

    for (i = 0; i < n; i++) {

        char domain[50];
        k = 0;
        for (j = 0; emails[i][j] != '\0'; j++) {
            if (emails[i][j] == '@') {
                j++;
                while (emails[i][j] != '\0') {
                    domain[k++] = emails[i][j++];
                }
                break;
            }
        }
        domain[k] = '\0';


        found = 0;
        for (j = 0; j < i; j++) {
            if (strcmp(domains[j], domain) == 0) {
                count[j]++;
                found = 1;
                break;
            }
        }


        if (!found) {
            strcpy(domains[i], domain);
            count[i] = 1;
        }
    }

    printf("\nDomain Frequency:\n");
    for (i = 0; i < n; i++) {
        if (count[i] != 0)
            printf("%s : %d\n", domains[i], count[i]);
    }

    return 0;
}

