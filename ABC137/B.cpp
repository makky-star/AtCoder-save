#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int k,x;
    cin >> k >> x;

    for(int i = 1;i < k;i++){
        cout << x-k+i << " ";
    }
    cout << x << " ";
    for(int i = 1;i < k;i++){
        cout << x + i << " ";

    }
    cout << endl;
}