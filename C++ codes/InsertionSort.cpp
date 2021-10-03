#include <iostream>
using namespace std;

void swap(int arr[], int j, int k)
{
    int temp = arr[j];
    arr[j] = arr[k];
    arr[k] = temp;
}

void insertionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;

        while (j > 0)
        {
            if (arr[j - 1] > arr[j])
            {
                swap(arr, j, j - 1);
            }
            j--;
        }
    }
}
int main()
{

    int arr[] = {5, 0,5455,-55, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}