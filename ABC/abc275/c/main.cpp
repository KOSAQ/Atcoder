//https://atcoder.jp/contests/abc275/editorial/5141

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool in(int x){
    if(0 <= x && x < 9){
        return true;
    }
    else{
        return false;
    }
}

int main(void){
    vector<vector<char> > S(9, vector<char>(9));

    rep(i, 9){
        rep(j, 9){
            cin >> S[i][j];
        }
    }

    int ans = 0;
    int di, dj, i3, j3, i4, j4;
    
    for(int i1 = 0; i1 < 9; i1++){
        for(int j1 = 0; j1 < 9; j1++){
            for(int i2 = i1 + 1; i2 < 9; i2++){
                for(int j2 = j1; j2 < 9; j2++){
                    if(S[i1][j1] == '#' && S[i2][j2] == '#'){
                        di = i2 - i1;
                        dj = j2 - j1;
                        i3 = i2 + dj;
                        j3 = j2 - di;
                        i4 = i3 - di;
                        j4 = j3 - dj;

                        if(in(i3) && in(j3) && in(i4) && in(j4)){
                            if(S[i3][j3] == '#' && S[i4][j4] == '#'){
                                ans ++;
                            }
                        }
                    }
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}