#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    if(s == "A")cout << "T" << endl;
    else if(s == "T")cout << "A" << endl;
    else if(s == "G")cout << "C" << endl;
    else cout << "G" << endl;
}