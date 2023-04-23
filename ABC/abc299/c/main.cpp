#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    cin >> N;
    string S;
    cin >> S;

    int count = 0;
    int ans = 0;

    for(int i = 0; i < N; i++){
        if(S[i] == 'o'){
            count++;
        }
        else{
            ans = max(ans, count);
            count = 0;
        }
    }
    ans = max(ans, count);

    if(ans == 0 || ans == N){
        cout << -1 << endl;
    }
    else{
        cout << ans << endl;
    }
}