#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<numeric>
#include<math.h>
#include<vector>
using namespace std;

int euclid( int a, int b )
{
    int temp;

    if( a < b ) { temp = a; a = b; b = temp; }
    if( b < 1 ) return -1;

    if( a % b == 0 ) return b;
    return euclid( b, a % b );
}

int main(){
    int N, X, x[1000000];
    cin >> N >> X;
    for(int i=1; i<=N; ++i){
        cin >> x[i];
    }
    x[N+1] = X;
    sort(x+1, x+N+2);
    int d[1000000];
    for(int i=1; i<=N; ++i) d[i] = x[i+1] - x[i];
    int ans;
    if(N == 1) ans = d[1];
    else ans = euclid(d[1], d[2]);
    for(int i=3; i<=N-1; ++i) ans = euclid(ans, d[i]);
    cout << ans << endl;
    return 0;
}