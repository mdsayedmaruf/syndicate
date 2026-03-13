#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
 long double sum=0;
   cin>>n;
     double val[n];
   for (int i =0 ; i<n;i++){
    cin>>  val[i]; 
   }
    for (int i =0 ; i<n;i++){
     sum = sum+ val[i]; 
   }
   long double final = sum/n;
 cout << fixed << setprecision(8) << final;
    return 0;
}