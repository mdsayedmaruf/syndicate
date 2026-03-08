#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> v;
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }

    for (auto s : v)
    {

        if (s.size() <= 10)
        {
            cout << s << endl;
        
        }

        else
        {
            int cnt = 0;
            for (int i = 1; i < s.size() - 1; i++)
            {
                cnt++;
            }
            char first = s[0];
            char last = s[s.size() - 1];
            cout << first << cnt << last << endl;
        }
    }
}