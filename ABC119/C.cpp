#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

void check(int A, int B, int C, int *l){

}

int solve(int A, int B, int C, int *l, int N){
    int ans=0;
    if(N == 3){
        sort(l+1, l+N);
        ans += abs(l[3]-A);
        ans += abs(l[2]-B);
        ans += abs(l[1]-C);
        return ans;
    }
    
}

int main(){
    int N, A, B, C, l[10];
    cin >> N >> A >> B >> C;
    for(int i=1; i<=N; ++i){
        cin >> l[i];
    }

    return 0;
}