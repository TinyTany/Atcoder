#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    int N;
    string str[101];
    cin >> N;
    for(int i=0; i<N; ++i){
        cin >> str[i];
        if(i == 0) continue;
        if(str[i][0] != str[i-1][str[i-1].length()-1]){
            cout << "No" << endl;
            return 0;
        }
        for(int j=0; j<i; ++j){
            if(str[i] == str[j]){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}