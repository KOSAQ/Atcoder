//https://atcoder.jp/contests/abc302/editorial/6408

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    int N, M;
    cin >> N >> M;
    vector<string> S(N);
    rep(i, N){
        cin >> S[i];
    }

    sort(S.begin(), S.end());

    do{
        bool flag = true;
        rep(i, N - 1){
            int count = 0;
            rep(j, M){
                if(S[i][j] != S[i + 1][j]){
                    count++;
                }
            }
            if(count != 1){
                flag = false;
            }
        }
        if(flag){
            cout << "Yes" << endl;
            return 0;
        }
    }while(next_permutation(S.begin(), S.end()));
    
    cout << "No" << endl;
    return 0;
}