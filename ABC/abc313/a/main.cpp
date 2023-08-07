#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    int N;
    cin >> N;
    vector<int> P(N);
    rep(i, N){
        cin >> P[i];
    }
    //----------

    bool flag = false;
    if(P[0] == *max_element(P.begin(), P.end())){
        rep2(i, 1, N - 1){
            if(P[0] == P[i]){
                flag = true;
            }
        }
        if(flag){
            cout << 1 << endl;
            return 0;
        }
        else{
            cout << 0 << endl;
            return 0;
        }
    }
    cout << *max_element(P.begin(), P.end()) - P[0] + 1 << endl;

    return 0;
}