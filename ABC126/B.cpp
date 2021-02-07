#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    int comp_l = (s[0] - '0')*10 + (s[1] - '0');
    int comp_r = (s[2] - '0')*10 + (s[3] - '0');
    if((comp_l >= 1 && comp_l <=12) && (comp_r >= 1 && comp_r <=12) ){
        cout << "AMBIGUOUS" << endl;
    }else if((comp_l >= 1 && comp_l <=12) || (comp_r >= 1 && comp_r <=12) ){
        if((comp_r >= 1 && comp_r <=12))cout << "YYMM" << endl;
        else if(comp_l >= 1 && comp_l <=12)cout << "MMYY" << endl;
        
    }else{
        cout << "NA" << endl;
    }
}