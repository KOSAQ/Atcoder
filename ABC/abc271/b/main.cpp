#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N, Q;
    cin >> N >> Q;
    map<int, vector<int> > La;

    rep(i, N){
        int L;
        cin >> L;
        rep(j, L){
            int a;
            cin >> a;
            La[i + 1].push_back(a);
        }
    }

    vector<int> s(Q);
    vector<int> t(Q);
    rep(i, Q){
        cin >> s[i] >> t[i];
        cout << La[s[i]][t[i] - 1] << endl;
    }
    return 0;
}