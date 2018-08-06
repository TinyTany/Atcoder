#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

int main(){
    int N;
    cin >> N;
    if(N%2!=0) N*=2;
    cout << N << endl;
    return 0;
}