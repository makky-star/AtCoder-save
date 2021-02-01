#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    #include <iostream>
using namespace std;

int calc(int n){
    int cnt = 0;
    while(n > 0){
        n /= 10;
        cnt++;
    }
    return cnt;
}

int main(void){
    // Your code here!
    int n;
    cin >> n;
    int cnt,count = 0;
    for(int i = 1;i <= n;i++){
        cnt = calc(i);
        if(cnt % 2 != 0)count++;
    }
    cout << count << endl;
}
}