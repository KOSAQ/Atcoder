#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    int N, M;
    cin >> N >> M;

    int A[109];
    int B[109];

    rep2(i, 1, N){
        cin >> A[i];
    }
    rep2(i, 1, M){
        cin >> B[i];
    }

    int ans = 0;

    rep2(i, 1, M){
        ans += A[B[i]];
    }

    cout << ans << endl;
    return 0;
}