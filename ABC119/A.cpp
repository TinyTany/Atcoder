#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    int y, m, d;
    string s;
    cin >> s;
    sscanf(s.c_str(), "%d/%d/%d", &y, &m, &d);
    if(y < 2019) cout << "Heisei";
    else if(y == 2019 && m < 4) cout << "Heisei";
    else if(y == 2019 && m == 4 && d <= 30) cout << "Heisei";
    else cout << "TBD";
    return 0;
}