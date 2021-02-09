#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int gcd(int a,int b){
    if(a % b == 0)return b;
    else return (gcd(b,a%b));
}

int lcm(int a,int b){
    return a*b / gcd(a,b);
}

int main(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;

    a = a-1;;

    ll b_by = b / c;
    ll b_by2 = b / d;
    ll b_by3 = b / lcm(c,d);

    ll a_by = a / c;
    ll a_by2 = a / d;
    ll a_by3 = a / lcm(c,d);

    a = a - (a_by + a_by2) + a_by3;
    b = b - (b_by + b_by2) + b_by3; 

    cout << b-a << endl;



}