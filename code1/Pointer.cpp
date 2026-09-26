#include <iostream>
#include <vector>
using namespace std;

/*
void test(int *p, int x)
{

    x++;
    cout << "-> without pointer incriment variable value is " << x << endl;
    cout << "-> @ add of x in function is " << &x << endl;

    *p = *p + 1;
    cout << "-> with pointer increment " << *p;
}
*/
int main()

{

    /*
          # 1
    int num1 = 2;
    cout << "num valuse is :" << num << "\n";
    int *p = &num;
    cout << p;

    // int *ptr = &num1;
    // *ptr = ++*ptr;
    // cout << *ptr;

    int *t = &num1;
    *t = *t + 1;

    cout << " output of *t " << *t << " output of t";

    */

    /*      # 2
        // int arr[6] = {2, 5, 4, 5, 6};

        // int a = 3;
        // int *p = &a;

        // cout << " 1 = " << *arr << endl;
        // cout << " 2 = " << arr[0] << endl;
        // cout << " 3 = " << *p << endl;
        // cout << " 4 = " << *++p << endl;
        // cout << " 5 = " << &p << endl;
        // cout << " 6 = " << arr << endl;
        //   cout << " 7 = " << arr + 1 << endl;
        // cout << "-> befor made the fun value of pointer is = " << *p << endl;
        // cout << "-> function input = ";
        // test(p, a);
        // cout << endl;
        // cout << "-> after made the fun value of pointer is = " << *p << endl;

        // cout << "-> @ add of a is       " << &a << endl;
        // cout << "-> @ add of pointer is " << &*p << endl;
        // cout << "-> @ add of p is       " << &p << endl;
        */

    //  #3  For character array
    /*
    char arr[6] = {"hello"};
    char *p = &arr[0];
    cout << " 1 = " << p << endl;
    cout << " 2 = " << (p + 1) << endl;
    cout << " 3 = " << (p + 2) << endl;
    cout << " 4 = " << (p + 3) << endl;
    cout << " 5 = " << (p + 4) << endl;
    */

    /* #4 double pointer */

  /*  int a = 4;
    int *ptr = &a;
    int **p2 = &ptr;

    cout << " add of a " << &a << endl;
    cout << " add of ptr " << &ptr << endl;

    cout << " add of p2 " << &p2 << endl;
    cout << " add of *ptr " << &(*ptr) << " & " << *(&ptr) << endl;
    cout << " add of **p2 " << &(**p2) << " & " << **(&p2) << endl;

    cout << &*ptr << endl;
    cout << &ptr << endl;
    */

    // int **ptr2 = &ptr;
    // cout << **ptr2++ << endl;
    // cout << &**ptr2 << endl;
    // cout << **ptr2 << endl;

    // **ptr2 = **ptr2 + 1;
    // cout << **ptr2;
    // cout << (&p2) << endl;
    int a ;
    int **p;

    return 0;
}