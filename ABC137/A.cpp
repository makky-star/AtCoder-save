#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int a,b;
    cin >> a >> b;
    int c = max(a+b,a-b);
    int d = max(c,a*b);
    cout << d << endl;
}