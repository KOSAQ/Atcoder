#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    int S[8];
    rep(i, 8){
        cin >> S[i];
    }
    bool flag = false;
    for(int i = 1; i < 8; i++){
        if(S[i - 1] > S[i]){
            flag = true;
        }
    }
    int count = 0;
    rep(i, 8){
        if(100 <= S[i] && S[i] <= 675){
            if(S[i] % 25 == 0){
                count++;
            }
        }
    }
    if(flag == false && count == 8){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}