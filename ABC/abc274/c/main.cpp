#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N){
        cin >> A[i];
    }

    vector<int> ans(2 * N + 1);

    rep(i, N){
        ans[2 * i + 1] = ans[A[i] - 1] + 1;
        ans[2 * i + 2] = ans[A[i] - 1] + 1;
    }

    rep(i, 2 * N + 1){
        cout << ans[i] << endl;
    }
    return 0;
}