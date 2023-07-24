#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    int N, D;
    cin >> N >> D;
    string S[N];
    rep(i, N){
        cin >> S[i];
    }
    int bits[N][D];
    rep(i, N){
        rep(j, D){
            if(S[i][j] == 'o'){
                bits[i][j] = 1;
            }
            else{
                bits[i][j] = 0;
            }
        }
    }
    
    //----------

    int ans[D];
    rep(i, D){
        ans[i] = 1;
    }
    
    rep(i, D){
        rep(j, N){
            ans[i] = ans[i] & bits[j][i];
        }
    }
    
    int count = 0;
    int maxans = 0;
    rep(i, D){

        if(ans[i] == 1){
            count++;
            maxans = max(count, maxans);
        }
        if(ans[i] == 0){
            count = 0;
        }
    }
    cout << maxans << endl;
    

    return 0;
}