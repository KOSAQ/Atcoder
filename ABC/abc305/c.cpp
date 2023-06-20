#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int H, W;
    cin >> H >> W;
    vector<vector<char> > S(H, vector<char>(W));
    rep(i, H){
        rep(j, W){
            cin >> S[i][j];
        }
    }

    set<int> x;
    set<int> y;

    rep(i, H){
        rep(j, W){
            if(S[i][j] == '#'){
                x.insert(j);
                y.insert(i);
            }
        }
    }
    int left = W - 1;
    int right = 0;
    int top = H - 1;
    int bottom = 0;

    for(auto itr = x.begin(); itr != x.end(); itr++) {
        if(*itr < left){
            left = *itr;
        }
        if(*itr > right){
            right = *itr;
        }
    }
    for(auto itr = y.begin(); itr != y.end(); itr++) {
        if(*itr < top){
            top = *itr;
        }
        if(*itr > bottom){
            bottom = *itr;
        }
    }

    for(int i = top; i <= bottom; i++){
        for(int j = left; j <= right; j++){
            if(S[i][j] != '#'){
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }
    return 0;
}