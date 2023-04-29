//https://atcoder.jp/contests/abc273/editorial/5018

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N;
    cin >> N;
    map<int, int> mp;
    int A;
    rep(i, N){
        cin >> A;
        mp[A]++;
    }

    for(auto it = mp.rbegin(); it != mp.rend(); it++){
        cout << it->second << endl;
    }
    rep(i, N - mp.size()){
        cout << 0 << endl;
    }

    
    return 0;
}