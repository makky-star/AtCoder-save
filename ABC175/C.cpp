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
        // 0�Ɉ�ԋ߂��Ȃ�
        ll move = x / d;
        // �c���x���W�A��
        x -= d*move;
        k -= move;
        
        // ��Ȃ�-
        if(k % 2 != 0){
            x -= d;
            // �����Ȃ�{
        }
        
        ll ans = abs(x);
        cout << ans << endl;

    }else if(x/d > k){
        cout << x - k*d << endl;
    }

    return 0;
    
}