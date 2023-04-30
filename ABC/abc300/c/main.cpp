#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int H, W;
    cin >> H >> W;
    int N;
    N = min(H, W);
    vector<int> S(N, 0);
    vector<vector<char> > C(H, vector<char>(W));
    rep(i, H){
        rep(j, W){
            cin >> C[i][j];
        }
    }

    rep(i, H){
        rep(j, W){
            
        }
    }

    
    rep(i, N){
        cout << S[i] << " ";
    }
    cout << endl;
    return 0;
}