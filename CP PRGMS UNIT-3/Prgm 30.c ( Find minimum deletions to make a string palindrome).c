#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    char str[100];
    int n, i, j, len;
    int dp[100][100];

    printf("Enter the string: ");
    scanf("%s", str);

    n = strlen(str);


    for (i = 0; i < n; i++)
        dp[i][i] = 1;


    for (len = 2; len <= n; len++) {
        for (i = 0; i <= n - len; i++) {
            j = i + len - 1;

            if (str[i] == str[j] && len == 2)
                dp[i][j] = 2;
            else if (str[i] == str[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
        }
    }

    int lps = dp[0][n - 1];
    int minDeletions = n - lps;

    printf("Minimum deletions to make palindrome: %d\n", minDeletions);

    return 0;
}
