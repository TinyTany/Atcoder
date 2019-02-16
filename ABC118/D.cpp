#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int flag = 0;

void printAns(int *a){
    for(int i = 9; i >= 1; --i){
        for(int j = 0; j < a[i]; ++j){
            cout << i;
        }
    }
}

void solve(int *ans, int idx, int *A, int N, int M, int *C){
    ans[A[idx]] += N / C[A[idx]];
    int r = N % C[A[idx]];
    if(r == 0 && flag ==0){
        printAns(ans);
        flag = 1;
        return;
    }
    else{
        if(idx + 1 > M) return;
        while(r < C[A[idx+1]]){
            --ans[A[idx]];
            r += C[A[idx]];
        }
        //for(int i=idx+1; i<=M; ++i){
            solve(ans, idx+1, A, r, M, C);
        //}
    }
}

int main(){
    int N, M, A[10], C[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, ans[10] = {};
    cin >> N >> M;
    for(int i = 1; i <= M; ++i){
        cin >> A[i];
    }
    if (M == 1){
        ans[A[1]] += N / C[A[1]];
        printAns(ans);
        return 0;
    }
    // 使える数をマッチの使用数の昇順にソート
    for(int i = 1; i <= M; ++i){
        for(int j = 2; j <= M; ++j){
            if (C[A[j]] < C[A[j-1]] || (C[A[j]] == C[A[j-1]] && A[j] > A[j-1])){
                int tmp = A[j];
                A[j] = A[j-1];
                A[j-1] = tmp;
            }
        }
    }
    solve(ans, 1, A, N, M, C);
    return 0;
}