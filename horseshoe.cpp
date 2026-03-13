#include<bits/stdc++.h>
using namespace std;
int main()
{
map<int,int> mp;
for (int i =0; i<4; i++){
    int a;
    cin >> a;
    mp[a]++;
}
int result = 4- mp.size();
cout << result << endl;
}