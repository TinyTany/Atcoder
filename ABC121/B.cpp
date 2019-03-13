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
    int N, M, C;
    cin >> N >> M >> C;
    int A[100][100], B[100];
    rep(i, M) cin >> B[i];
    rep(i, N) rep(j, M){
        cin >> A[i][j];
    }
    int cnt = 0;
    rep(i, N){
        int sum = C;
        rep(j, M){
            sum += A[i][j] * B[j];
        }
        if(sum > 0) cnt++;
    }
    cout << cnt;
    return 0;
}