#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    cin >> N;
    string S;
    cin >> S;

    int count = 0;

    for(int i = 0; i < N; i++){
        if(S[i] == '"'){
            count++;
        }
        if(S[i] == ',' && count % 2 == 0){
            S[i] = '.';
        }
    }
    cout << S << endl;
    return 0;
}