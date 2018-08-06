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
    int N;
    cin >> N;
    if(N%S(N)==0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}