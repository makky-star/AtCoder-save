#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n)cin >> a[i];
    int ans = 0;
    // —İÏ˜a‚ÌŒvZ
    vector<ll> s(n+1,0);
    rep(i,n)s[i+1] = s[i]+a[i];
    
    
    for(int i = 0;i < n;i++){
        ll sum = (s[n]-s[i+1])%1000000007;
        ans += sum * a[i];
        ans %= 1000000007;
    }
    cout << ans << endl;
}
