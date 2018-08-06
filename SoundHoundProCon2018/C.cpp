#include<bits/stdc++.h>
using namespace std;

int main(){
    long double n, m, d, ans;
    cin >> n >> m >> d;
    if(d != 0) ans = 2*(m - 1)*(n - d)/n/n;
    else ans = (m-1)/n;
    cout << fixed << setprecision(10) << ans << '\n';
    return 0;
}