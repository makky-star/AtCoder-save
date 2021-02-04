#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> d(n);
    rep(i,n)cin >> d[i];
    sort(d.begin(),d.end());

    int dev = n / 2 - 1;
    int ans = d[dev+1] - d[dev];
    cout << ans << endl;

}