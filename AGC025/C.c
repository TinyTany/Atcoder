#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct{
    int L, R;
}RANGE;

int getFarRng(RANGE *rng, int *rinfo, int *pos, int N){
    int max=0,tmp,maxidx;
    for(int i=0; i<N;i++){
        if(rinfo[i]) continue;
        if(*pos < rng[i].L) tmp = rng[i].L - *pos;
        else if(rng[i].R < *pos) tmp = *pos - rng[i].R;
        else tmp = 0;
        if(tmp > max) {max = tmp; maxidx = i;}
    }
    rinfo[maxidx] = 1;
    if(*pos < rng[maxidx].L) tmp = rng[maxidx].L - *pos;
    else if(rng[maxidx].R < *pos) tmp = -*pos + rng[maxidx].R;
    else tmp = 0;
    *pos += tmp;
    //printf("pos=%d\n", *pos);
    return max;
}

int main(){
    int N, pos=0,K=0;
    scanf("%d", &N);
    RANGE *rng = (RANGE*)malloc(sizeof(RANGE)*N);
    int *rnginfo = (int*)malloc(sizeof(int)*N);
    for(int i=0;i<N;i++) rnginfo[i]=0;
    for(int i=0; i<N; i++){
        scanf("%d %d", &(rng[i].L), &(rng[i].R));
    }
    for(int i=0; i<N; i++){
        K += getFarRng(rng, rnginfo, &pos, N);
    }
    K += abs(pos);
    printf("%d\n", K);
    free(rng);
    free(rnginfo);
    return 0;
}