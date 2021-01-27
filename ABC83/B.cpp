#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int func(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int n,a,b;
    //cout << 1 / 10 ;
    cin >> n >> a >> b;
    int total = 0;
    for(int i = 1;i <= n;++i){
        int sum = func(i);
        if(sum >= a && sum <= b)total += i; 
    }
    cout << total << endl;
    
}