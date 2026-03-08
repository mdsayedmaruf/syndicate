#include<bits/stdc++.h>
using namespace std;
int main(){
vector <int> v;
int n, k;
cin>>n>>k;
for (int i = 0; i < n; i++){
    int t;
    cin>>t;
    v.push_back(t);
}
int count = 0;
for (int i = 0; i<v.size(); i++){
    if (v[i]>=v[k-1] && v[i]>0){
        count++;
    }
}

cout<<count;
}