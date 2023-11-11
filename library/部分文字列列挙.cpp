#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    string S;
    cin >> S;
    
    rep(i, S.size()){
        for(int j = i + 1; j <= S.size(); j++){
            string subS = S.substr(i, j - i);
            cout << subS << endl;
        }
    }
    return 0;
}