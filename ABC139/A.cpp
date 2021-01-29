#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int cnt = 0;
    string s,t;
    cin >> s >> t;
    rep(i,3){
        if(s[i] == t[i])cnt++;
    }
    cout << cnt << endl;
}