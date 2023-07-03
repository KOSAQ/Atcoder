#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)
#define ll long long

int main(void){
    int N;

    cin >> N;
    vector<pair<int, int> > P(N);

    rep(i, N){
        int a, b;
        cin >> a >> b;
        P[i] = {a, a + b};
    }
    vector<int> idx(N);
    iota(idx.begin(), idx.end(), 0);
    auto f = [&](int i, int j){
        return (ll) P[i].first * P[j].second > (ll) P[j].first * P[i].second;
    };
    stable_sort(idx.begin(), idx.end(), f);
    rep(i, N){
        cout << idx[i] + 1 << " ";
    }
    cout << endl;
    return 0;
}