#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool check1(string S){
    if(S[0] == 'H' || S[0] == 'D' || S[0] == 'C' || S[0] == 'S'){
        return true;
    }
    else{
        return false;
    }
}

bool check2(string S){
    if(S[1] == 'A' || ('2' <= S[1] && S[1] <= '9') || S[1] == 'T' || S[1] == 'J' || S[1] == 'Q' || S[1] == 'K'){
        return true;
    }
    else{
        return false;
    }
}

int main(void){
    int N;
    cin >> N;

    vector<string> S(N);
    rep(i, N){
        cin >> S[i];
    }

    set<string> P;

    bool exist = false;

    rep(i, N){
        if(!(check1(S[i]))){
            cout << "No" << endl;
            return 0;
        }
        if(!(check2(S[i]))){
            cout << "No" << endl;
            return 0;
        }

        exist = P.count(S[i]);
        if(exist){
            cout << "No" << endl;
            return 0;
        }
        P.insert(S[i]);
    }

    cout << "Yes" << endl;
    return 0;
}