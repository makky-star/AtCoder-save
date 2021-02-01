#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int n,d;
    cin >> n >> d;
    int ans = 2 * d + 1;
    if(n % ans > 0)cout << n / ans + 1 << endl;
    else cout << n / ans << endl;
}