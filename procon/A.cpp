#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    if(N >= 2 * K - 1) cout << "YES";
    else cout << "NO";
    return 0;
}