#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N;
    cin >> N;
    vector<int> A(N, 0);
    rep(i, N){
        cin >> A[i];
    }
    int Q;
    cin >> Q;
    vector<int> l(Q, 0);
    vector<int> r(Q, 0);
    rep(i, Q){
        cin >> l[i] >> r[i];
    }

    int ans = 0;
    int right = 0;
    int left = 0;
    for(int i = 0; i < Q; i++){
        ans = 0;
        right = r[i];
        left = l[i];

        for(int j = 0; A[j] < left; j++){
            ans += 
        }
    }
}