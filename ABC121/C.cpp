#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
using namespace std;
#define INF 999999999
#define int64 long long
#define rep(i, n) for(int i = 1; i <= (int)(n); i++)
int gcd(int a,int b){return b?gcd(b,a%b):a;}

typedef pair<int64, int64> P;
bool pairCompare(const P& firstElof, const P& secondElof)
{
    return firstElof.first <= secondElof.first;
}

int main(){
    int64 N, M;
    cin >> N >> M;
    int64 A[100001], B[100001];
    pair<int64, int64> p[100001];
    rep(i, N) {
        int a, b;
        cin >> a >> b;
        p[i] = P(a, b);
    }
    sort(p+1, p+N+1); //rep(i, 2) cout << p[i].first << endl;
    int64 ans = 0;
    rep(i, N){
        if(p[i].second < M){
            ans += p[i].first * p[i].second;
            M -= p[i].second;
        }
        else{
            ans += p[i].first * M;
            M = 0;
        }
        if(M == 0) break;
    }
    cout << ans;
    return 0;
}