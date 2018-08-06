//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N, a[101];
    cin >> N;
    for(int i=1; i<=N; i++) cin >> a[i];
    int k=1, cnt = 0;
    while(k <= N){
        if(a[k] == a[k+1]){
            ++cnt;
            k += 2;
        }
        else{
            ++k;
        }
    }
    cout << cnt << '\n';
    return 0;
}