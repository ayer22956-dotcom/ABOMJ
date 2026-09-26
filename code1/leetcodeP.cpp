// /*

//         #problem 1 => 'Reverse Word in String '

// */

// // #include <iostream>
// // using namespace std;
// // void reverse(string &a, int st, int end)
// // {

// //     for (; st < end; st++, end--)
// //     {

// //         swap(a[st], a[end]);
// //     }
// // }
// // string mean(string &a)
// // {

// //     int st = 0;
// //     for (int i = 0; i <= a.size(); i++)
// //     {

// //         if (a[i] == ' ' || a[i] == a.length())
// //         {
// //             reverse(a, st, i - 1);
// //             // s += a;
// //             st = 1 + i;
// //         }
// //     }
// //     return a;
// // }

// // int main()
// // {

// //     string a = "djkana jaiasbc fkjasbcn o kjcs c";
// //     string s = "";
// //     cout << mean(a);

// //     return 0;
// // }

// /*

//        # problem 2 ==> " pair of 1's with min swapping in array"

// */

// #include <iostream>
// #include <vector>
// using namespace std;
// int swp(vector<int> &arr)
// {
//     int k = 0;
//     int count = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         // size of k
//         if (arr[i] == 1)
//         {
//             k++;
//         }
//     }
//     int countmax = 0;
//     for (int i = 0; i < k; i++)
//     {
//         if (arr[i] == 1)
//         {
//             count++;
//         }
//     }
//     countmax = count;
//     for (int i = k; i < arr.size(); i++)
//     {
//         count = count - (arr[i - k] == 1) + (arr[i] == 1);
//         countmax = max(countmax, count);
//     }
//     return k - countmax;
// }
// int main()
// {
//     vector<int> arr = {0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1};
//     cout << " Min swap " << swp(arr) << endl;
//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b;
    int multi = a;
    int c;
    int ans = 0;
    cout << "Enter a and b :";
    cin >> a >> b;
    cout << "value of a is :" << a << endl;
    cout << "value of b is :" << b << endl;
    int i = 0;
    while (i < b)
    {
        c = 2 + ans;
        ans = c;
        i++;
    }
    cout << "multiple of a and b is : " << ans << endl;
    return 0;
}