#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {3, 5, 6, 2, 4};
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size() - 2; i++)
    {
         if (v[i+1]-v[i] != v[i+2]-v[i+1])
            {
                cout << "No" << endl;
                return 0;
            }
           
    }
     cout << "Yes" << endl; 
}