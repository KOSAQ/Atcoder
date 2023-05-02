#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N, M;
    cin >> N >> M;

    vector<set<int> > join(M);

    rep(i, M){
        int k;
        cin >> k;
        rep(j, k){
            int x;
            cin >> x;
            join[i].insert(x);
        }
    }

    int pair = 0;
    rep(i, N){
        for(int j = i + 1; j < N; j++){
            rep(k, M){
                if(count(join[k].begin(), join[k].end(), i + 1) > 0 && count(join[k].begin(), join[k].end(), j + 1) > 0){
                    pair++;
                    break;
                }
            }
        }
    }
    if(pair == N * (N - 1) / 2){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}