#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    string S;
    cin >> S;
    if(S[0] != 'A') cout << "WA" << endl;
    else if(*(S.c_str()+1) < 97 || *(S.c_str()+1) > 122) cout << "WA" << endl;
    else{
        int C = 0, Cidx;
        for(int i=2; i<S.length()-1; ++i){
            if(S[i] == 'C') { ++C; Cidx = i;}
        }
        if(C != 1) cout << "WA" << endl;
        else{
            for(int i=2; i<S.length(); ++i){
                if(i == Cidx) continue;
                if(*(S.c_str()+i) < 97 || *(S.c_str()+i) > 122) {
                    cout << "WA" << endl;
                    return 0;
                }
            }
            cout << "AC" << endl;
        }
    }
    return 0;
}