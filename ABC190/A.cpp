#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(c == 0){
        if(a > b)cout << "Takahashi" << endl;
        else cout << "Aoki" << endl;
    }else{
        if(b > a)cout << "Aoki" << endl;
        else cout << "Takahashi" << endl;
    }
}