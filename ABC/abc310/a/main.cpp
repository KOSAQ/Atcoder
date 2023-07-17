#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    int N, P, Q;
    cin >> N >> P >> Q;
    int D[109];
    rep2(i, 1, N){
        cin >> D[i];
    }

    int minD = D[1];

    rep2(i, 1, N){
        if(minD > D[i]){
            minD = D[i];
        }
    }

    if(P < Q + minD){
        cout << P << endl;
    }
    else{
        cout << Q + minD << endl;
    }

    return 0;
}