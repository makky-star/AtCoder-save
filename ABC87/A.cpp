#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int a,b,c,x;
    int cnt = 0;
    cin >> a >> b >> c >> x;
    rep(i,a+1)rep(j,b+1)rep(k,c+1){
        if(x == i*500 + j*100 + k*50)cnt++;
    }
    cout << cnt << endl;
}