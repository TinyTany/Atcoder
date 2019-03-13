#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

long reach(int i, int j, long *A, long *B, int *flag, int M){
    flag[j] = 1; long out=1;
    for(int k=i+1; k <= M; ++k){
        if(A[k]==j && flag[B[k]] != 1) out += reach(i, B[k], A, B, flag, M);
        if(B[k]==j && flag[A[k]] != 1) out += reach(i, A[k], A, B, flag, M);
    }
    return out;
}

long solve(int i, long *A, long *B, int M){
    int flag1[100001] = {0};
    int flag2[100001] = {0};
    long rhs = reach(i, A[i], A, B, flag1, M);//cout << rhs;
    long lhs = reach(i, B[i], A, B, flag2, M);//cout << lhs;
    return rhs == lhs ? 0 : rhs * lhs;
}

int main(){
    long N, M, A[100001], B[100001];
    cin >> N >> M;
    for(int i=1; i<=M; ++i){
        cin >> A[i] >> B[i];
    }
    long ans[100001];
// solve
    ans[1] = solve(1, A, B, M);
    for(int i=2; i<=M; ++i){
        ans[i] = ans[i-1] + solve(i, A, B, M);
    }
    for(int i=1; i<=M; ++i){
        cout << ans[i] << '\n';
    }
    return 0;
}