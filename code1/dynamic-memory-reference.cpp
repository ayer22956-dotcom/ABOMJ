/* usees : int arr[n] ---> bad approche ==> defult in copmiler
                      ---> use dynamic storge like heap (free storage)
*/

#include <iostream>
#include <vector>
using namespace std;

// void check(int a)
// {

//     int &pot = a;
//     pot = pot + 1;
//     cout << " reff in fun " << pot << endl;
// }

// int main()
// {
//     int a = 4;
//     int &pot = a;
//     check(a);

//     cout << pot << endl;
//     return 0;
// }

int main()
{
    int row;
    cout << "enter row ";
    cin >> row;
    int col;
    cout << " enter col ";
    cin >> col;
    /*   |*********|  */
    int **arr = new int *[row];
    // **
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    //    **

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    cout << "matrix is : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}