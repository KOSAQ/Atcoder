//https://programming-hiroba.com/abc300-c/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int H, W;
int N;
char C[109][109];

int checksize(int i, int j){
    int n = 0;
    while(1){
        if(!(i + n + 1 <= H && j + n + 1 <= W && C[i + n + 1][j + n + 1] == '#')){//右下
            break;
        }
        if(!(i + n + 1 <= H && j - n - 1 > 0 && C[i + n + 1][j - n - 1] == '#')){//左下
            break;
        }
        if(!(i - n - 1 > 0 && j + n + 1 <= W && C[i - n - 1][j + n + 1] == '#')){//右上
            break;
        }
        if(!(i - n - 1 > 0 && j - n - 1 > 0 && C[i - n - 1][j - n - 1] == '#')){//左上
            break;
        }
        n++;
    }
    return n;
}

int main(void){
    cin >> H >> W;
    N = min(H, W);
    
    rep2(i, 1, H){
        rep2(j, 1, W){
            cin >> C[i][j];
        }
    }

    map<int, int> mp;

    for(int i = 2; i < H; i++){
        for(int j = 2; j < W; j++){
            if(C[i][j] == '#'){
                mp[checksize(i, j)]++;
            }
        }
    }

    rep2(i, 1, N){
        cout << mp[i] << " ";
    }
    cout << endl;


    return 0;
}