
// # ----> input of ARRAY

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {

//     vector<int> fog(5); // use for input of array without use bad hebites just like this int fog[i];.

//     for (int i = 0; i < 5; i++)
//     {
//         cout << "enter no = ";
//         cin >> fog[i];
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout << fog[i];
//     }
//

// -----------------------------------------------------------------------------------------------------------

//    ## --------> sum OF ARRAY;

// #include <iostream>
// #include <vector>
// using namespace std;
// void inaary(vector<int> &array, int n)
// {

//     for (int i = 0; i < n; i++)
//     {

//         cout << "enter array no = ";
//         cin >> array[i];
//     }
// }
// int arsum(vector<int> &array, int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + array[i];
//     }
//     return sum;
// }

// int main()
// {
//     int n;

//     cout << "enter n =";
//     cin >> n;
// vector<int> array(n);
//     inaary(array, n);
//     cout << "sum of array is = " << arsum(array, n);
//     return 0;
// }

// -----------------------------------------------------------------------------------------------

//   #4  -----> liner search => any x no. in ther a array so print 1-> mean true;

// #include <iostream>
// using namespace std;

// int search(int x)
// {
//     int array[5] = {3, 4, 5, 6, 7};

//     for (int i = 0; i < 5; i++)
//     {
//         if (array[i] == x)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int a;
//     cin >> a;

//     int ans = search(a);

//     if (ans == -1)
//         cout << "Not Found";
//     else
//         cout << "index no. is  = " << ans;

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------------

// #5 ----> reverse array print / FULL swap  array

// #include <iostream>
// using namespace std;
// void reverse(int arr[], int n)
// {
//     int st = 0;
//     int end = n - 1;

//     while (st < end)
//     {
//         swap(arr[st], arr[end]);
//         st++;
//         end--;
//     }
// }

// void printarr(int arr[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {

//         cout << arr[i] << " ";
//     }

//     cout << endl;
// }

// int main()
// {
//     int n;
//     cout << "enter n = ";
//     cin >> n;
//     if (6 >= n && n > 0)
//     {
//         int arr[6] = {4, 3, 5, 65, 6, -4};
//         reverse(arr, n);
//         printarr(arr, n);
//         return 0;
//     }
//     else
//     {
//         cout << " n is not greater than ZERO && less than equal to FIVE";
//     }
//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------------------

// #6 ------> side by side swap

// #include <iostream>

// using namespace std;

// void sideswap(int arr[], int n)
// {

//     for (int i = 0; i < n - 1; i += 2)
//     {

//         swap(arr[i], arr[i + 1]);
//     }
// }
// void print(int arr[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int n;
//     cout << " enter n = ";
//     cin >> n;

//     int arr[6] = {2, 4, 5, 6, 3, 9};
//     sideswap(arr, n);
//     print(arr, n);

//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------------------------

// reverse arr

#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> arr)
{
    vector<int> res = arr;
    int st = 0;
    int end = arr.size() - 1;
    while (st <= end)
    {
        swap(res[st], res[end]);
        st++;
        end--;
    }
    return res;
}

void print(vector<int> arr)
{

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr;

    arr.push_back(56);
    arr.push_back(55);
    arr.push_back(534);
    arr.push_back(6);
    arr.push_back(11);
    vector<int> result = reverse(arr);
    print(result);
    return 0;
}