//https://programming-hiroba.com/abc305-d/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N){
        cin >> A[i];
    }
    int Q;
    cin >> Q;
    int l[Q], r[Q];
    rep(i, Q){
        cin >> l[i] >> r[i];
    }

    int s[N];
    s[0] = 0;
    rep(i, N - 1){
        if(i % 2 == 1){
            s[i + 1] = s[i] + (A[i + 1] - A[i]);
        }
        else{
            s[i + 1] = s[i];
        }
    }

    rep(i, Q){
        int idxl, idxr;
        idxl = lower_bound(A.begin(), A.end(), l[i]) - A.begin();
        idxr = lower_bound(A.begin(), A.end(), r[i]) - A.begin();

        int ans = 0;
        if(l[i] != A[idxl] && idxl % 2 == 0){
            ans += (A[idxl] - l[i]);
        }
        if(r[i] != A[idxr] && idxr % 2 == 0){
            ans -= (A[idxr] - r[i]);
        }
        ans += (s[idxr] - s[idxl]);

        cout << ans << endl;
    }

    return 0;
}