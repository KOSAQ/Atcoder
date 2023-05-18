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

    rep(i, N - 1){
        cout << A[i] << " ";
        if(abs(A[i] - A[i + 1]) == 1){
            continue;
        }
        else{
            if(A[i] < A[i + 1]){
               rep(j, A[i + 1] - A[i] - 1){
                cout << A[i] + j + 1 << " ";
               } 
            }
            if(A[i] > A[i + 1]){
                rep(k, A[i] - A[i + 1] - 1){
                    cout << A[i] - k - 1 << " "; 
                }
            }
        }
    }
    cout << A[N - 1] << endl; 
    return 0;
}