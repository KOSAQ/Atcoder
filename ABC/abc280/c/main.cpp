#include <bits/stdc++.h>
using namespace std;

int main(void){
    string S, T;
    cin >> S >> T;

    for(int i = 0; i < S.length(); i++){
        if(S[i] == T[i]){
            continue;
        }
        else{
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << T.length() << endl;
    return 0;
}