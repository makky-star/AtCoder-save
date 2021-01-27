#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    ll n,y;
    cin >> n >> y;
    for(int i = 0;i <= n;++i){
        for(int j = 0;j <= n;++j){
            int k = n-i-j;
            //cout << i << j << k << endl;
            //cout << 10000*i + 5000*j + 1000*k << endl;
            if(i+j+k == n && k >= 0){
                if(10000*i + 5000*j + 1000*k == y){
                    cout << i << " " << j << " " << k << endl;
                    return 0;
                }
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;

}