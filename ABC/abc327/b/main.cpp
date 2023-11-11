#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    long long B;
    cin >> B;
    
    //----------

    rep2(i, 1, 20){
        long long temp = 1;
        rep(j, i){
            temp *= i;
        }
        if(temp == B){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}