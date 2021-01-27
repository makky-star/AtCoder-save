#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n)cin >> a[i];
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    int alice=0,bob=0;
    for(int i = 0;i < n;i+=2){
        alice += a[i];
        bob += a[i+1];
    }
    cout << alice - bob << endl;
}