#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    int N, M;
    cin >> N >> M;
    string C[109];
    string D[109];
    int P[109];

    rep2(i, 1, N){
        cin >> C[i];
    }
    rep2(i, 1, M){
        cin >> D[i];
    }
    rep2(i, 0, M){
        cin >> P[i];
    }

    int ans = 0;
    bool flag = false;
    rep2(i, 1, N){
        string c = C[i];
        flag = false;
        rep2(i, 1, M){
            if(c == D[i]){
                ans += P[i];
                flag = true;
                break;
            }
        }
        if(!flag){
            ans += P[0];
        }
    }
    cout << ans << endl;

    


    return 0;
}