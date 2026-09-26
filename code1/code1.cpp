// #include <iostream>
// using namespace std;
// int main() {
//     int a,b,c;
//     cout << "enter a ";
//     cin>> a;
//     cout<<"enter b ";
//     cin>> b;
//     cout<< "enter c ";
//     cin>> c;
// if(a >= b){
//     if(a >= c) cout << "a ig listeners to cheris greater" << endl;
//     else cout << "c is greater" << endl;
// }else {
//     if(b >= c) cout << "b is greater" << endl;
//     else cout << "c is greater" << endl;
// }

// }
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter a ";
    cin >> a;
    cout << "enter b ";
    cin >> b;
    cout << "enter c ";
    cin >> c;
    if (a >= b)
    {
        if (a >= c)
            cout << "a ig listeners to cheris greater" << endl;
        else
            cout << "c is greater" << endl;
    }
    else
    {
        if (b >= c)
            cout << "b is greater" << endl;
        else
            cout << "c is greater" << endl;
    }
}