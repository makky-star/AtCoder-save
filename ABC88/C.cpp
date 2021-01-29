#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    vector<int> x(3),y(3);
    vector<vector<int>> c(3,vector<int>(3));
    bool yes = true;
    rep(i,3)rep(j,3)cin >> c[i][j];
    x[0] = 0; 
    rep(i,3)y[i] = c[0][i] -x[0];
    rep(i,3)x[i] = c[i][0] - y[0];

    rep(i,3)rep(j,3){
        if(x[i]+y[j] != c[i][j])yes = false;
    }
    
    if(yes)cout << "Yes" << endl;
    else cout << "No" << endl;   
}