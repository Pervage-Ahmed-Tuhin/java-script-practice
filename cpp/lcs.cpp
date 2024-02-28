#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name1 = "president";
    string name2 = "providence";
    int m = name1.length(); // Length of name1
    int n = name2.length(); // Length of name2

    int container[m + 1][n + 1]; // Create a container for dynamic programming

    // Initialize the container with zeros
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            container[i][j] = 0;
        }
    }

    // Fill the container using dynamic programming
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (name1[i - 1] == name2[j - 1])
            {
                container[i][j] = container[i - 1][j - 1] + 1;
            }
            else
            {
                container[i][j] = max(container[i][j - 1], container[i - 1][j]);
            }
        }
    }

    // Length of the LCS is at container[m][n]
    int length_LCS = container[m][n];
    cout << "Length of Longest Common Subsequence: " << length_LCS << endl;

    // Backtrack to find the longest common subsequence
    string LCS = "";
    int i = m, j = n;
    while (i > 0 && j > 0)
    {
        if (name1[i - 1] == name2[j - 1])
        {
            LCS = name1[i - 1] + LCS;
            i--;
            j--;
        }
        else if (container[i - 1][j] > container[i][j - 1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }

    // Print the longest common subsequence
    cout << "Longest Common Subsequence: " << LCS << endl;

    return 0;
}
