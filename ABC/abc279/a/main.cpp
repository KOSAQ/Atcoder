#include <bits/stdc++.h>
using namespace std;

int main(void){
    string S;
    cin >> S;

    int ans = 0;
    for(int i = 0; i < S.length(); i++){
        if(S[i] == 'w'){
            ans += 2;
            continue;
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}