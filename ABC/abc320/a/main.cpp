#include <bits/stdc++.h>

using ll = long long;
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    int A, B;
    cin >> A >> B;
    //----------
    ll ans;
    ans = pow(A, B) + pow(B, A);

    cout << ans << endl;



    return 0;
}