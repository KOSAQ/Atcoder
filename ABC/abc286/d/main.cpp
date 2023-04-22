#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N, X;
    cin >> N >> X;
    vector<int> A(N), B(N);
    for(int i = 0; i < N; i++){
        cin >> A[i] >> B[i];
    }

    vector< vector<bool> > dp(51, vector<bool>(pow(10, 4) + 1, false));
    dp[0][0] = true;

    for(int i = 0; i < N; i++){
        for(int j = 0; j <= X; j++){
            for(int k = 0; k <= B[i]; k++){
                if((j >= A[i] * k) && (dp[i][j - A[i] * k])){
                    dp[i + 1][j] = true;
                }
            }
        }
    }

    if(dp[N][X]){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}