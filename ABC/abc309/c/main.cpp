//https://atcoder.jp/contests/abc309/editorial/6746
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    int N, K;
    cin >> N >> K;
    vector<pair<int, int> > ab(N);
    long long count = 0;
    rep(i, N){
        cin >> ab[i].first >> ab[i].second;
        count += ab[i].second;
    }

    sort(ab.begin(), ab.end());

    if(count <= K){
        cout << 1 << endl;
        return 0;
    }
    rep(i, ab.size()){
        if(count <= K){
            cout << ab[i - 1].first + 1 << endl;
            return 0;
        }
        count -= ab[i].second;
    }
    cout << ab.back().first + 1 << endl;
    return 0;
}