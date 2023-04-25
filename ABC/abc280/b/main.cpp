#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    cin >> N;
    vector<int> S(N);
    for(int i = 0; i < N; i++){
        cin >> S[i];
    }

    vector<int> A(N);
    A[0] = S[0];
    for(int i = 1; i < N; i++){
        A[i] = S[i] - S[i - 1];
    }

    for(int i = 0; i < N; i++){
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}