#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main(){
    int N, K, idx1, ans=0;
    cin >> N >> K;
    int *A = (int *)malloc(sizeof(int) * N);
    for(int i=0; i<N; i++){
        cin >> A[i];
        if(A[i]==1) idx1 = i+1;
    }
    int tmp1 = idx1;
    if(idx1 < K){
        ans++;
        idx1 = K;
        while(idx1 < N){
            idx1+=K-1;
            ans++;
        }
        cout << ans << endl;
        free(A);
        return 0;
    }else if(N-K+1 < idx1){
        ans++;
        idx1=N-K+1;
        while(idx1 > 1){
            idx1-=K-1;
            ans++;
        }
        idx1 = tmp1;
        cout << ans << endl;
        free(A);
        return 0;
    }else{
        while(idx1 > 1){
            idx1-=K-1;
            ans++;
        }
        idx1 = tmp1;
        while(idx1 < N){
            idx1+=K-1;
            ans++;
        }
    }
    if(N==K) ans = 1;
    cout << ans << endl;
    free(A);
    return 0;
}