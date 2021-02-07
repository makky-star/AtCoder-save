#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    double v,t,s,d;
    cin >> v >> t >> s >> d;
    if(v > d){
        cout << "Yes" << endl;
        return 0;
    }

    double time = d / v;
    if(time < t || time > s){
        cout << "Yes" << endl;
    }else cout << "No" << endl;
    return 0;
}