#include <bits/stdc++.h>
using namespace std;

int mini_mum_EidedDistance(string s1, string s2)
{

    int n;
    int m;

    n = s2.size();
    m = s1.size();
    int dp[n + 1][m + 1]; // one extra for the empty string


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            dp[0][j] = j;
            dp[i][0] = i;
        }
    }

    // This is the main portion

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[j - 1] == s2[i - 1]) // for reaching the 1st element and matching them
            {
                dp[i][j] = dp[i - 1][j - 1];
                
            }
            else
            {
                dp[i][j] = 1 + min(min(dp[i - 1][j], dp[i - 1][j - 1]), dp[i][j - 1]);
              
            }
        }
    }

    // back tracking

    int i =n;
    int j =m;

    while(i>0&&j>0)
    {
        if(s1[j-1]==s2[i-1])
        {
            i=i-1;
            j=j-1;
        }
        else{
            int min_i =i;
            int min_j=j-1;
            if(dp[i-1][j-1]<dp[i][j-1])
            {
                min_i=i-1;
                min_j=j-1;
            }
            else{
                min_i =i-1;
                min_j=j;
            }
        }
    }

    return dp[n][m];
}

int main()
{

    string s1 = "abcdef";
    string s2 = "ayced";

    int ans = mini_mum_EidedDistance(s1, s2);

    cout << ans << endl;

    return 0;
}