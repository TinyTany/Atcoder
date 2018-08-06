#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    string S, T, tmp;
    cin >> S;
    cin >> T;
    tmp = S;
    for(int i=0; i<S.size(); ++i){
        if(tmp == T){
            cout << "Yes" << endl;
            return 0;
        }
        tmp = "";
        tmp = S[S.size()-1] + S;
        tmp.pop_back();
        S = tmp;
    }
    cout << "No" << endl;
    return 0;
}