#include <iostream>
#include <string>
#include <array>

using namespace std;

int find_min(int arr[], int min = INT_MAX, int search_ind = 0, int max = 5)
{
    cout << (sizeof(arr) / sizeof(arr[0])) << "\n";
    if (search_ind == max)
    {
        return min;
    }
    else
    {

        if (arr[search_ind] < min)
        {
            return find_min(arr, arr[search_ind], search_ind + 1);
        }
        return find_min(arr, min, search_ind + 1);
    }
}

int log2(int constant) {
    if (constant < 2) {
        return 0;
    }
    else {
        return 1 + log2(constant/2);
    }
}

int main() {
    int foo[5] = {1000, 1001, 999, -1, -4};
    //cout << find_min(foo);
    cout << log2(1);
}