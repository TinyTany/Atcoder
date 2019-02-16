#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

bool contains(vector<tuple<int, int>> &v, int n){
    for(int i=0; i<v.size(); ++i){
        if(get<1>(v[i]) == n) {
            get<0>(v[i])++;
            return true;
        }
    }
    return false;
}

int main(){
    int n, v[100001], even[100001] ={0}, odd[100001] = {0};
    cin >> n;
    int flag = 0;
    for(int i=1; i<=n; ++i) {
        cin >> v[i];
    }
    for(int i=1; i<=n; ++i) if(v[1] == v[i]) ++flag;
    if(flag == n){
        cout << n / 2 << endl;
        return 0;
    }
    vector<tuple<int, int>> veven, vodd;
    for(int i=2; i<=n; i+=2){
        if(veven.empty()) {
            veven.push_back(make_tuple(0, v[i]));
            continue;
        }
        if(!contains(veven, v[i])){
            veven.push_back(make_tuple(0, v[i]));
        }
    }
    for(int i=1; i<=n; i+=2){
        if(vodd.empty()) {
            vodd.push_back(make_tuple(0, v[i]));
            continue;
        }
        if(!contains(vodd, v[i])){
            vodd.push_back(make_tuple(0, v[i]));
        }
    }
    sort(veven.rbegin, veven.rend);
    sort(vodd.rbegin, vodd.rend);
    
    return 0;
}