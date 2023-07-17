#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    string S;
    cin >> S;

    rep(i, S.size()){
        if(isupper(S[i])){
            cout << i + 1 << endl;
            return 0;
        }
    }
    
}