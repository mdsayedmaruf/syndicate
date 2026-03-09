#include<bits/stdc++.h>
using namespace std;
int main(){
int n ;
cin >> n;
int t ;
if(n>5 && n%5!=0){
 t = n/5 + 1;
}
else if(n%5==0){
    t = n/5;
}
else{t=1;}

cout << t ;
}

