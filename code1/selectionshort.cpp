#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {4, 1, 7, 3, 9, 10};
    int countswap = 0;
    int n = 6;
    int copm = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int maxindex = i;
        for (int j = i + 1; j < n; j++)
        {

            copm++;

            if (arr[j] > arr[maxindex])
            {
                maxindex = j;
            }
        }
        if (i != maxindex)
        {
            swap(arr[i], arr[maxindex]);
            countswap++;
        }
    }
    cout << "total swap is " << countswap;
    cout << endl;
    cout << "total compairson is " << copm;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}