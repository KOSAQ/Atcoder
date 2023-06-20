#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    vector<int_fast64_t> A(64, 0);
    rep(i, 64){
        cin >> A[i];
    }
    unsigned long long ans = 0;

    rep(i, 64){
        if(A[i] == 1){
            unsigned long long count = 1;
            for(int j = 0; j < i; j++){
                count *= 2;
            }
            ans += count;
        }
    }
    cout << ans << endl;

    return 0;
}