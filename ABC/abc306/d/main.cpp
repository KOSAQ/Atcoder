//https://atcoder.jp/contests/abc306/editorial/6606
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    int N;
    cin >> N;
    int X[300009];
    int Y[300009];
    rep(i, N){
        cin >> X[i] >> Y[i];
    }

    long long dp[300009][2];
    rep2(i, 0, N){
        dp[i][0] = -4e18;
        dp[i][1] = -4e18;
    }
    dp[0][0] = 0;
    
    rep(i, N){
        if(X[i] == 0){
            dp[i + 1][0] = max(dp[i][0], max(dp[i][0], dp[i][1]) + Y[i]);
        }
        else if(X[i] == 1){
            dp[i + 1][1] = max(dp[i][1], dp[i][0] + Y[i]);
        }

        dp[i + 1][0] = max(dp[i + 1][0], dp[i][0]);
        dp[i + 1][1] = max(dp[i + 1][1], dp[i][1]);
    }

    cout << max(dp[N][0], dp[N][1]) << endl;
    return 0;
}