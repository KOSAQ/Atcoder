#include <bits/stdc++.h>

using ll = long long;
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    string S;
    cin >> S;
    //----------


    bool flag = true;
    for(int i = 2; i <= 16; i += 2){
        if(S[i - 1] == '1'){
            flag = false;
        }
    }

    if(flag){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}