#include <iostream>
#include <algorithm>
using namespace std;


struct product{
    int profit;
    int weight;
    double u_profit;
};



bool cmp(product a ,product b){
    if(a.u_profit>b.u_profit)
    {
        return a.u_profit;
    }
}


double Fractional(product arr[],int n,int W)
{   
    double total = 0;

    for(int i=0 ;i<n;i++)
    {
        arr[i].u_profit = double(arr[i].profit)/arr[i].weight;
    }

    sort(arr,arr+n,cmp);

    for(int i=0;i<n;i++)
    {
        if(arr[i].weight<=W)
        {
            W-=arr[i].weight;
            total +=arr[i].profit; 
        }
        else
        {
            total+=arr[i].profit * (W/arr[i].weight);
            break;
        }

    }

    return total;


}


int main()
{

    int n=3;
    int W =50;
    // int p[]={500000,200000,50000};
    // int w[]={5,3,2};
     int p[] = {200000, 100000, 500000};
    int w[] = {5, 3, 20};

    product prod[n];

    for(int i=0;i<n;i++){
        prod[i].profit = p[i];
        prod[i].weight = w[i];
    }

    double ans = Fractional(prod , n, W);
    cout<<"The profit is  :"<<ans<<endl;


}
