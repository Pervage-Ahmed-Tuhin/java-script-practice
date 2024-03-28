#include <bits/stdc++.h>
using namespace std;

int minimum_Edit_Distance(string s1, string s2) {
    int n = s2.size();
    int m = s1.size();
    int dp[n + 1][m + 1]; // DP table
    char operations[n + 1][m + 1]; // To store operations

    // Initialization
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;

    }


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[j - 1] == s2[i - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
                operations[i][j] = ' ';
            } else {
                dp[i][j] = 1 + min(min(dp[i - 1][j], dp[i - 1][j - 1]), dp[i][j - 1]);
                // Determine the operation
                if (dp[i][j] == dp[i - 1][j - 1] + 1)
                    operations[i][j] = 's';
                else if (dp[i][j] == dp[i - 1][j] + 1)
                    operations[i][j] = 'd';
                else
                    operations[i][j] = 'i';
            }
        }
    }


    string result = "";
  int i = n;
  int j = m;
    while (i > 0 || j > 0) {
        if (operations[i][j] == ' ') {
            result = s1[j - 1] + result;
            i--;
            j--;
        } else if (operations[i][j] == 's') {
            result = s1[j - 1] + result;
            i--;
            j--;
        } else if (operations[i][j] == 'd') {
            result = s1[j - 1] + result;
            j--;
        } else { // Insertion
            result = s2[i - 1] + result;
            i--;
        }
    }

    cout << "Modified String: " << result << endl;

    return dp[n][m];
}

int main() {
    string s1 = "abcdef";
    string s2 = "ayced";

    int ans = minimum_Edit_Distance(s1, s2);

    cout << "Minimum Edit Distance: " << ans << endl;

    return 0;
}
