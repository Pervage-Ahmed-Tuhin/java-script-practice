#include <iostream>
#include <algorithm>

using namespace std;

struct product
{

    int profit;
    int weight;
    double u_profit;
};

bool cmp(product a, product b)
{
    return a.u_profit > b.u_profit;
}

double fractionalKnapsack(product arr[], int n, int W)
{
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        arr[i].u_profit = arr[i].profit / arr[i].weight;
    }

    sort(arr, arr + n, cmp);

    for (int i = 0; i < n; i++)
    {
        if (arr[i].weight <= W)
        {
            W -= arr[i].weight;

            total += arr[i].profit;
        }
        else
        {
            total += arr[i].u_profit * (W / arr[i].weight);
            break;
        }
    }
    return total;
}

int main()
{

    int n = 7;
    int W = 15;

    int p[] = {10, 5, 15, 7, 6, 18, 3};
    int w[] = {2, 3, 5, 7, 1, 4, 1};

    product prod[n];
    for (int i = 0; i < n; i++)
    {
        prod[i].profit = p[i];
        prod[i].weight = w[i];
    }

    double ans = fractionalKnapsack(prod, n, W);

    cout << "The max profit is :" << ans << endl;
}
