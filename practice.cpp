#include <iostream>
#include <vector>

using namespace std;

int func(int N){
    if(N == 0)return 0;
    return N + func(N-1);
}

int OCD(int m,int n){
    int r = m % n;
    if(r == 0)return n;
    else return OCD(n,r); 
}

int fibo(int n){
    if(n == 0)return 0;
    if(n == 1)return 1;
    
    return fibo(n-1) + fibo(n-2);
}

vector<long long> memo;

long long memofibo(int n){
    if(n == 0)return 0;
    else if(n == 1)return 1;

    if(memo[n] != -1)return memo[n];

    return memo[n] = memofibo(n-1) + memofibo(n-2);
}

bool func(int i,int w,const vector<int> &a){
    if(i == 0){
        if(w == 0)return true;
        else return false;
    }

    // a-1”Ô–Ú‚ð‘I‚Î‚È‚¢
    if(func(i-1,a[i],a))return true;
    if(func(i-1,w-a[i-1],a))return true;

    return false;
}

int main(){
    cout << OCD(51,100) <<endl;
    cout << fibo(20) << endl;

    memo.assign(50,-1);
    memofibo(49);
    for(int i = 2;i < 50;i++){
        cout << memo[i] << endl;
    }

    // •”•ª˜b–â‘è
    int n,w;
    cin >> n >> w;
    vector<int> a(n);
    for(int i = 0;i < n;i++)cin >> a[i];

    if(func(n,w,a)) cout << "Yes" << endl;
    else cout << "No" << endl;

}