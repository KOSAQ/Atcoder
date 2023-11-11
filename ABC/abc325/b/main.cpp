#include <bits/stdc++.h>

using ll = long long;
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    int N;
    cin >> N;
    int W[N];
    int X[N];

    rep(i, N){
        cin >> W[i] >> X[i];
    }
    //----------

    int ans = 0;
    for(int i = 0; i < 24; i++){
        int temp = 0;
        for(int j = 0; j < N; j++){
            int local_time = (i + X[j]) % 24;
            if(local_time >= 9 && local_time < 18){
                temp += W[j];
            }
        }
        
        ans = max(ans, temp);
    }

    cout << ans << endl;
    return 0;
}
