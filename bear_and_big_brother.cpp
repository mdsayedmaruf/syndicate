#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0, b = 0, n = 0;
    cin >> a >> b;
  
  for (int i = 0; i < a*b; i++)
  {
        a *= 3;
        b *= 2;
        n++;
        if (a >= b)
        {
            break;
        }
  }
  cout << n;
  
}