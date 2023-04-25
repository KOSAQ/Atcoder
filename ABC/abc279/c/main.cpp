#include <bits/stdc++.h>
using namespace std;

int main(void){
    int H, W;
    cin >> H >> W;

    vector<vector<char> > S(H, vector<char>(W));
    vector<vector<char> > T(H, vector<char>(W));

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> S[i][j];
        }
    }
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> T[i][j];
        }
    }

    vector<vector<char> > St(W, vector<char>(H));
    vector<vector<char> > Tt(W, vector<char>(H));

    for(int j = 0; j < W; j++){
        for(int i = 0; i < H; i++){
            St[j][i] = S[i][j];
            Tt[j][i] = T[i][j];
        }
    }

    sort(St.begin(), St.end());
    sort(Tt.begin(), Tt.end());

    if(St == Tt){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }


    return 0;
}