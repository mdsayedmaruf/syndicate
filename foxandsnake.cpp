#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 9, s = 9;
    cin >> n >> s;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= s; col++)
        {
            if (row % 2 == 0)
            {
                if (col == 1)
                {
                    cout << "";
                }
                else
                    cout << ".";
                if (col == s && row % 2 == 0 && row % 4 != 0)
                {
                    cout << "#";
                }
                else if (col == 1 && row % 4 == 0)
                {
                    cout << "#";
                }
            }
            else
            {
                cout << "#";
            }
        }
        cout << endl;
    }

}