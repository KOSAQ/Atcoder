#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N, A, B;
    cin >> N >> A >> B;
    vector<int> C(N);
    rep(i, N){
        cin >> C[i];
    }

    int sum = A + B;

    rep(i, N){
        if(sum == C[i]){
            cout << i + 1 << endl;
        }
    }

    return 0;
}