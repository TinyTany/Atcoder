#include<iostream>
#include<stdlib.h>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
    long long N, sum=0;
    cin >> N;
    long long *A = new long long[N+1];
    long long b;
    for(int i=1; i<=N; i++){
        cin >> A[i];
        A[i] -= i;
    }
    sort(A+1, A+N+1);
    b = A[N/2 + 1];
    for(int i=1; i<=N; i++){
        sum += abs(A[i]-b);
    }
    cout << sum << endl;
    return 0;
}