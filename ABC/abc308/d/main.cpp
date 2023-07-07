#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

bool visited[509][509];
string snuke = "snuke";
int H, W;
char S[509][509];
int diffx[5] = {-100, 1, 0, -1, 0};
int diffy[5] = {-100, 0, 1, 0, -1};


void dfs(int x, int y, int idx){
    visited[x][y] = true;
    int next = (idx + 1) % 5;
    rep2(i, 1, 4){
        int nextx = diffx[i] + x;
        int nexty = diffy[i] + y;
        if(1 <= nextx && nextx <= H){
            if(1 <= nexty && nexty <= W){
                if(visited[nextx][nexty] == false){
                    if(S[nextx][nexty] == snuke[next]){
                        dfs(nextx, nexty, next);
                    }
                }
            }
        }
    }
    return;
}

int main(void){
    cin >> H >> W;
    rep2(i, 1, H){
        rep2(j, 1, W){
            cin >> S[i][j];
        }
    }

    if(S[1][1] != 's'){
        cout << "No" << endl;
        return 0;
    }

    dfs(1, 1, 0);

    if(visited[H][W]){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}