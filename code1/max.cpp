
//  # ---> only find max value of array

// // #include <iostream>
// // #include <climits>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cout << "enter n = ";

// //     cin >> n;
// //     int min = INT_MAX; // INT_MAX VALUE is +2 pow of 34 someting = (pow(2,34))

// //     for (int i = 1; i <= n; i++)
// //     {
// //         int num;
// //         cout << "enter num = ";
// //         cin >> num;
// //         if (num < min)  // min is biger than 1 num. ---> condition is true
// //         {
// //             min = num; /* min is 24 ---> 24 is smaller than min value so uper line is true
// //                                                 that's why min value change into num
// //                                                 min = 24 . */

// //         }
// //     }
// //     cout << min;

// //     return 0;
// // }




// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



//           ## => find max or min array no.



// // #include <iostream>
// // #include <vector>
// // #include <climits>
// // using namespace std;

// // void Iarry(vector<int> &array, int n)
// // {

// //     for (int i = 0; i < n; i++)
// //     {
// //         cout << "enter no. ";
// //         cin >> array[i];
// //     }

// //     for (int i = 0; i < n; i++)
// //     {
// //         cout << array[i];
// //     }
// //     cout << endl;
// // }
// // int maxmin(int n, vector<int> &array)
// // {
// //     int mx = INT_MAX;
// //     for (int i = 0; i < n; i++)
// //     {
// //         if (array[i] < mx)
// //         {
// //             mx = array[i];
// //         }
// //     }
// //     return mx;
// // }

// // int main()
// // {
// //     int a;
// //     cin >> a;
// //     vector<int> array(a);
// //     Iarry(array, a);
// //     cout << "min value is " << maxmin(a, array);
// //     return 0;
// // }


// -------------------------------------------------------------------------------------------------------------------------------------------------------


//   ### -------> 2D array 



// #include <iostream>
// using namespace std;
// void Iarry(int arr[5][7])
// {

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << "enter no. ";
//             cin >> arr[i][j];
//         }
//     }

//     for (int i = 0; i < 2; i++)
//     {

//         for (int j = 0; j < 3; j++)
//         {

//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
// }

// int main()
// {
//     int gahd[5][7];
//     Iarry(gahd);
// }

