#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total = 0;
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            int t;
            cin >> t;
            v.push_back(t);
        }
        int sum = 0;
        for (int k = 0; k < 3; k++)
        {

            sum += v[k];
        }
        if (sum >= 2)
        {
            total += 1;
        }
        v.clear();
    }
    cout << total << endl;
}
