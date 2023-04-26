#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N, X;
    cin >> N >> X;
    vector<int> P(N);

    rep(i, N){
        cin >> P[i];
    }

    rep(i, N){
        if(P[i] == X){
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}