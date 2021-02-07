#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int n;
    ll x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i,n)cin >> a[i];
    rep(i,n){
        if(a[i] != x)cout << " " << a[i];
    }
    cout << endl;
}