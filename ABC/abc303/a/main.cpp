#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N;
    cin >> N;
    string S, T;
    cin >> S;
    cin >> T;
    int count = 0;

    rep(i, N){
        if(S[i] == '0' || S[i] == 'o'){
            if(T[i] == '0' || T[i] == 'o'){
                count++;
            }
        }
        else if(S[i] == '1' || S[i] == 'l'){
            if(T[i] == '1' || T[i] == 'l'){
                count++;
            }
        }
        else{
            if(S[i] == T[i]){
                count++;
            }
        }

    }

    if(count == N){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}