#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int n,k;
    char s[50];
    cin >> n >> k;
    cin >> s;
    s[k-1] = (s[k-1])+32;
    cout << s << endl;

    return 0;
    
}