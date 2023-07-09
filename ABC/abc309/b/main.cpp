#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    int N;
    cin >> N;
    char A[109][109];
    rep2(i, 1, N){
        rep2(j, 1, N){
            cin >> A[i][j];
        }
    }
    


    char B[109][109];
    rep2(i, 1, N){
        rep2(j, 1, N){
            B[i][j] = A[i][j];
        }
    }
    
    for(int i = 2; i <= N; i++){
        B[1][i] = A[1][i - 1];
    }
    for(int i = 2; i <= N; i++){
        B[i][N] = A[i - 1][N];
    }
    for(int i = 1; i <= N - 1; i++){
        B[N][i] = A[N][i + 1];
    }
    for(int i = 1; i <= N - 1; i++){
        B[i][1] = A[i + 1][1];
    }

    rep2(i, 1, N){
        rep2(j, 1, N){
            cout << B[i][j];
        }
        cout << endl;
    }

    
    return 0;
}