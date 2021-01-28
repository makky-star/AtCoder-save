#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

const int MAX = 110000;

int main(){
    int n;
    int t[MAX],x[MAX],y[MAX];
    cin >> n;
    rep(i,n)cin >> t[i+1] >> x[i+1] >> y[i+1];
    t[0] = x[0] = y[0];

    bool can = true;
    for(int i = 0;i < n;i++){
        int dt = t[i+1] - t[i];
        int dx = abs(x[i+1]-x[i]) + abs(y[i+1]-y[i]);
        if(dt < dx)can = false;
        if(dx % 2 != dt % 2)can = false;
    } 
    if(can)cout << "Yes" << endl;
    else cout << "No" << endl;


}