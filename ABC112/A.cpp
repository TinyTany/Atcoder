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
    if(N == 1){
        cout << "Hello World" << endl;
        return 0;
    }
    else{
        int a, b;
        cin >> a;
        cin >> b;
        cout << a+b << endl;
    }
    return 0;
}