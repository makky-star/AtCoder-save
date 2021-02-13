#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> p1(n),p2(n);
    rep(i,n){
        cin >> p1[i];
        p2[i] = i+1;
    }
    int cnt = 0;
    rep(i,n){
        if(p1[i] == p2[i])cnt++;
    }
    if(cnt == n-2 || cnt == n)cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}