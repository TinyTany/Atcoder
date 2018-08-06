#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
#define MAX 10000000

typedef struct{
    int a, b;
}REG;

int main(){
    int N, M, a[MAX], b[MAX];
    cin >> N >> M;
    for(int i=1; i<= M; ++i) cin >> a[i] >> b[i];
    int ans = 1;
    for(int i=2; i<=M; ++i){
        for(int j=1; j<i; ++j){
            
        }
    }
    return 0;
}