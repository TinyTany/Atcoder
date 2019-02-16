#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

long int gcd(long int m, long int n )
{
	// 引数に０がある場合は０を返す
	if ( ( 0 == m ) || ( 0 == n ) )
		return 0;
	
	// ユークリッドの方法
	while( m != n )
	{
		if ( m > n ) m = m - n;
		else         n = n - m;
	}
	return m;
}//gcd

long int lcd(long int m, long int n){
    return m * n / gcd(m, n);
}

int main(){
    long int N, M;
    cin >> N >> M;
    string S, T;
    cin >> S;
    cin >> T;
    /*
    if(gcd(M, N) == 1){
        cout << M * N << endl;
        return 0;
    }
    //*/
    long int gcdmn = gcd(M, N);
    //cout << gcdmn << endl;
    for(long int i=0; i<gcdmn; ++i){
        if(S[N / gcdmn * i] != T[M / gcdmn * i]){
            cout << -1 << endl;
            return 0;
        }
    }
    cout << lcd(M, N) << endl;
    return 0;
}