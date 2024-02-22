#include <cstring>
#include <iostream>

using namespace std;

int knapsack(int p[], int w[], int W, int n)
{

    int dp[n + 1][W + 1];
    memset(dp, 0, sizeof(dp));

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (w[i - 1] <= j)
            {

                dp[i][j] = max(p[i - 1] + dp[i - 1][j - w[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][W];
}

int main()
{
    int W = 8;
    int p[] = {1, 2, 5, 6};
    int w[] = {2, 3, 4, 5};

    int n = sizeof(p) / sizeof(p[0]);

    int ans = knapsack(p, w, W, n);
    cout << ans << endl;

    return 0;
}