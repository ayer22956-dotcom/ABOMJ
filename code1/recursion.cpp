#include <iostream>
#include <vector>
using namespace std;
// #1 - Intro -->> when function call himself it's called as a recursion.
/*  int factorial(int n)
{
    if (n == 0)
        return 1;

    int smallproblem = factorial(n - 1);
    int bigerproblem = n * smallproblem;
    return bigerproblem;
}

int main()
{
    int n;
    cin >> n;

    int ans;
    ans = factorial(n);
    cout << ans << endl;

    return 0;
}
*/

//  #2 - fibonacci series -> 0,1,1,2,3,5,8,13,21.......

/*
int fib(int n)
{

    if (n == 1 || n == 0)
    {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cin >> n;

    cout << fib(n);
}
    @ -> time copmlexity ==>>  /home/aditya/Pictures/time complexityofrescuresion.png (and) /home/aditya/Pictures/Screenshot_2026-07-18_19-19-51.png
                                   also in note.md file
    */

// #3 -- > sum of n number

/*
#include <iostream>
#include <vector>
using namespace std;
int sumof(int n)
{
    if (n == 1)
        return 1;
    int small = sumof(n - 1);
    return n + small;
}
/* # time complexity of using of recursion  = total no. of recusrsive call * work in each call (always use this method)
                                             or
                                              recursion relation (using mathamtics)
  1 -->  total recursive call
   . f(4) - 1st call
   . f(3) - 2nd call
   . f(2) - 3rd call
   . f(1) - 4th call
                                 NOTE :- (n+1) => n.
  2 -->  work in each call
   (if (n == 0)
    return 0;
    int small = sumof(n - 1);
    return n + small;)
    == *k (constant)* because no use a extra variable in this function

    ===>>> time complexity of using of recursion = o(n*k) == o(n).
    S.S ==>> /home/aditya/Pictures/Screenshot_2026-07-09_18-27-06.png



int main()
{
    int n;
    cout << "enter n :";
    cin >> n;
    cout << "Total sum of n is :" << sumof(n) << endl;

    return 0;
}
// # space complexity == height of callstack * memory filld in each call
//   /home/aditya/Pictures/Screenshot_2026-07-09_18-38-04.png
//   space complexity = (n) * k = nk
//   space complexity is o(n).

*/

/*
#include <iostream>
#include <vector>
using namespace std;
bool binarysearch(vector<int> &arr, int tig, int st, int end)
{
    if (st > end)
    {
        return false;
    }

    int mid = st + (end - st) / 2;

    if (arr[mid] == tig)
    {
        return true;
    }
    else if (arr[mid] < tig)
    {
        return binarysearch(arr, tig, mid + 1, end);
    }
    else
    {
        return binarysearch(arr, tig, st, mid - 1);
    }
    return -1;
}
//  check TC and SC in notes.md file.

int main()
{
    vector<int> arr = {1, 2, 3, 4, 7, 8, 9};
    int end = arr.size() - 1;
    int st = 0;
    int tig;

    cout << "Enter tig : ";
    cin >> tig;
    cout << binarysearch(arr, tig, st, end) << endl;

    return 0;
}
    */

// // //# IPM* 4. Back-Tracking in (print Sub-Set of Array)
/*
#include <iostream>
#include <vector>
using namespace std;

void printsubset(vector<int> &arr, vector<int> &ans, vector<vector<int>> &allsubset, int i)
{

    if (i == arr.size())
    {

        allsubset.push_back(ans);
        return;
    }
    // For include are sunset elements.
    ans.push_back(arr[i]);
    printsubset(arr, ans, allsubset, i + 1); // move array elements form next index
    // Exclude are elements
    ans.pop_back(); // imp -->> BackTeacking
    printsubset(arr, ans, allsubset, i + 1);
}

int main()
{
    int n;
    cout << "Enter value of n :";
    cin >> n;
    vector<int> arr(n);
    if (n > 1)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    vector<vector<int>> allsubset;

    vector<int> ans; // store are elements
    printsubset(arr, ans, allsubset, 0);
    for (auto subset : allsubset) //  => for (int i = 0; i < allsubset.size(); i++)
    {                             // => auto use for automatic update correct database
        cout << "{ ";

        for (auto x : subset) // ==>> for (int i = 0; i < subset.size(); i++)
            cout << x << " ";

        cout << "}\n";
    }

    return 0;
    T.C and S.C = /home/aditya/Pictures/subset1.png
}
    */

// # 2nd version of 4th topic -->> second version of subset of recursion (repeated numbers in set)
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void subset(vector<int> &arr, vector<int> &ans, vector<vector<int>> &allsubset, int i)
{

    if (i == arr.size())
    {
        allsubset.push_back(ans);
        return;
    }
    // include are element
    ans.push_back(arr[i]);
    subset(arr, ans, allsubset, i + 1);
    ans.pop_back();
    int index = i + 1;
    while (index < arr.size() && arr[index] == arr[index - 1])
        index++;
    // excludeing
    subset(arr, ans, allsubset, index);
}

int main()
{
    int i;
    int n;
    cout << "value of n: ";
    cin >> n;
    vector<int> arr(n);
    // input arr value
    for (int i = 0; i < n; i++)
    {
        cout << "enter numbers :";
        cin >> arr[i];
    }
    // sorting
    sort(arr.begin(), arr.end()); // = time complexity for this line is o(n log n)

    vector<int> ans;
    vector<vector<int>> allsubset;
    subset(arr, ans, allsubset, 0);
    for (auto result : allsubset) //  => for (int i = 0; i < allsubset.size(); i++)
    {                             // => auto use for automatic update correct database
        cout << "{ ";

        for (auto x : result) // ==>> for (int i = 0; i < subset.size(); i++)
            cout << x << " ";

        cout << "}\n";
    }
    return 0;
    // total time complexity is o(nLogn + n*2^n) == o(n*2^n)
    // same as S.C
}
    */

// #5 _-> permutations.
/*

#include <iostream>
#include <vector>
using namespace std;

void gitperm(vector<int> &arr, vector<vector<int>> &ans, int &totalset, int idx)
{
    if (idx == arr.size())
    {
        ans.push_back(arr);
        totalset++;
        return;
    }
    for (int i = idx; i < arr.size(); i++)
    {
        swap(arr[idx], arr[i]);

        gitperm(arr, ans, totalset, idx + 1);

        swap(arr[idx], arr[i]); // backtracking
    }
}

int main()
{

    int n;
    cout << "Enter n :";
    cin >> n;

    int totalset = 0;

    vector<int> arr(n);

    // input are arr.
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<vector<int>> ans;
    int idx;
    gitperm(arr, ans, totalset, 0);

    for (auto result : ans) //  => for (int i = 0; i < allsubset.size(); i++)
    {                       // => auto use for automatic update correct database
        cout << "{ ";

        for (auto x : result) // ==>> for (int i = 0; i < subset.size(); i++)
            cout << x << " ";

        cout << "}\n";
    }
    cout << "Total set is :" << totalset;

    return 0;
}
    */

// #6 ---> merge sort usig rec

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;

    return 0;
}
