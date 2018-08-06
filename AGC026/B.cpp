#include<bits/stdc++.h>
using namespace std;
#define lld long long int

void solve(lld A, lld B, lld C, lld D){
    lld x_1 = A - ((A - C) / B) * B;
    lld back = (D - B) % B;
    if(x_1 != C) x_1 -= B;
    if(x_1 < 0){
        printf("No\n");
        return;
    }
    
    return;
}

int main(){
    int T;
    lld A, B, C, D;
    cin >> T;
    for(int i=0; i<T; ++i){
        cin >> A >> B >> C >> D;
        solve(A, B, C, D);
    }
    return 0;
}