// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    string s = "hello";
    string s1 ;
    int j=0;
    cin >> s1;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == s[j])
            j++;
        if (j == 5)
            break;
    }
    if (j == 5)
        cout << "YES";
    else
        cout << "NO";
}