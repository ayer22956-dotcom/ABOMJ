// // // // // // // // // using namespace std;
// // // // // // // // // int main()
// // // // // // // // // #include <iostream>
// // // // // // // // // {

// // // // // // // // //     int n;
// // // // // // // // //     cin >> n;
// // // // // // // // //     int arr[4] = {2, 3, 5, 4};
// // // // // // // // //     for (int i = 0; i < n; i++)
// // // // // // // // //     {
// // // // // // // // //         cout << arr[i];

// // // // // // // // //         cout << i;
// // // // // // // // //     }

// // // // // // // // //     return 0;
// // // // // // // // // }
// // // // // // // // #include <iostream>
// // // // // // // // using namespace std;

// // // // // // // // int stactic(int a, int b)
// // // // // // // // {
// // // // // // // //     static int c = -3;
// // // // // // // //     c = c + 1;
// // // // // // // //     a = a + 1;
// // // // // // // //     b = b + 1;

// // // // // // // //     return a + b + c;
// // // // // // // // }

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     int a = 2;
// // // // // // // //     int b = 4;
// // // // // // // //     cout << stactic(a, b) << endl;
// // // // // // // //     cout << stactic(a, b) << endl;
// // // // // // // //     cout << stactic(a, b) << endl;

// // // // // // // //     return 0;
// // // // // // // // }
// // // // // // // #include <iostream>
// // // // // // // using namespace std;
// // // // // // // int constx(int a, int b, const int c = 4)
// // // // // // // {
// // // // // // //     // const int c = 4;
// // // // // // //     return a + b + c;
// // // // // // // }

// // // // // // // int main()
// // // // // // // {
// // // // // // //     int a = 2;
// // // // // // //     int b = 3;
// // // // // // //     int c = 1;
// // // // // // //     c++;
// // // // // // //     // int c = 1;
// // // // // // //     cout << constx(a, b, c);

// // // // // // //     return 0;
// // // // // // // }
// // // // // // #include <iostream>
// // // // // // using namespace std;

// // // // // // int main()
// // // // // // {
// // // // // //     // convert to small into big char
// // // // // //     char ch = 'z';
// // // // // //     char result;
// // // // // //     /*  logic was ch or 'a' me se diff nikalo
// // // // // //     diff ko big char me add kardo */
// // // // // //     result = ch - 'a' + 'A';
// // // // // //     cout << result;

// // // // // //     return 0;
// // // // // // }
// // // // // #include <iostream>
// // // // // using namespace std;

// // // // // int main()
// // // // // {

// // // // //     string a = {0};
// // // // //     cin >> a;
// // // // //     cout << a;
// // // // //     return 0;
// // // // // }

// // // // #include <iostream>
// // // // using namespace std;

// // // // int main()
// // // // {

// // // //     string s = "sttsif isf";
// // // //     for (int i = 0; i < s.length(); i++)
// // // //     {
// // // //         if (s[i] == ' ')
// // // //         {

// // // //             s.push_back(40);
// // // //         }
// // // //         s.push_back(4);
// // // //         cout << s[i];
// // // //     }

// // // //     return 0;
// // // // }
// // // #include <iostream>
// // // #include <vector>
// // // using namespace std;

// // // int main()
// // // {
// // //     int arr[6] = {1, 2, 3, 5, 6};
// // //     cout << " 1 " << sizeof(arr) / sizeof(arr[0]) << "\n";
// // //     vector<int> a = {1, 2, 3, 4, 5, 6, 5};
// // //     cout << a.size();
// // //     return 0;
// // // }
// // #include <iostream>
// // #include <vector>
// // using namespace std;

// // void printsubset(vector<int> &arr, vector<int> &ans, vector<vector<int>> &allsubset, int i)
// // {

// //     if (i == arr.size())
// //     {

// //         allsubset.push_back(ans);
// //         return;
// //     }
// //     // For include are sunset elements.
// //     ans.push_back(arr[i]);
// //     printsubset(arr, ans, allsubset, i + 1); // move array elements form next index
// //     // Exclude are elements
// //     ans.pop_back(); // imp -->> BackTeacking
// //     printsubset(arr, ans, allsubset, i + 1);
// // }

// // int main()
// // {
// //     int n;
// //     cout << "Enter value of n :";
// //     cin >> n;
// //     vector<int> arr(n);
// //     if (n > 1)
// //     {
// //         for (int i = 0; i < n; i++)
// //         {
// //             cin >> arr[i];
// //         }
// //     }

// //     vector<vector<int>> allsubset;

// //     vector<int> ans; // store are elements
// //     printsubset(arr, ans, allsubset, 0);
// //     for (auto subset : allsubset) //  => for (int i = 0; i < allsubset.size(); i++)
// //     {
// //         cout << "{ ";

// //         for (int x : subset) // ==>> for (int i = 0; i < subset.size(); i++)
// //             cout << x << " ";

// //         cout << "}\n";
// //     }

// //     return 0;
// // }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 4, 5, 4, 6, 3};
//     sort(arr.begin(), arr.end());
//     for (int x : arr)
//     {
//         cout << x;
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[6] = {2, 4, 6, 3, 7, 4};
    int st = 0;
    int end = 6;
    int mid = st + end / 2;

    for (int i = 0; i < mid; i++)
    {
        cout << arr[i];
    }

    return 0;
}