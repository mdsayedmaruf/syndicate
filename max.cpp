#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> v = {3, 5, 6, 2, 2};
int index = max_element(v.begin(), v.end()) - v.begin();
cout << index << endl;
}