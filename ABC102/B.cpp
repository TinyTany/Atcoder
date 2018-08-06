#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

int mx = 0;

int abs(int a){
    if(a < 0) a *= -1;
    return a;
}

void solve(int A[], int k){
    if(k==0) return;
    for(int i=0; i<k; i++){
        if(abs(A[k]-A[i]) > mx) mx = abs(A[k]-A[i]);
    }
    return;
}

int main(){
    int N;
    cin >> N;
    int *A = new int[N];
    //dp = new int[N];
    //for(int i=0; i<N; i++) dp[i] = 0;
    for(int i=0; i<N; i++){
        //dp[i] = 0;
        cin >> A[i];
        solve(A, i);
    }
    cout << mx << endl;
    return 0;
}