#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    cout << ceil(N / 111.) * 111 << endl;
    return 0;
}