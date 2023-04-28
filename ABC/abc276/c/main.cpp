#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N;
    cin >> N;
    vector<int> P(N);
    rep(i, N){
        cin >> P[i];
    }

    int n = N - 2;
    while(P[n] < P[n + 1]){
        n--;
    }

    int m = N - 1;
    while(P[n] < P[m]){
        m--;
    }

    swap(P[n], P[m]);
    sort(P.begin() + n + 1, P.end(), greater<int>());
    
    rep(i, N){
        cout << P[i] << " ";
    }
    cout << endl;
    return 0;
}