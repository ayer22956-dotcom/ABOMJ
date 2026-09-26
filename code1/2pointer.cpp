// #include <iostream>
// using namespace std;

// bool isPalindrome(int arr[], int n)
// {
//     int start = 0;
//     int end = n - 1;

//     while (start < end)
//     {
//         if (arr[start] != arr[end])
//             return false;

//         start++;
//         end--;
//     }

//     return true;
// }

// void printResult(bool result)
// {
//     if (result)
//         cout << "Array is Palindrome";
//     else
//         cout << "Array is NOT Palindrome";

//     cout << endl;
// }

// int main()
// {
//     int arr[5] = {1, 2, 3, 2, 1};
//     int n = 5;

//     bool result = isPalindrome(arr, n);

//     printResult(result);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int secondLargest(int arr[], int n)
// {
//     int largest = arr[0];
//     int second = arr[0];

//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > largest)
//         {
//             second = largest;
//             largest = arr[i];
//         }
//         else if (arr[i] > second)
//         {
//             second = arr[i];
//         }
//     }
//     return second;
// }
// int main()
// {
//     int arr[5] = {5, 5, 5, 5, 5};
//     int n = 5;
//     cout << "Second Largest = " << secondLargest(arr, n);
//     return 0;
// }

// MAX height of the water tunk walls

/*#include <iostream>
using namespace std;

int maxWater(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    int maxArea = 0;

    while (left < right)
    {
        int height = min(arr[left], arr[right]);
        int width = right - left;
        int area = height * width;

        if (area > maxArea)
            maxArea = area;

        if (arr[left] < arr[right])
            left++;
        else
            right--;
    }

    return maxArea;
}

int main()
{
    int arr[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = 9;

    cout << "Maximum Water = " << maxWater(arr, n);

    return 0;
}
*/

//         2 Pointer MCQ QUIZ

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    /*

      int first = 8;
      int *p = &first;
      int ans;
      int score = 0;
      int temp = (*p)++;
      int temp2 = first;
      cout << "int first = 8; " << endl
           << "int *p = &first;" << endl;
      cout << "Q1 -> 1st input is = (*p)++ ?" << endl;

      cout << "enter your ans of 1st input :";
      cin >> ans;

      if (ans == temp)
      {
          score++;
          cout << "   congratulations " << endl;
          cout << "your score is : " << score << endl
               << endl;
      }
      else
      {
          cout << "Ans is : " << temp << endl;
          cout << "your score is : " << score << " ==> clear this topic " << endl
               << endl;
      }

      cout << "Q2 -> 2nd input is = first ?" << endl;

      cout << "enter your ans of 2nd input :  ";
      cin >> ans;
      if (ans == temp2)
      {
          score++;
          cout << "   congratulations " << endl;
          cout << "your score is : " << score << endl;
      }
      else
      {
          cout << "Ans is : " << temp2 << endl;
          cout << "your score is : " << score << " ==> clear this topic " << endl;
      }

      */
    int *p2 = 0;

    return 0;
}