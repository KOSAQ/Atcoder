#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N){
        cin >> A[i];
    }

    vector<int> A_even(N, -1);
    vector<int> A_odd(N, 0);

    rep(i, N){
        if(A[i] % 2 == 0){
            A_even.push_back(A[i]);
        }
        else{
            A_odd.push_back(A[i]);
        }
    }

    sort(A_even.begin(), A_even.end(), greater<int>());
    sort(A_odd.begin(), A_odd.end(), greater<int>());

    int ans_even = A_even[0] + A_even[1];
    int ans_odd = A_odd[0] + A_odd[1];

    if(ans_even % 2 == 0 || ans_odd % 2 == 0){
        cout << max(ans_even, ans_odd) << endl;
    }
    else{
        cout << -1 << endl;
    }
    return 0;
}