#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    string S;
    cin >> S;
    if (S.size() < 2){
        cout << 0;
        return 0;
    }
    int cnt0=0, cnt1=0;
    for(int i=0; i<S.size(); ++i){
        if(S[i] == '1') ++cnt1;
        else ++cnt0;
    }
    int ans = cnt0 < cnt1 ? cnt0 : cnt1;
    cout << ans * 2;
    return 0;
}