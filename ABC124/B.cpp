#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i,n)cin >> h[i];
    int count = 1;
    int min_h = -1;
    for(int i = 1;i < n;i++){
        min_h = max(min_h,h[i]);
        if(h[0] <= h[i]){
            if(h[i] >= min_h)count++;  
        }
    }
    cout << count << endl;
}