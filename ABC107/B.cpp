#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<char>> a(100,vector<char>(100));
    rep(i,h)rep(j,w)cin >> a[i][j];

  
    int count = 0;
    vector<int> memo_col(100),memo_row(100);
    // s‚Ìíœ
    rep(i,h){
        rep(j,w){
            if(a[i][j] == '.')count++;
        }
        // s‘S‚Ä‚ª.‚¾‚Á‚½‚çƒƒ‚
        if(count == w)memo_col[i]=1;
        count = 0;
    }

    // —ñ‚Ìíœ
    rep(i,w){
        rep(j,h){
            if(a[j][i] == '.')count++;
        }
        if(count == h)memo_row[i] = 1;
        count = 0;
    }

    rep(i,h){
        rep(j,w){
            if(memo_col[i] != 1){
                if(memo_row[j] != 1)cout << a[i][j];
            }
        }
            if(memo_col[i] != 1){
                cout << endl;
            }
    }

    return 0;

}