#include <bits/stdc++.h>
using namespace std;

void seekl(int N, string S, int i);

int main(void){
    int N;
    cin >> N;
    string S;
    cin >> S;

    for(int i = 1; i < N; i++){
        seekl(N, S, i);
    }

    return 0;
}

void seekl(int N, string S, int i){
    int l = 0;
    for(int j = 0; j < N - i; j++){
        if(S[j] != S[j + i]){
            l++;
        }
        else{
            break;
        }
    }
    cout << l << endl;
    return;
}
