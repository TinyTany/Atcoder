#include<stdio.h>
#include<stdlib.h>

int main(){
    int N, D1, D2;
    scanf("%d %d %d", &N, &D1, &D2);
    int *mat = (int*)malloc(sizeof(int)* 2*N * 2*N);
    for(int i=0; i<2*N; i++) for(int j=0; j<2*N;j++) mat[2*N * i + j] = 0;
    
}