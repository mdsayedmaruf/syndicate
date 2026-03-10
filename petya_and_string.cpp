#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;

    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++)
    {
        s1[i] = tolower(s1[i]);
    }

    for (int i = 0; i < s2.length(); i++)
    {
        s2[i] = tolower(s2[i]);
    }

    int result = s1.compare(s2);
    if (result == 0)
    {
        cout << 0;
    }
    else if (result < 0)
    {
        cout << -1;
    }
    else
    {
        cout << 1;
    }
}