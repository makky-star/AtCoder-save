#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i = 0;i < n;i++)cin >> p[i];
    vector<int> ans(n);
    for(int i = 0;i < n;i++)ans[p[i]-1] = i+1;
    for(int i = 0;i < n;i++)cout << ans[i] << endl;
}