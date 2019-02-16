#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int gcd( int m, int n )
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

int main(){
    int N, M;
    cin >> N >> M;
    if(M % N == 0){
        cout << M / N << endl;
        return 0;
    }
    cout << gcd(M, M % N) << endl;
    return 0;
}