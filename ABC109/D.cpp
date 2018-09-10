#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int evenCount(int **a, int H, int W){
    int ans = 0;
    for(int i=1; i<=H; ++i){
        for(int j=1; j<=W; ++j){
            if(a[i][j]%2==0) ++ans;
        }
    }
    return ans;
}

int main(){
    int H, W, a[1000][1000], b[1000][1000];
    cin >> H >> W;
    for(int i=1; i<=H; ++i){
        for(int j=1; j<=W; ++j){
            cin >> a[i][j];
        }
    }
    for(int i=1; i<=H; ++i){
        for(int j=1; j<=W; ++j){
            if(a[i][j] == 0) b[i][j] = 1;
            else b[i][j] = 0;
        }
    }
    
    int N;
    return 0;
}