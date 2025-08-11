#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{

    int pivot = arr[s];

    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // place pivot at right place
    int pivot_index = s + count;
    swap(arr[pivot_index], arr[s]);

    int i = s;
    int j = e;

    while (i < pivot_index && j > pivot_index)
    {

        while (arr[i] <= arr[pivot_index])
        {
            i++;
        }
        while (arr[j] > arr[pivot_index])
        {
            j--;
        }

        if (i < pivot_index && j > pivot_index)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivot_index;
}

void quick_sort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    // partition
    int p = partition(arr, s, e);

    // sort
    quick_sort(arr, s, p - 1);
    quick_sort(arr, p + 1, e);
}

int main()
{
    int arr[8] = {6, 6, -6, -2, -4, -6, 2, -6};
    int n = 8;

    quick_sort(arr, 0, n - 1);

    cout << "sorted array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}