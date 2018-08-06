#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string>
using namespace std;

int main(){
    string str;
    cin >> str;
    int w;
    cin >> w;
    for(int i=0; i<str.length(); i+=w) cout << str[i];
    cout << endl;
    return 0;
}