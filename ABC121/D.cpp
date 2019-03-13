#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
#define INF 999999999
#define int64 long long
#define rep(i, n) for(int i = 1; i <= (int)(n); i++)
int gcd(int a,int b){return b?gcd(b,a%b):a;}

int main(){
    int64 A, B;
    cin >> A >> B;
    int64 len = B-A+1;
    int64 ans=0;
    rep(i, 64){
        if(len % 2 == 1){
            ans += pow(2, i);
        }
        len /= 2;
        if(len <= 0) break;
    }
    cout << ans;
}

/*
int64 solve(int64 a, int64 b){
    if(b - a == 1){
        return a^b;
    }
    else if((b-a+1) % 2 == 0){
        return solve(a, a + (b-a)/2) ^ solve(a + (b-a)/2 + 1, b);
    }
    else if((b-a+1) % 2 == 1){
        return solve(a, b-1) ^ b;
    }
    else{
        cout << "hoge";
        return 0;
    }
}

int main(){
    int64 A, B;
    cin >> A >> B;
    cout << solve(A, B);
    return 0;
}
*/