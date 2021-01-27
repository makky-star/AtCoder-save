#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n)cin >> a[i];
    bool judge = true;
    int cnt = 0;
    while(judge){
        rep(i,n){
            if(a[i] % 2 != 0){
                judge = false;
                break;
            }else{
                a[i] /= 2;
                if(i == n-1)cnt++;
            }
        }
    }
    cout << cnt << endl;
}