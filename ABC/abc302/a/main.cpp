#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    long long A, B;
    cin >> A >> B;

    long long ans;
    ans = A / B;
    
    if(A % B == 0){
        cout << ans << endl;
    }
    else{
        cout << ans + 1 << endl;
    }

    return 0;
}