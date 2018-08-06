#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int S(int n){
    int out=0;
    while(n != 0){
        out += n - (n/10) * 10;
        n/=10;
    }
    return out;
}

int main(){
    int K;
    cin >> K;
    long *snk = (long*)malloc(sizeof(long)*K);
    if(K <= 9){
        for(int i=1; i<=K; i++){
            cout << i << endl;
        }
        return 0;
    }
    for(int i=0; i<9; i++){
        snk[i] = i+1;
    }
    for(int i=1; i<K-8; i++){
        snk[i+8] = 10 + 10*i - 1;
    }
    for(int i=0; i<K; i++){
        cout << snk[i] << endl;
    }
    free(snk);
    return 0;
}