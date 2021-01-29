
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<ll> h(n);
    rep(i,n)cin >> h[i];
    reverse(h.begin(),h.end());
    int ans = 0;
    int val = 0;

    for(int i = 1;i < n;i++){
        if(h[i-1] <= h[i]){
            val++;
        }else{
            
            val=0;
        }
        ans = max(ans,val);
    }
    
    cout << ans << endl;
}
