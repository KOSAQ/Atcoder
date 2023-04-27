#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    string S;
    cin >> S;

    int ans = -1;
    rep(i, S.length()){
        if(S[i] == 'a'){
            ans = i + 1;
        }
    }

    cout << ans << endl;
    return 0;
}