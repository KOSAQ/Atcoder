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

    int ans = accumulate(A.begin(), A.end(), 0);
    cout << ans << endl;

    return 0;
}