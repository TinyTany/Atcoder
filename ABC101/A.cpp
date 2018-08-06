#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main(){
    int n=0;
    char c;
    for(int i=0; i<4;i++){
        cin >> c;
        if(c == '-') n--;
        else if(c == '+') n++;
    }
    cout << n << endl;
    return 0;
}