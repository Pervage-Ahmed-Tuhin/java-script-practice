#include <iostream>

using namespace std;

void printMerge(int arr[], int lb, int up)
{
    cout << "The array after the sort is:" << endl;
    for (int i = lb; i <= up; i++)
    {
        cout << arr[i] << " ";
    }
}

void merge(int arr[], int lb, int mid, int up)
{
    int i = lb;
    int j = mid + 1;
    int k = lb;
    int arr2[up + 1];

    while (i <= mid && j <= up)
    {
        if (arr[i] <= arr[j])
        {
            arr2[k] = arr[i];
            i++;
        }
        else
        {
            arr2[k] = arr[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j <= up)
        {
            arr2[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            arr2[k] = arr[i];
            i++;
            k++;
        }
    }

    for (int i=lb; i<= up; i++)
    {
        arr[i] = arr2[i];
    }
}

void mergeSort(int arr[], int lb, int up)
{
    if (lb < up)
    {
        int mid = lb + (up - lb) / 2;

        mergeSort(arr, lb, mid);
        mergeSort(arr, mid + 1, up);
        merge(arr, lb, mid, up);
    }
}

int main()
{

    int arr[] = {9, 2, 1, 4, 8, 7, 6, 0};
    int up = sizeof(arr) / sizeof(arr[0]) - 1;
    int lb = 0;

    cout << "the array before sorting is:" << endl;

    for (int i = lb; i < up; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout << endl;
    mergeSort(arr, lb, up);

    printMerge(arr, lb, up);
}