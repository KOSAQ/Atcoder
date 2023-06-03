#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N, M;
    cin >> N >> M;
    vector<vector<int> > a(M, vector<int>(N));

    rep(i, M){
        rep(j, N){
            cin >> a[i][j];
        }
    }

    map<int, set<int> > mp;

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N - 1; j++){
            mp[a[i][j]].insert(a[i][j+1]);
        }
    }
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N - 1; j++){
            mp[a[i][N - j - 1]].insert(a[i][N - j - 2]);
        }
    }

    int ans = 0;

    
    for(int k = 1; k < N + 1; k++){
        ans += (N - 1 - mp[k].size());
    }
    cout << ans / 2 << endl;

    return 0;
}