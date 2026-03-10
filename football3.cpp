#include<bits/stdc++.h>
using namespace std;    
int main(){
    string s = "010000000";
    // cin >> s;
int result = s.find("0000000");

   if(s.find("0000000") == 0 || s.find("1111111") == 0){
       cout << "YES";
   }
   else{
       cout << "NO";


   } 



}