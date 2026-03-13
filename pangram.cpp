#include<bits/stdc++.h>
using namespace std;
int main(){
   
string s;
int n;
cin >>n >> s;
transform(s.begin(), s.end(), s.begin(), ::tolower);
set<char> st;

for (int i =0; i<s.size(); i++){
    st.insert(s[i]);
}
if (st.size() == 26){
    cout << "YES" << endl;
}
else{
    cout << "NO" << endl;
}


}