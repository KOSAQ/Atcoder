#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    string S[10];
    rep(i, 10){
        cin >> S[i];
    }
    
    //----------
    vector<int> AB;
    vector<int> CD;

    rep(i, 10){
        rep(j, 10){
            if(S[i][j] == '#'){
                AB.push_back(i);
                CD.push_back(j);
            }
        }
    }

    int A, B, C, D;
    A = *min_element(AB.begin(), AB.end());
    B = *max_element(AB.begin(), AB.end());
    C = *min_element(CD.begin(), CD.end());
    D = *max_element(CD.begin(), CD.end());

    cout << A + 1 << " " << B + 1 << endl;
    cout << C + 1 << " " << D + 1 << endl;

    return 0;
}