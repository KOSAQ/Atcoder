//https://programming-hiroba.com/abc303-d/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    int X, Y, Z;
    cin >> X >> Y >> Z;
    string S;
    cin >> S;

    long long dp[S.size() + 1][2];

    dp[0][0] = 0;
    dp[0][1] = Z;

    rep(i, S.size()){
        if(S[i] == 'a'){
            dp[i + 1][0] = min(dp[i][0] + X, dp[i][1] + Z + X);
            dp[i + 1][1] = min(dp[i][0] + Z + Y, dp[i][1] + Y);
        }
        else if(S[i] == 'A'){
            dp[i + 1][0] = min(dp[i][0] + Y, dp[i][1] + Z + Y);
            dp[i + 1][1] = min(dp[i][0] + Z + X, dp[i][1] + X);
        }
    }

    cout << min(dp[S.size()][0], dp[S.size()][1]) << endl;

    return 0;
}