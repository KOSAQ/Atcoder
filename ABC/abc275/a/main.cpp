#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N;
    cin >> N;
    vector<int> H(N);
    rep(i, N){
        cin >> H[i];
    }

    int ans = 1;
    int temp = H[0];
    for(int i = 1; i < N; i++){
        if(H[i] > temp){
            temp = H[i];
            ans = i + 1;
        }
    }
    cout << ans << endl;
    return 0;
}