#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int n,max_num=-1,min_num = 100;
    cin >> n;
    vector<int> p(n),q(n);
    rep(i,n)cin >> p[i];
    rep(i,n)q[i] = p[i];
    sort(q.begin(),q.end()); 
    
    for(int i = 0;i < n;i++){
        if(min_num > p[i])min_num = p[i];
        if(max_num < p[i])max_num = p[i];
    }
    swap(min_num,max_num);
    if()
}