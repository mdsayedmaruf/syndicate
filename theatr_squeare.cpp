#include<bits/stdc++.h>
using namespace std;
int main()
{
long long m,n,a,result;
cin >> m >> n >> a;
if(m==n && m==a || (m<a && n<a)){
    cout << 1 ;
    return 0;
}

else{ result = ceil((double)m/a) + ceil((double)n/a);}
cout << result ;
return 0;
}