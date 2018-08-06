#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 1000
int main(){
    int N, i, ans=0;
    char a[MAXSIZE];
    scanf("%d", &N);
    for(i=0; i<N; i++) scanf("%d", a+i);
    for(i=0; i<N; i++){
        while(a[i]%2 == 0){
            ans++;
            a[i] /= 2;
        }
    }
    printf("%d\n", ans);
    return 0;
}