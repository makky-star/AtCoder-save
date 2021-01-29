#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int a,b;
    cin >> a >> b;
    int stock = 1;
    
    int count = 0;
    
    while(b > stock){
        --stock;
        stock += a;
        count++;
    }
    cout << count << endl;

}