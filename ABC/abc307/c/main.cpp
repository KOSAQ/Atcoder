#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    int Ha, Wa;
    cin >> Ha >> Wa;
    char A[19][19];
    rep2(i, 1, Ha){
        rep2(j, 1, Wa){
            cin >> A[i][j];
        }
    }

    int Hb, Wb;
    cin >> Hb >> Wb;
    char B[19][19];
    rep2(i, 1, Hb){
        rep2(j, 1, Wb){
            cin >> B[i][j];
        }
    }

    int Hx, Wx;
    cin >> Hx >> Wx;
    char X[19][19];
    rep2(i, 1, Hx){
        rep2(j, 1, Wx){
            cin >> X[i][j];
        }
    }

    



    return 0;
}