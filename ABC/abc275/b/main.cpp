#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int mod = 998244353;

int remainder(long long i, long long j, long long k){
    int ans;
    ans = ((i % mod) * (j % mod)) % mod;
    ans = (ans * (k % mod)) % mod;
    return ans;
}

int main(void){
    long long A, B, C, D, E, F;
    cin >> A >> B >> C >> D >> E >> F;
    
    int x = 0;
    x = remainder(A, B, C);
    int y = 0; 
    y = remainder(D, E, F);
    
    if(x - y < 0){
        cout << (x - y + mod) % mod << endl;
    }
    else{
        cout << (x - y) % mod << endl;
    }

    return 0;
}