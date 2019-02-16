#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int Gcd(int a, int b){
    int tmp;
    if(a<b){
    tmp = a;
    a = b;
    b = tmp;
  }
 
  /* ユークリッドの互除法 */
  int r = a % b;
  while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }
    return b;
}

int main(){
    int N, A[100001];
    cin >> N;
    for(int i=1; i<=N; ++i){
        cin >> A[i];
    }
    /*
    sort(A+1, A+N);
    int min = 2100000000;
    for(int i=2;i<=N;++i){
        if(A[i]%A[1] != 0 && A[i]%A[1] < min){
            min = A[i]%A[1];
        }
    }
    cout << min;
    */
    for(int i = 2; i <= N; ++i){
        A[1] = Gcd(A[1], A[i]);
    }
    cout << A[1];
    return 0;
}