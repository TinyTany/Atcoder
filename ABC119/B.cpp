#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    int N;
    double ans=0, x;
    string s;
    cin >> N;
    for(int i = 1; i<=N; ++i){
        x = 0, s = "";
        cin >> x >> s;
        if(s == "BTC"){
            x *= 380000.;
        }
        ans += x;
    }
    cout << ans;
    return 0;
}