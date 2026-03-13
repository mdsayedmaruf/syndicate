#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s ;
    cin >> s;
    int year = stoi(s);
    for (;;)
    {
        year++;
        string str = to_string(year);
        set<char> st;
        for (int i = 0; i < str.size(); i++)
        {
            st.insert(str[i]);
        }
        if (st.size() == str.size())
        {
            break;
        }
    }
    cout << year;
}