#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int w,h,x,y;
    cin >> w >> h >> x >> y;
    double ans = (double)w*h/2;
    int num = (w==x*2 && h==y*2) ? 1 : 0;
    printf("%.10f %d\n",ans,num);
    //cout << ans << " " << num << endl;
}