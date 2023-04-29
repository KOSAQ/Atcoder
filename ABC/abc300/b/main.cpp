#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void tate(vector<vector<char> >& vec, int s, int H, int W){
    vector<char>  vec_temp(W);
    for(int time = 0; time < s; time++){
        rep(i, W){
        vec_temp[i] = vec[0][i];
        }
        for(int i = 0; i < H - 1; i++){
            for(int j = 0; j < W; j++){
                vec[i][j] = vec[i + 1][j];
            }
        }
        for(int i = 0; i < W; i++){
            vec[H - 1][i] = vec_temp[i];
        }
    }
    return;
}

void yoko(vector<vector<char> >& vec, int t, int H, int W){
    vector<char> vec_temp(H);
    for(int time = 0; time < t; time++){
        rep(i, H){
            vec_temp[i] = vec[i][0];
        }
        for(int j = 0; j < W - 1; j++){
            for(int i = 0; i < H; i++){
                vec[i][j] = vec[i][j + 1];
            }
        }
        for(int i = 0; i < H; i++){
            vec[i][W - 1] = vec_temp[i];
        }
    }
    return;
}

void resetA(vector<vector<char> >& vec, vector<vector<char> >& vec2, int H, int W){
    rep(i, H){
        rep(j, W){
            vec[i][j] = vec2[i][j];
        }
    }
    return;
}

int main(void){
    int H, W;
    cin >> H >> W;
    vector<vector<char> > A(H, vector<char>(W));
    vector<vector<char> > B(H, vector<char>(W));

    rep(i, H){
        rep(j, W){
            cin >> A[i][j];
            //A_temp[i][j] = A[i][j];
        }
    }
    rep(i, H){
        rep(j, W){
            cin >> B[i][j];
        }
    }

    
    // tate(A,9,H,W);
    // yoko(A,14,H,W);
    
    // for(int i = 0; i < H; i++){
    //     for(int j = 0; j < W; j++){
    //         cout << A[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // for(int i = 0; i < H; i++){
    //     for(int j = 0; j < W; j++){
    //         cout << B[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // if(A == B){
    //     cout << "true!" << endl;
    // }

    for(int i = 0; i < 4 * H; i++){
        for(int j = 0; j < 4 * W; j++){
            vector<vector<char> > A_temp(H, vector<char>(W));
            copy(A.begin(), A.end(), A_temp.begin());
            tate(A_temp, i, H, W);
            yoko(A_temp, j, H, W);
            if(A_temp == B){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}