#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    int N;
    cin >> N;

    string S[109];
    rep2(i, 1, N){
        cin >> S[i];
    }

    int count = 0;
    rep2(i, 1, N){
        if(S[i] == "For"){
            count++;
        }
        else{
            count--;
        }
    }

    if(count > 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}