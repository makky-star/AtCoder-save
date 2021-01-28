#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n+1),b(n+1),c(n);
    for(int i = 1;i <= n;++i)cin >> a[i];
    for(int i = 1;i <= n;++i)cin >> b[i];
    for(int i = 1;i < n;++i)cin >> c[i];
    int sum = 0;
    //for(int i = 1;i <= n;++i)cout << a[i] << b[i] << endl;
    for(int i = 1;i <= n;i++){
        sum += b[a[i]];
        //cout << sum << endl;
        if(a[i]-1 == a[i-1])sum += c[a[i-1]];
    }
    cout << sum << endl;
}