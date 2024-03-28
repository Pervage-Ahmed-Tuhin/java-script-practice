#include <bits/stdc++.h>
using namespace std;

int minimum_Edit_Distance(string s1, string s2) {
    int n = s2.size();
    int m = s1.size();
    int dp[n + 1][m + 1]; // DP table

    // Initialization
    for (int i = 0; i <= n; i++) {
        dp[i][0] = i;
    }
    for (int j = 0; j <= m; j++) {
        dp[0][j] = j;
    }

    // Main DP loop
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[j - 1] == s2[i - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = 1 + min(min(dp[i - 1][j], dp[i - 1][j - 1]), dp[i][j - 1]);
            }
        }
    }

    // Backtrack to reconstruct the modified string
    string result = "";
    int i = n, j = m;
    while (i > 0 && j > 0) {
        if (s1[j - 1] == s2[i - 1]) {
            result = s1[j - 1] + result;
            i--;
            j--;
        } else if (dp[i][j] == dp[i - 1][j - 1] + 1) {
            result = s2[i - 1] + result;
            i--;
            j--;
        } else if (dp[i][j] == dp[i - 1][j] + 1) {
            result = s2[i - 1] + result;
            i--;
        } else { // dp[i][j] == dp[i][j - 1] + 1
            result = s1[j - 1] + result;
            j--;
        }
    }

    // Handle remaining characters in s1 or s2
    while (i > 0) {
        result = s2[i - 1] + result;
        i--;
    }
    while (j > 0) {
        result = s1[j - 1] + result;
        j--;
    }

    cout << "Modified String: " << result << endl;

    return dp[n][m]; // Return the minimum edit distance
}

int main() {
    string s1 = "abcdef";
    string s2 = "ayced";

    int ans = minimum_Edit_Distance(s1, s2);

    cout << "Minimum Edit Distance: " << ans << endl;

    return 0;
}
