#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;
    int cnt = 0;
    for(int i = 0;i < n;i++){
        if(s[i]== 'A' || s[i]== 'C' || s[i]== 'G' || s[i]== 'T'){
            cnt++;

        }else{
            cnt = 0;
        }
        ans = max(cnt,ans);
    }
    cout << ans << endl;
}