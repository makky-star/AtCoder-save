#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    set<int> d;

    rep(i,n){
        int a;
        cin >> a;
        d.insert(a);
    }

    cout << d.size() << endl;

}