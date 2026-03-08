#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v ;
    int m = 0, f = 0, turn = 0, n = 0;
    cin>> n;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        
        cin >> v[i];
    }
    while (!v.empty())
    {
        if (turn == 0)
        {
            if (v[0] > v.back())
            {
                m += v[0];
                v.erase(v.begin());
            }
            else
            {
                m += v.back();
                v.pop_back();
            }
            turn = 1;
        }
        else
        {
            if (v[0] > v.back())
            {
                f += v[0];
                v.erase(v.begin());
            }
            else
            {
                f += v.back();
                v.pop_back();
            }
            turn = 0;
        }
       
    }
     cout << m << " " << f << endl;
}
