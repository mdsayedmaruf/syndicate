#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> v;
for (int i = 0; i < 5; i++)
{
   int x;
   cin >> x;
   v.push_back(x);
}
sort(v.begin(), v.end());
int mm = unique(v.begin(), v.end()) - v.begin();
for(int i = 0; i < mm ; i++){
    cout << v[i] << " ";
}
}