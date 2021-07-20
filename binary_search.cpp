#include <iostream>
using namespace std;

int binary_search(int arr[], int search_num, int low, int high)
{
    if (low > high)
    {
        return -1;
    }
    else
    {
        int mid = (high + low) / 2;
        if (search_num == arr[mid])
        {
            return mid;
        }
        else if (search_num > arr[mid])
        {
            return binary_search(arr, search_num, mid + 1, high);
        }
        else
        {
            return binary_search(arr, search_num, low, (high - low) / 2 - 1);
        }
    }
}

int main()
{
    int foo[5] = {1, 2, 3, 4, 5};
    cout << binary_search(foo, 1, 0, 4);
    return 0;
}