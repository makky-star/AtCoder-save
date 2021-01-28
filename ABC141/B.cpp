#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool can = true;
    int n = s.size();
    for(int i = 0;i < n;++i){
        if(i % 2 == 0){
            if(s[i] == 'L'){
                cout << "No" <<endl;
                return 0;
            }
        }else{
            if(s[i] == 'R'){
                cout << "No" << endl;
                return 0;
        }
        }
    }
    cout << "Yes" << endl;
}