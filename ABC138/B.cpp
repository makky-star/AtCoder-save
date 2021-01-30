#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    double n;
    cin >> n;
    vector<double> a(n);
    rep(i,n)cin >> a[i];
    double sum = 0;
    rep(i,n){
        sum += 1.0 / a[i];
    } 
    printf("%.8f\n",1.0/sum);
}