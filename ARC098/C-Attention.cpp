#include<iostream>
#include<string>
#include<limits.h>
using namespace std;

int attention(string S, int x){
    int out = 0;
    for(int i=0; i<x; i++) if(S[i] == 'W') out++;
    for(int i=x+1; i<S.length(); i++) if(S[i] == 'E') out++;
    return out;
}

int main(){
    int N, min = INT_MAX;
    cin >> N;
    string S;
    cin >> S;
    int min_tmp;
    for(int i=0; i<N; i++) {
        min_tmp = attention(S, i);
        if(min_tmp < min) min = min_tmp;
    }
    cout << min << endl;
    return 0;
}