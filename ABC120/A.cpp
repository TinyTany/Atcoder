#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int ans = B / A > C ? C : B / A;
    cout << ans;
    return 0;
}