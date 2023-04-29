#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

    //C[i][j]を中心としたバツのサイズを返す
int sizex(vector<vector<char> >& vec, int a, int b, int H, int W){
    int n = 0;
    
    while(!(a - n < 0 || a + n >= H || b - n < 0 || b + n >= W)){
        if(vec[a + n][b + n] == '#' && vec[a + n][b - n] == '#' && vec[a - n][b + n] == '#' && vec[a - n][b - n] == '#'){
            n++;
        }
    }
    
    return n - 1;
}

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
            if(C[i][j] == '#'){
                if(sizex(C, i, j, H, W) != 0){
                    S[sizex(C, i, j, H, W) - 1]++;
                }
            }
        }
    }

    
    rep(i, N){
        cout << S[i] << " ";
    }
    cout << endl;
    return 0;
}