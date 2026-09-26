#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int count = 0;
    int arr[5] = {5, 2, 3, 1, 3};
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] >= key)
        {
            arr[j + 1] = arr[j];

            count++;

            j--;
        }
        arr[j + 1] = key;
    }
    cout << "total count is " << count;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}
