#include <bits/stdc++.h>
using namespace std;

int main(void){
    string S;
    cin >> S;

    int S_size = S.length();
    long long ans = 0;

    for(int i = 0; i < S_size; i++){
        ans += (long long)(pow(26, (S_size - i - 1))) * (S[i] - 'A' + 1);
    }
    cout << ans << endl;

    return 0;
    
}