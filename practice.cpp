#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> memo;


int func(int i,int w,const vector<int> &a){
    if(i == 0){
        if(w == 0)return true;
        else return false;   
    }

    if(memo[i][w] != -1)return memo[i][w];

    if(func(i - 1,w,a))return memo[i][w] = 1;

    if(func(i -1,w-a[i-1],a))return memo[i][w] = 1;

    return memo[i][w] = 0;
}
const long long INF = 1LL << 60;

int main(){
    int n;
    cin >> n;
    vector<long long> h(n);
    for(int i = 0;i < n;i++)cin >> h[i];
    vector<long long> dp(n,INF);

    dp[0] = 0;

    for(int i = 1;i < n;++i){
        if(i == 1)dp[i] == abs(h[i]-h[i-1]);
        else dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]),dp[i-2]+ abs(h[i]-h[i-2]));
    }

    cout << dp[n-1] << endl;

}