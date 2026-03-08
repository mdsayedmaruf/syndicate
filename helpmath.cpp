#include<bits/stdc++.h>
using namespace std;
int main(){
string a ;
cin>>a;
a.erase(remove(a.begin(),a.end(),'+'),a.end());
// cout<<a;
sort(a.begin(),a.end());
for (int i = 1; i < a.size(); i+=2)
{
    a.insert(i,"+");
}

cout<<a;
}