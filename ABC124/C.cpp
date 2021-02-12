#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    char s[1000001];
    cin >> s;
    //cout << s[1] << endl;
    //cout << strlen(s);
    int n = strlen(s);
    int ans = 0;
    for(int i = 1;i < n;i++){
        if(s[i] == s[i-1]){
            if(s[i] == '0'){
                s[i] = '1';
                ans++;
            }else{
                s[i] = '0';
                ans++;
            }
        }
    }
    cout << ans << endl;
}