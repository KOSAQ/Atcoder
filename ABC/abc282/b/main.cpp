#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N, M;
    cin >> N >> M;
    vector<vector<char> > S(N, vector<char>(M));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> S[i][j];
        }
    }

    int ans = 0;
    bool flag = true;
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            for(int k = 0; k < M; k++){
                if(S[i][k] == 'o' || S[j][k] == 'o'){
                    flag = true;
                }
                else{
                    flag = false;
                    break;
                }
            }
            if(flag){
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}