//https://programming-hiroba.com/abc302-b/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)



int main(void){
    int H, W;
    cin >> H >> W;
    string S[H];
    rep(i, H){
        cin >> S[i];
    }
    int dx[8] = {1, -1, 0, 0, 1, -1, 1, -1};
    int dy[8] = {0, 0, 1, -1, 1, -1, -1, 1};


    rep(i, H){
        rep(j, W){
            rep(k, 8){
                if(dx[k] * 4 + j < 0 || dx[k] * 4 + j >= W || dy[k] * 4 + i < 0 || dy[k] * 4 + i >= H){
                    continue;
                }
                string t = "";
                rep(l, 5){
                    int x = dx[k] * l + j;
                    int y = dy[k] * l + i;
                    
                    t += S[y][x];
                }
                if(t == "snuke"){
                    rep(l, 5){
                        cout << dy[k] * l + i + 1 << " " << dx[k] * l + j + 1 << endl;
                    }
                    return 0;
                }
            }
        }
    }
    
    
    return 0;
}