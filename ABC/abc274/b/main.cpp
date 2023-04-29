#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int H, W;
    cin >> H >> W;
    vector<vector<char> > C(H, vector<char>(W));

    rep(i, H){
        rep(j, W){
            cin >> C[i][j];
        }
    }

    int count = 0;
    rep(j, W){
        rep(i, H){
            if(C[i][j] == '#'){
                count++;
            }
        }
        cout << count << " ";
        count = 0;
    }
    cout << endl;
    return 0;
}