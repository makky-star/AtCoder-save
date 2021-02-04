#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(void){
    // Your code here!
    int n;
    cin >> n;
    int cnt = 0;
    vector<int> p(n);
    for(int i = 0;i < n;i++)cin >> p[i];
    for(int i = 1;i <= n-2;i++){
        int a = p[i-1];
        int b = p[i];
        int c = p[i+1];
        int min1 = min(min(a,b),c);
        int max1 = max(max(a,b),c);
        if(min1 != p[i] && max1 != p[i])cnt++;
    }
    cout << cnt << endl;
}

