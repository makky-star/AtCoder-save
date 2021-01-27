#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    char s[3];
    cin >> s[0] >> s[1] >> s[2];
    int cnt = 0;
    if(s[0] == '1')cnt++;
    if(s[1] == '1')cnt++;
    if(s[2] == '1')cnt++;
    cout << cnt << endl;
}