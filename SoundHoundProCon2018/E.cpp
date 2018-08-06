#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
#define N 1000000000

int solve(int n, int m, int u[], int v[], int s[]){
    int out = 0;
    if(n == 1) 
    return out;
}

int main(){
    int n, m, u[N], v[N], s[N], ans=0, mins = N;
    cin >> n >> m;
    for(int i=1; i<=m; i++) cin >> u[i] >> v[i] >> s[i];
    for(int i=1; i<=n; i++){
        if(mins == 0) break;
        if(i == 1){
            for(int j=1; j<=m; j++){
                if(u[j] == 1 && s[j] < mins) mins = s[j];
            }
            mins -= 1;
            continue;
        }
        
    }
    cout << mins << endl;
    return 0;
}