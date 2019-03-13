#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    int A, B, K;
    cin >> A >> B >> K;
    vector<int> vec;
    for(int i=1; i<=100; ++i){
        if(A%i==0 && B%i==0){
            vec.push_back(i);
        }
    }
    int size = vec.size();
    cout << vec[size-K];
    return 0;
}