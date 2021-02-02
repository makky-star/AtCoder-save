#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int n,d;
    cin >> n >> d;
    vector<vector<int>> x(n,vector<int>(d));
    rep(i,n)rep(j,n)cin >> x[i][j];
    int cnt = 0;
    double dst = 0;
    for(int i = 0;i < n-1;i++){
        for(int j = 1;j < d;j++){
            dst += pow(x[i][j] - x[i+1][j],2);
        }
        double ans = dst * dst;
        if(ans % 1 == 0)cnt++;
        dst = 0;
    }
}