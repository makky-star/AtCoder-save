#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    
    vector<int> a(5);
    rep(i,5)cin >> a[i];
    int k;
    cin >> k;
    if(a[4]-a[0] <= k)cout << "Yay!" << endl;
    else cout <<":(" << endl;
}