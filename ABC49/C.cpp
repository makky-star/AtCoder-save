#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

string devide[4] = {"dream","dreamer","erase","eraser"};

int main(){
    string s;
    cin >> s;
    reverse(s.begin(),s.end());
    rep(i,4)reverse(devide[i].begin(),devide[i].end());

    bool can = true;

    for(int i = 0;i < s.size();){
        bool can2 = false;
        for(int j = 0;j < 4;++j){
            string d = devide[j];
            if(s.substr(i,d.size()) == d){
                can2 = true;
                i += d.size();
            }
        }
        if(!can2){
            can = false;
            break;
    }
    }
    if(can)cout << "YES" << endl;
    else cout << "NO" << endl;
}