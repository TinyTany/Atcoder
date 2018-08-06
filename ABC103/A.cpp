#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int solve(int a1, int a2, int a3){
    int out = 0;
    out += abs(a2 - a1);
    out += abs(a3 - a2);
    return out;
}

int main(){
    int A1, A2, A3, min = 1000;
    cin >> A1 >> A2 >> A3;
    if(solve(A1, A2, A3) < min) min = solve(A1, A2, A3);
    if(solve(A1, A3, A2) < min) min = solve(A1, A3, A2);
    if(solve(A2, A1, A3) < min) min = solve(A2, A1, A3);
    if(solve(A2, A3, A1) < min) min = solve(A2, A3, A1);
    if(solve(A3, A2, A1) < min) min = solve(A3, A2, A1);
    if(solve(A3, A1, A2) < min) min = solve(A3, A1, A2);
    cout << min << endl;
    return 0;
}