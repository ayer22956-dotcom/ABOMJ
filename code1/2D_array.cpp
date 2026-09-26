//   # 1 ->     intro of 2D ARRAY
// #include <iostream>
// #include <vector>
// using namespace std;

// bool search(vector<vector<int>> &arr, int find, int &row, int &col)
// {

//     for (int i = 0; i < arr.size(); i++)
//     {
//         // int clo = arr[i].size();
//         for (int j = 0; j < arr[i].size(); j++)
//         {
//             if (arr[i][j] == find)
//             {
//                 row = i;
//                 col = j;
//                 return 1;
//             }
//         }
//     }

//     return 0;
// }

// int main()
// {

//     int n, m;
//     cout << "enter row & collume " << endl;
//     cin >> n >> m;
//     // cout << endl;
//     vector<vector<int>> arr(n, vector<int>(m));
//     for (int i = 0; i < arr.size(); i++)
//     {

//         for (int j = 0; j < arr[i].size(); j++)
//         {
//             cout << "enter digit : ";
//             cin >> arr[i][j];
//         }
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {

//         for (int j = 0; j < arr[i].size(); j++)
//         {
//             // cin >> arr[i][j];

//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     int find, row =-1, col=-1;
//     cout << "enter the find number : ";
//     cin >> find;

//     if (search(arr, find, row, col))
//     {
//         cout << find << " " << "is present at position -> " << "(" << row << " & " << col << ")";
//     }
//     else
//     {
//         cout << find << " not found in matrix";
//     }

//     return 0;
// }

//   #2 ->> adding of row in 2D array !

// #include <iostream>
// #include <vector>
// using namespace std;
// void input(vector<vector<int>> &arr)
// {

//     for (int i = 0; i < arr.size(); i++)
//     {

//         for (int j = 0; j < arr[i].size(); j++)
//         {
//             cout << "Enter element [" << i << "][" << j << "]: ";
//             cin >> arr[i][j];
//         }
//         cout << endl;
//     }
// }
// void sumofrow(vector<vector<int>> &arr)
// {
//     for (int j = 0; j < arr.size(); j++)
//     {
//         int sum = 0;
//         for (int i = 0; i < arr[j].size(); i++)
//         {
//             sum += arr[j][i];
//         }
//         cout << "sum of row " << j + 1 << " = " << sum << endl;
//     }
// }
// int main()
// {

//     int row, collumn;
//     cout << "enter row & collume :";
//     cin >> row >> collumn;
//     vector<vector<int>> arr(row, vector<int>(collumn));
//     input(arr);
//     sumofrow(arr);

//     return 0;
// }

//     #3------------->>>>> Print Array in Wave Oder [add in up to down ward && down to up ward]

// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> waveadding(vector<vector<int>> &arr, int row, int col)
// {
//     vector<int> ans;
//     for (int j = 0; j < col; j++)
//     {
//         if (j & 1)
//         {

//             for (int i = row - 1; i >= 0; i--)
//             {

//                 ans.push_back(arr[i][j]);
//             }

//         }
//         else
//         {
//             for (int i = 0; i < row; i++)
//             {
//                 ans.push_back(arr[i][j]);
//             }

//         }
//     }

//     return ans;
// }
// void input(vector<vector<int>> &arr, int row, int col)
// {

//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = 0; j < arr[i].size(); j++)
//         {
//             cin >> arr[i][j];
//         }
//         cout << endl;
//     }
// }

// int main()
// {

//     int row = 3;
//     int col = 3;

//     vector<vector<int>> arr(row, vector<int>(col));
//     input(arr, row, col);
//     vector<int> result = waveadding(arr, row, col);
//     for (int x : result)
//     {
//         cout << x << " ";
//         }
//         cout << endl;

//         return 0;
// }

//  #4 ----------->>>>>  sprial printing of array

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> sprialprinting(vector<vector<int>> &arr)
// {
//     int row = arr.size();
//     int col = arr[0].size();
//     int count = 0;
//     vector<int> ans;
//     int total = row * col;

//     int strow = 0;
//     int stcol = 0;
//     int endrow = row - 1;
//     int endcol = col - 1;

//     while (count < total)
//     {
//         // Print of upar side row
//         for (int i = stcol; count < total && i <= endcol; i++)
//         {
//             ans.push_back(arr[strow][i]);
//             count++;
//         }
//         strow++;
//         // Print of right side column
//         for (int i = strow; count < total && i <= endrow; i++)
//         {
//             ans.push_back(arr[i][endcol]);
//             count++;
//         }
//         endcol--;
//         // print of lower side row
//         for (int i = endcol; count < total && i >= stcol; i--)
//         {
//             ans.push_back(arr[endrow][i]);
//             count++;
//         }
//         endrow--;
//         // print of left side column
//         for (int i = endrow; count < total && i >= strow; i--)
//         {
//             ans.push_back(arr[i][stcol]);
//             count++;
//         }
//         stcol++;
//     }
//     return ans;
// }
// void print(vector<vector<int>> &arr)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = 0; j < arr[i].size(); j++)
//         {
//             cout << "Enter element [" << i << "][" << j << "]: ";
//             cin >> arr[i][j];
//         }
//     }
// }

// int main()
// {

//     int row, col;
//     cout << "enter row and col :";
//     cin >> row >> col;

//     vector<vector<int>> arr(row, vector<int>(col));

//     print(arr);

//     vector<int> result = sprialprinting(arr);
//     for (int x : result)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }

// #5 ------------>> Printing 90' rotated array's Elements

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void rotatedarray(vector<vector<int>> &arr)
// {
//     vector<int> ans;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i; j < arr[0].size(); j++)
//         {

//             swap(arr[i][j], arr[j][i]);
//         }
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         reverse(arr[i].begin(), arr[i].end());
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = 0; j < arr[0].size(); j++)
//         {

//             ans.push_back(arr[i][j]);
//         }
//     }
// }
// void input(vector<vector<int>> &arr)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = 0; j < arr[i].size(); j++)
//         {
//             cout << "Enter element [" << i << "][" << j << "]: ";
//             cin >> arr[i][j];
//         }
//     }
// }

// int main()
// {
//     int row, col;
//     cout << "Enter row and col no :";
//     cin >> row >> col;

//     vector<vector<int>>
//         arr(row, vector<int>(col));

//     input(arr);
//     // rotatedarray(arr);
//     rotatedarray(arr);

//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = 0; j < arr[0].size(); j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------

//    #6 ---------->>> binary surching of tirgate

#include <iostream>
#include <vector>
using namespace std;
bool binaryseacrh(vector<vector<int>> &arr, int target)
{

    int row = arr.size();
    int col = arr[0].size();

    int st = 0;
    int end = row * col - 1;
    int mid = st + (end - st) / 2;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (arr[mid / col][mid % col] == target)
        {
            return 1;
        }
        if (arr[mid / col][mid % col] > target)
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }

        mid = st + (end - st) / 2;
    }
    return 0;
}

void input(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
}

int main()
{

    int row, col;
    cout << "Enter the num of row and col :";
    cin >> row >> col;

    vector<vector<int>> arr(row, vector<int>(col));
    input(arr);
    int target;
    cout << "Enter the target number :";
    cin >> target;

    int x = binaryseacrh(arr, target);
    if (x == true)
    {
        cout << "number is found ";
    }
    else
    {
        cout << "not found";
    }

    return 0;
}