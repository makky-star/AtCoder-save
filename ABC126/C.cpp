#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int res(int i,int k){
    int count = 0;
    int sum = 0;
    while(i < k){
        i = i*2;
        //cout << i << endl;
        count++;
    }
    return count;
}

int main(){
    int n,k;
    double ans = 0;

    cin >> n >> k;
    for(int i = 1;i <= n;i++){
        int x = res(i,k);
        ans += (1.0 / double(n)) * pow(0.5,x);
    }
    printf("%.14f\n",ans);

}