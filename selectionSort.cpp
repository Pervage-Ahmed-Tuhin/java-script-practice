#include <iostream>

using namespace std;

int main()
{

    int arr[] = {8, 9, 4, 3, 2, 1, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "The array before sorting is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "The array after sorting is:" << endl;

    // for (int i = 0; i < n - 1; i++)
    // {
    //     int min = i;

    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[j] < arr[min])
    //         {
    //             min = j;
    //         }
    //     }
    //     if (min != i)
    //     {
    //         swap(arr[i], arr[min]);
    //     }
    // }

    for(int i=0 ;i<n-1;i++)
    {   int swap =0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap++;
            }
        }
        if(!swap)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}