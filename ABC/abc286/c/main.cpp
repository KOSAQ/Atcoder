//https://atcoder.jp/contests/abc286/editorial/5587
#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    long long A, B;
    cin >> N >> A >> B;
    string S;
    cin >> S;
    S += S;

    long long ans = 1ll << 60;

    for(int i = 0; i < N; i++){
        long long temp = A * i;
        for(int j = 0; j < N / 2; j++){
            if(S[i + j] != S[N - 1 + i - j]){
                temp += B;
            }
        }
        ans = min(ans, temp);
    }
    cout << ans << endl;
}