#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    int M;
    cin >> M;
    vector<int> D(M);
    rep(i, M){
        cin >> D[i];
    }
    //----------

    

    int half = (accumulate(D.begin(), D.end(), 0) + 1) / 2;
    int half_origin = half;


    int a = 0;
    int b = 0;
    rep(i, M){
        if(half <= D[i]) break;
        half -= D[i];
        a++;
    }
    //cout << half << endl;

    b = half;

    cout << a + 1 << " " << b << endl;


    return 0;
}