#include <iostream>

using namespace std;

int main()
{

    int arr[6] = {6, 5, 2, 3, 1, 10};

    cout<<"The array before sorting is:"<<endl;

    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<"The array after sorting is:"<<endl;


    for(int i=0 ; i<6;i++)
    {
        int temp = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>=temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

     for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}