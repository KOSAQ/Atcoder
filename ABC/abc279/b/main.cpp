#include <bits/stdc++.h>
using namespace std;

int main(void){
    string S, T;
    cin >> S >> T;

    if(S.length() < T.length()){
        cout << "No" << endl;
        return 0;
    }


    for(int i = 0; i < S.length() - T.length() + 1; i++){
        string subS = S.substr(i, T.length());
        if(T == subS){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}