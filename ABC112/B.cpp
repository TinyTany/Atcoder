#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    int N, T;
    cin >> N >> T;
    int c[10000], t[10000];
    for(int i=1;i<=N; ++i) cin >> c[i] >> t[i];
    for(int i=1; i<=N; ++i){
        if(t[i] > T) c[i] = 100000;
    }
    sort(c + 1, c + N+1);
    if(c[1] > 1000){
        cout << "TLE" << endl;
    }
    else cout << c[1] << endl;
    return 0;
}