#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    ll x,k,d;
    cin >> x >> k >> d;
    ll hold;
    x = abs(x);
    if(x/d <= k){
        // 0に一番近くなる
        ll move = x / d;
        // 残りのx座標、回数
        x -= d*move;
        k -= move;
        
        // 奇数なら-
        if(k % 2 != 0){
            x -= d;
            // 偶数なら＋
        }
        
        ll ans = abs(x);
        cout << ans << endl;

    }else if(x/d > k){
        cout << x - k*d << endl;
    }

    return 0;
    
}