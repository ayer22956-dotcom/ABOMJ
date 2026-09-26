// // // #include <iostream>
// // // using namespace std;

// // // int sum(int n)
// // // {

// // //     int sum = 0;

// // //     for (int i = 1; i <= n; i++)
// // //     {

// // //         cout << i << " ";
// // //     }
// // //     return sum;
// // // }
// // // int main()
// // // {
// // //     int n;
// // //     cin >> n;
// // //     int count = sum(n);
// // //     cout << " sum is " << count << endl;
// // //     return 0;
// // // }

// // #include <iostream>
// // using namespace std;
// // bool iseven(int num)
// // {
// //     if (num % 2 == 0)
// //     {
// //         return true;
// //     }
// //     else
// //         return false;
// // }

// // int main()
// // {
// //     int num1;
// //     cin >> num1;

// //     bool resulXt;
// //     resulXt = iseven(num1);
// //     cout << resulXt << endl;
// // }

// #include <iostream>
// using namespace std;

// int ap(int n)
// {
//     int AP;
//     AP = 3 * n + 7;
//     return AP;
// }

// int main()
// {

//     int m;
//     cin >> m;

//     cout << ap(m) << endl;

//     int j;
//     cin >> j;

//     cout << ap(j)<< endl;

//     return 0;
// }

#include <iostream>
using namespace std;

void fib(int n)
{
    int a = 0, b = 1;
    cout << a << " " << b << " ";

    for (int i = 1; i <= n - 2; i++)
    {
        int nextnumber = a + b;
        cout << nextnumber << " ";
        a = b;
        b = nextnumber;
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    fib(n);
    return 0;
}
