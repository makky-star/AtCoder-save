#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int n,x;
    cin >> n >> x;
    vector<int> L(n);
    rep(i,n)cin >> L[i];
    int bounce = 1;
    int sum = 0;
    for(int i = 0;i < n;i++){
        sum += L[i];
        if(x < sum)break;
        bounce++;
    }
    cout << bounce << endl;
}