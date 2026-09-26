// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {

//     int n = 6;
//     int ans = 0, i = 0;

//     while (n != 0)
//     {
//         int bit = n & 1;

//         ans = (bit * pow(10, i)) + ans;

//         n = n >> 1;
//         i++;
//     }

//     cout << ans << endl;
// }

//  #include <iostream>
//  #include <math.h>
//  using namespace std;
//  int main () {

//     int i=1,ans =0,dig;

//  int n=6638273;
//  while (n!=0)
//  {
//      dig=n%10;

//    if((ans > INT32_MAX/10) || (ans < INT32_MIN) ) {
//       return 0;
//    }

//    ans =( ans * 10 ) + dig;
//    n /=10;

//  }
//   cout << ans;

//     return ans ;
//  }

