#include <iostream>
using namespace std;

void binarySearch(int *arr, int n, int search)
{
    int s = 0, e = n;

    while (s <= e)
    {
        int middleEle = (s + e) / 2;
        if (arr[middleEle] > search)
        {
            e = middleEle - 1;
        }
        else if (arr[middleEle] < search)
        {
            s = middleEle + 1;
        }
        else if (arr[middleEle] == search)
        {
            cout << "WE got element on index" << middleEle;
            return;
        }
        else
            cout << "Element not present";
    }
}
void display(int *arr, int n, int search)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}
int main()
{

    int arr[] = {1, 5, 9, 12, 36, 56, 65, 98};

    int n = sizeof(arr) / sizeof(arr[0]);
    display(arr, n, 98);
    binarySearch(arr, n, 98);
    // display(arr, n, 36);

    return 0;
}