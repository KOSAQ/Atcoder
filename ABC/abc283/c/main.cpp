#include <bits/stdc++.h>
using namespace std;

int main(void){
    string S;
    cin >> S;

    int count = 0;
    for(int i = 0; i < S.size(); i++){
        if(S[i] == '0' && S[i + 1] == '0'){
            count++;
            i += 1;
        }
    }
    cout << S.size() - count << endl;
    return 0;
}