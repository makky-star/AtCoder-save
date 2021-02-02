#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

const int INF = 1000000;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i,n)cin >> p[i];
    int cnt = 0;
    int mi = INF;
    for(int i = 0;i < n;i++){
        mi = min(mi,p[i]);
        if(mi == p[i])cnt++;
    }
    cout << cnt << endl;

}