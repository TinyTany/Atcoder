#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
#define MOD 1000000007
#define MAX 100001

int solve(int N, int k, int *cost, int *A){
    if(cost[MAX * N + k] != -1) return cost[MAX * N + k];
    if(N == 0){
        cost[MAX * N + k] = 0;
        return 0;
    }
    long asum = 0;
    for(int i=1; i<=N; ++i){
        asum += A[i];
        asum %= MOD;
    }
    for(int i=1; i<=k-1 && k != 1; ++i){
        asum += solve(k-1, i, cost, A);
        asum %= MOD;
    }
    for(int i=1; i<=N-k && k != N; ++i){
        asum += solve(N-k, i, cost, A);
        asum %= MOD;
    }
    cost[MAX * N + k] = asum;
    return asum;
}

int main(){
    int N;
    int cost[MAX];
    int A[MAX];
    for(int i=0; i<MAX; ++i)cost[i] = -1;
    cin >> N;
    for(int i=1; i<=N; ++i) cin >> A[i];
    long ans = 0;
    for(int i=1; i<=N; ++i){
        ans += solve(N, i, cost, A);
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}