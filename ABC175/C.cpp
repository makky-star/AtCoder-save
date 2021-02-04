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
        // 0‚Éˆê”Ô‹ß‚­‚È‚é
        ll move = x / d;
        // Žc‚è‚ÌxÀ•WA‰ñ”
        x -= d*move;
        k -= move;
        
        // Šï”‚È‚ç-
        if(k % 2 != 0){
            x -= d;
            // ‹ô”‚È‚ç{
        }
        
        ll ans = abs(x);
        cout << ans << endl;

    }else if(x/d > k){
        cout << x - k*d << endl;
    }

    return 0;
    
}