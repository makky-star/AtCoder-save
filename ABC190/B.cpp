#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    ll n,s,d;
    cin >> n >> s >> d;
    vector<ll> x(n),y(n);
    rep(i,n) cin >> x[i] >> y[i];

    bool can1 = false;
    bool can2 = true;
    rep(i,n){
        if(x[i] < s && y[i] > d){
            can1 = true;
            break;
        }
    }

   // cout << can1 << can2;

    if(can1)cout << "Yes" << endl;
    else cout << "No" << endl;
}