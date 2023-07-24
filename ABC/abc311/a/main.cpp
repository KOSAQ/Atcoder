#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    int N;
    string S;
    cin >> N >> S;
    
    //----------
    bool flagA, flagB, flagC;
    flagA = false;
    flagB = false;
    flagC = false;

    rep(i, S.size()){
        if(S[i] == 'A'){
            flagA = true;
        }
        if(S[i] == 'B'){
            flagB = true;
        }
        if(S[i] == 'C'){
            flagC = true;
        }

        if(flagA && flagB && flagC){
            cout << i + 1 << endl;
            return 0;
        }
        
    }

    return 0;
}