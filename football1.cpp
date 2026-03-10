#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int count = 0, result = 0;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            count++;
            if (count == 7)
            {
                result = 1;
                goto end;
            }
        }
        else
            count = 0;
    }

    count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            count++;
            if (count == 7)
            {
                result = 1;
                goto end;
            }
        }
        else
            count = 0;
    }

end:
    if (result == 1)
        cout << "YES";
    else
        cout << "NO";
}