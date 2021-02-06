#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> l(m),r(m);
    rep(i,m)cin >> l[i] >> r[i];
    int q = 1000000;
    int p = -1;
    for(int i = 0;i < m;i++){
       p = max(l[i],p);
       q = min(r[i],q);
       //cout << p << " " << q << endl; 
    }
    int ans = q-p+1;
    cout << max(ans,0) << endl;
}