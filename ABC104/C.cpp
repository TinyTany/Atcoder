#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
#define IDX 100000000
#define INF 2147483647

int solveb(int G, int D, int _p[]){
    int cnt = 0;
    int p[IDX];
    for(int i=1; i<=D; ++i) p[i] = _p[i];
    while(G > 0){
        for(int i=D; i>0; --i){
            if(G >= 100*i && p[i]>0){
                G -= 100*i;
                p[i]--;
                cnt++;
                break;
            }
        }
        if(p[1] == 0){
            cnt = INF;
            break;
        }
    }
    return cnt;
}

int solvec(int G, int D, int _p[], int _c[]){
    int cnt=0;
    int S[IDX];
    double Sp[IDX];
    for(int i=1; i<=D; ++i){
        S[i] += _p[i] * 100 * i;
        S[i] += _c[i];
        Sp[i] = S[i] / (double)_p[i];
    }
    int p[IDX]; for(int i=1; i<=D; ++i) p[i] = _p[i];
    while(G > 0){
        
    }
    return cnt;
}

int main(){
    int D, G, p[IDX], c[IDX];
    cin >> D >> G;
    for(int i=1; i<=D; ++i) cin >> p[i] >> c[i];
    int cntb = solveb(G, D, p);
    return 0;
}