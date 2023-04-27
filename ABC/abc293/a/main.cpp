#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    string S;
    cin >> S;

    rep(i, S.length() / 2){
        swap(S[2 * i], S[2 * i + 1]);
    }

    cout << S << endl;
    return 0;
}