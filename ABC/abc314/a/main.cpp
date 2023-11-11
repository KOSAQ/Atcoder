#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    string S = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    int N;
    cin >> N;

    rep(i, N + 2){
        cout << S[i];
    }
    cout << endl;
    
    //----------

    return 0;
}