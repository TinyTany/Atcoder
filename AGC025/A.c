#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int digsum(int a){
    int sum = 0;
    while(1){
        if(a == 0) break;
        sum += a - (a/10)*10; 
        a/=10;
    }
    return sum;
}

int main(){
    int N, min=INT_MAX, A, B;
    scanf("%d", &N);
    A = N-1; B = 1;
    while(1){
        if(A==0) break;
        if(digsum(A)+digsum(B) < min) min = digsum(A) + digsum(B);
        A--;B++;
    }
    printf("%d\n", min);
    return 0;
}