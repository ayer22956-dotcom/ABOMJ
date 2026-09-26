/* # 1           IT's Reverse String

#include <iostream>
#include <vector>
// #include <string>
using namespace std;

void reverse(char name[], int n)
{
    int st = 0;
    int end = n - 1;
    while (st < end)
    {
        swap(name[st++], name[end--]);
    }
}
void print(char name[])
{
    for (int i = 0; name[i] != '\0'; i++)
    {
        cout << name[i];
    }
}
int main()
{
    int n = 6;
    char name[] = "aditya";
    char size[] = {'A', 'D', 'I', 'T', 'Y', 'A'};
    reverse(name, n);
    print(name);
    cout << endl;
    cout << sizeof(name) << endl;
    cout << "siaze of size" << " " << sizeof(size);
}
*/

// -----------------------------------------------------------------------------------------

//   #2 -----------> palindrome  = reverse array == normal array;

/* #include <iostream>
#include <cstring>
using namespace std;
bool palindrome(char name[], int n)
{
    int st = 0;
    int end = n - 1;
    while (st < end)
    {
        if (name[st++] != name[end--])
        {

            return false;
        }
    }
    return true;
}

int main()
{

    char name[] = "abcdcba abcdcba";
    int n = strlen(name);

    if (palindrome(name, n) == true)
    {
        cout << "this is a palindrome" << endl;
    }
    else
    {
        cout << "not palindrome" << endl;
    }
    return 0;
}
*/

//       #3 --- > max char in string

#include <iostream>
using namespace std;
char maxchar(string &pass)
{
    int array[52] = {0};
    for (int i = 0; i < pass.length(); i++)
    {
        char ch = pass[i];
        int no = 0;
        if (ch >= 'a' && ch <= 'z')
            no = ch - 'a'; // 0–25
        else if (ch >= 'A' && ch <= 'Z')
            no = ch - 'A' + 26; // 26–51
        else
            continue;
        array[no]++;
    }

    int maxi = -1, ans = 0;
    for (int i = 0; i < 52; i++)
    {

        if (maxi < array[i])
        {

            ans = i;
            maxi = array[i];
        }
    }

    if (ans < 52)
        return 'a' + ans;
    if (maxi <= 1)
        return '#';
    else
        return 'A' + (ans - 26);
}

int main()
{

    string pass = {0};
    cin >> pass;
    cout << "max char in this pass is :" << maxchar(pass) << endl;

    return 0;
}