#include <bits/stdc++.h>

using ll = long long;
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    int N;
    string S;
    cin >> N >> S;
    //----------
    for(int i = 0; i < N - 2; i++){
        if(S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C'){
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}