//https://atcoder.jp/contests/abc302/editorial/6406

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    int N, M;
    long long D;
    cin >> N >> M >> D;
    vector<long long> A(N);
    vector<long long> B(M);
    rep(i, N){
        cin >> A[i];
    }
    rep(i, M){
        cin >> B[i];
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    long long x, y;

    while(1){
        x = A.back();
        y = B.back();

        if(abs(x - y) <= D){
            cout << x + y << endl;
            break;
        }
        if(x > y){
            A.pop_back();
        }
        else{
            B.pop_back();
        }

        if(A.size() == 0 || B.size() == 0){
            cout << -1 << endl;
            break;
        }
    }

    return 0;
}