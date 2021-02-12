#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> v(n),c(n);
    rep(i,n)cin >> v[i];
    rep(i,n)cin >> c[i];
    int x = 0,y = 0;
    int ans = 0;
    for(int i = 0;i < n;i++){
        if(v[i]  >  c[i]){
            x += v[i];
            y += c[i];
            //cout << v[i] << c[i] << endl;
        }
    }
    cout << x - y << endl;
}