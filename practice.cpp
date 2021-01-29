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

template<class T> void chmin(T& a,T b){
    if(a > b){
        a = b;
    }
}

int N;
vector<long long> h;
vector<long long>dp;

long long rec(int i){
    if(dp[i] < INF)return dp[i];
    if(i == 0)return 0;
    long long res = INF;

    chmin(res,rec(i-1) + abs(h[i]-h[i-1]));

    if(i > 1)chmin(res,rec(i-2) + abs(h[i] - h[i-2]));

    return dp[i] = res;
}

int main(){
    cin >> N;
    h.resize(N);
    for(int i = 0;i < N;++i)cin >> h[i];

    dp.assign(N,INF);

    cout << rec(N-1) << endl;
}