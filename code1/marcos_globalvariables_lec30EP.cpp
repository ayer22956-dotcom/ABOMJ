#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
/*#define  PI 3.14 // not occupy extra space in memory and faster than compiler or (other data type like double , int , bool etc  )
using namespace std;

int main() {
    int R = 5;
    // double PI = 3.14 ; ||| -> *occupy extra space in memory*
    double area = PI* pow(R, 2); // pow(R, 2) --> R power of 2
    cout << area;

    return 0;
}
*/
//  # Globle Variable
/*
-> When we want to use the same variable with modified values in each of them, then we can use global variables as the changes done in one function are visible in all the others.
-> It saves time for passing the values by reference in the functions.

*/

/*int fun1(int &a, int &b)
{

    return (a > b) ? a : b;
}

int main()
{

    int a = 1, b = 3;
    int ans = 0;

    ans = fun1(a, b);
    cout << ans << endl;

    a = a + 2;
    b = b + 3;
    ans = fun1(a, b);
    cout << ans << endl;

    return 0;
}
    */
//  * default arrgument *
/*
==>  Sometimes we are unsure about any value(s) to be passed into the function as an argument.
Still, in the further calculations, we need to use them as it is necessary to use
them either by defined value or through some default value.
Default arguments in C++ serve this purpose.
Using these, we can specify a value to any variable in the function
declaration to some default value that could be used if no value is passed
to it by the function call.
*/

void fun1(int arr[], int n, int st = 0)
{

    for (int i = st; i < n; i++)
    {
        cout << "value's is : ";
        cout << arr[i];
    }
    cout << endl;
}
int main()
{
    int arr[] = {2, 3, 4, 5, 6, 9};
    int n = 6;
    int st; // --> you can change a starting printing index of array 

    if (st >= 0 && st < n)
    {
        fun1(arr, n, st);
    }
    else
    {
        cout << "enter the no btw less than '" << n << "' and greater than '0'";
    }

    return 0;
}
