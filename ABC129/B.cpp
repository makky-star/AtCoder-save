#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    int min_a = 10000000;
    vector<int> w(n);
    int sum_left = 0,sum_right=0;
    rep(i,n)cin >> w[i];
    rep(i,n){
        sum_left += w[i];
        for(int j = i+1;j < n;j++){
            sum_right += w[j];
        }
        int ans = abs(sum_left - sum_right);
        sum_right = 0;
        //cout << ans << endl;
        min_a = min(min_a,ans);
    }
    cout << min_a << endl;
}