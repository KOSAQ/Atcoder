#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    int N;
    cin >> N;
    int A[79];
    rep2(i, 1, 7*N){
        cin >> A[i];
    }
    int ans = 0;
    rep2(i, 1, 7*N){
        ans += A[i];
        if(i % 7 == 0){
            cout << ans << " ";
            ans = 0;
        }
    }

    return 0;
}