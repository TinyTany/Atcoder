#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    int N, M, K[100], tmp, MM[100] = {};
    cin >> N >> M;
    for(int i=1; i<=N;++i){
        cin >> K[i];
        for(int j=1; j<=K[i]; ++j){
            cin >> tmp;
            ++MM[tmp];
        }
    }
    int ans = 0;
    for(int i=1; i<=M; ++i){
        if(MM[i] == N) ++ans;
    }
    cout << ans;
    return 0;
}