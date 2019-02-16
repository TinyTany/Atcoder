#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    int cnt[5] = {0};
    for(int i=0; i<3; ++i){
        int a, b;
        cin >> a >> b;
        cnt[a]++; cnt[b]++;
    }
    for(int i=1; i<=4; ++i){
        if(cnt[i]>=3){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}