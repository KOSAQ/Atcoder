#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    int N;
    cin >> N;

    int A[1009];
    int B[1009];

    rep2(i, 1, N){
        cin >> A[i] >> B[i];
    }

    rep2(i, 1, N){
        cout << A[i] + B[i] << endl;
    }

    return 0;
}