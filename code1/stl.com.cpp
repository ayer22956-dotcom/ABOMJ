// reverse aary using stl

// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> reverse(vector<int> arr)
// {
//     vector<int> res = arr;
//     int st = 0;
//     int end = arr.size() - 1;
//     while (st <= end)
//     {
//         swap(res[st], res[end]);
//         st++;
//         end--;
//     }
//     return res;
// }

// void print(vector<int> arr)
// {

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     vector<int> arr;

//     arr.push_back(56);
//     arr.push_back(55);
//     arr.push_back(534);
//     arr.push_back(6);
//     arr.push_back(11);
//     vector<int> result = reverse(arr);
//     print(result);
//     return 0;
// }

// merging of arry in another arry (arr3[])

// #include <iostream>
// #include <vector>
// using namespace std;
// void margearr(int arr1[], int n, int arr2[], int m, int arr3[])
// {

//     int i = 0, j = 0, k = 0;
//     while (i < n && j < m)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             arr3[k++] = arr1[i++];
//         }
//         else
//         {
//             arr3[k++] = arr2[j++];
//         }
//     }
//     while (i < n)
//     {
//         arr3[k++] = arr1[i++];
//     }
//     while (j < m)
//     {
//         arr3[k++] = arr2[j++];
//     }
// }

// void print(int arr3[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr3[i] << " ";
//     }
// }

// int main()
// {

//     int n = 5;
//     int m = 3;
//     int arr1[5] = {1, 3, 5, 7, 9};
//     int arr2[3] = {2, 4, 6};
//     int arr3[m + n];
//     margearr(arr1, 5, arr2, 3, arr3);
//     cout << "margeing of arr1 and arr2 is =";
//     print(arr3, n + m);
// }

// mering array without using another array

// #include <iostream>
// using namespace std;

// void marged(int arr1[], int n, int arr2[], int m)
// {

//     int i = n - 1, k = m + n - 1, j = m - 1;

//     while (i >= 0 && j >= 0)
//     {
//         if (arr1[i] > arr2[j])
//         {
//             arr1[k--] = arr1[i--];
//         }
//         else
//         {
//             arr1[k--] = arr2[j--];
//         }
//     }
//     while (j >= 0)
//     {
//         arr1[k--] = arr2[j--];
//     }
// }

// void print(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int n = 5;
//     int m = 3;

//     int arr1[m + n] = {1, 3, 5, 7, 9, 0, 0, 0};
//     int arr2[m] = {2, 4, 6};
//     marged(arr1, n, arr2, m);
//     print(arr1, n + m);

//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------

//         rotated array

// #include <iostream>

// using namespace std;
// void rotate(int arr[], int n, int k)
// {
//     int arr2[5];

//     for (int i = 0; i < n; i++)
//     {
//         arr2[(i + k) % n] = arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = arr2[i];
//     }
// }

// int main()
// {

//     int k;
//     cin >> k;
//     int n = 5;
//     int arr[5] = {2, 3, 5, 4, 8};

//     rotate(arr, n, k);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
//     }
// }

// -------------------------------------------------------------------------------------------------------------------------------------

//      ------>  Check If array was sorted and rotated

#include <iostream>
#include <vector>
using namespace std;
bool check(int arr[], int n)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {

        if (arr[n - 1] > arr[n])
        {
            count++;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[0])
        {
            count++;
        }
    }
    return count <= 1;
}

int main()
{
    int arr[5] = {1, 1, 1, 2, 1};
    int n = 5;
    cout << check(arr, n);
}
