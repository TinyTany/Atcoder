#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

long long gcd(long long a,long long b) {
    long long temp;
    while(b > 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    int N, a[5000]; long long ans=0;
    long long mula;
    cin >> N;
    for(int i=1; i<=N; ++i) cin >> a[i];
    mula = a[1];
    long long tmp = a[1];
    for(int i=2; i<=N; ++i) {
        mula *= a[i];
        mula /= gcd(a[i], tmp);
        tmp = mula;
    }
    mula--;
    for(int i=1; i<=N; ++i){
        long long tmp = mula % a[i];
        if(tmp < 0) tmp += a[i];
        ans += tmp;
    }
    cout << ans << endl;
    return 0;
}