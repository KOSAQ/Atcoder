#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    string S;
    cin >> S;
    //----------

    
    string chars = "aiueo";
 
    for (char c: chars) {
        S.erase(remove(S.begin(), S.end(), c), S.end());
    }

    cout << S << endl;

    return 0;
}