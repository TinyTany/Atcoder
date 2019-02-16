#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    long long K, A, B;
    cin >> K >> A >> B;
    K -= A - 1;
    long long S = A;
    if(2 < B - A){
        if(K % 2 != 0) S++;
        S += K / 2 * (B - A);
    }
    else{
        S += K;
    }
    cout << S;
    return 0;
}