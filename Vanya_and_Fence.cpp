#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, hmax, h, sum = 0;
    cin >> n >> hmax;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> h;
        v.push_back(h);
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] > hmax)
        {
            sum += 2;
        }
        else
        {
            sum += 1;
        }
    }
    cout << sum;
}