#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long change(long long X, int i){
    X /= pow(10, i);
    int mod = X % 10;
    if(mod <= 4){
        X -= mod;
    }
    else{
        X += (10 - mod);
    }
    X *= pow(10, i);
    return X;
}

int main(void){
    long long X;
    int K;
    cin >> X >> K;

    rep(i, K){
        X = change(X, i);
    }
    cout << X << endl;
    return 0;
}