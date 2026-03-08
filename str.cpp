#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s ;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    // cout << s;

    s.erase(remove(s.begin(), s.end(), 'a'), s.end());
    s.erase(remove(s.begin(), s.end(), 'e'), s.end());
    s.erase(remove(s.begin(), s.end(), 'i'), s.end());
    s.erase(remove(s.begin(), s.end(), 'o'), s.end());
    s.erase(remove(s.begin(), s.end(), 'u'), s.end());
    s.erase(remove(s.begin(), s.end(), 'y'), s.end());
// cout<<s;
for (int i = 0; i < s.size(); i+=2)
{
    s.insert(i, ".");
}

    cout << s;
}