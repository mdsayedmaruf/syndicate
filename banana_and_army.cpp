#include<bits/stdc++.h>
using namespace std;
int main(){
int k = 0,n = 0, w = 0, tk=0;
cin >> k >> n >> w;
for (int i =1 ; i <= w; i++){
    tk += i*k;
}
int ans = tk - n;
if (ans>0){
    ans = ans;
}
else{
    ans = 0;
}
cout << ans;
}