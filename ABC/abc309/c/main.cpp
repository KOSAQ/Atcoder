#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    int N, K;
    cin >> N >> K;
    int a[300009];
    int b[300009];
    long long count = 0;
    rep2(i, 1, N){
        cin >> a[i] >> b[i];
        count += b[i];
    }

    vector<int> day(1000000009, 0);
    rep2(i, 1, N){
        day[a[i]] -= b[i];
    }

    int ans = 1;
    while(1){
        if(count <= K){
            break;
        }
        ans++;
        if(day[ans] != 0){
            
        }

    }

    return 0;
}