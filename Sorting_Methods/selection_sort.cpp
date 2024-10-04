#include<bits/stdc++.h>
using namespace std;

void selection_Sort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int min_index = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[min_index] > arr[j])
            {
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main()
{
    int arr[] = {13,24,19, 18, 4, 44};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_Sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}