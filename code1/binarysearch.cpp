#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int st, end, mid;
    st = 0;
    end = size - 1;
    mid = (st + end) / 2;

    while (st <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (st + end) / 2;
    }
    return -1;
}

int main()
{
    int key = 100;
    int arr[6] = {2, 4, 6, 76, 86, 100};
    cout << "key index is = " << binarysearch(arr, 6, key) << endl;

    return 0;
}