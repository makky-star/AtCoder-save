#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    
    int ans = (b+c) - a;
    if(ans > 0)cout << ans << endl;
    else cout << 0 << endl;

}