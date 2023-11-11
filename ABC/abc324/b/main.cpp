#include <bits/stdc++.h>

using ll = long long;
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    ll N;
    cin >> N;
    //----------

    while(N % 2 == 0){
        N /= 2;
    }
    while(N % 3 == 0){
        N /= 3;
    }

    if(N == 1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}