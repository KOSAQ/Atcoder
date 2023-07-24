//https://atcoder.jp/contests/abc270/editorial/4849

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    int X, Y, Z;
    cin >> X >> Y >> Z;

    if(Y < 0){
        X = -X;
        Y = -Y;
        Z = -Z;
    }

    if(X < Y){
        cout << abs(X) << endl;
        return 0;
    }
    else{
        if(Z > Y){
            cout << -1 << endl;
            return 0;
        }
        else{
            cout << abs(Z) + abs(X - Z) << endl;
            return 0;
        }
    }
    

    return 0;
}