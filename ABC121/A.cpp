#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
#define INF 999999999
#define int64 long long
#define rep(i, n) for(int i = 1; i <= (int)(n); i++)
int gcd(int a,int b){return b?gcd(b,a%b):a;}


int main(){
    int H, W;
    cin >> H >> W;
    int h, w;
    cin >> h >> w;
    cout << H*W - (h*W + w*H) + h*w;
    return 0;
}