#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "";
    cin >> s;
    int count0 = 0, count1 = 0, i = 0;

zero:
    if(i >= s.size()) goto no;

    if(s[i] == '0'){
        count0++;
        count1 = 0;
        if(count0 == 7) goto finish;
        i++;
        goto zero;
    }

one:
    if(i >= s.size()) goto no;

    if(s[i] == '1'){
        count1++;
        count0 = 0;
        if(count1 == 7) goto finish;
        i++;
        goto one;
    }

    if(s[i] == '0') goto zero;
    if(s[i] == '1') goto one;

finish:
    cout << "YES";
    return 0;

no:
    cout << "NO";
    return 0;
}