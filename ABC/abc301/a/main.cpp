#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N;
    string S;
    cin >> N;
    cin >> S;
    int Twin = 0;
    int Awin = 0;

    rep(i, N){
        if(S[i] == 'T'){
            Twin++;
        }
        if(S[i] == 'A'){
            Awin++;
        }
    }
    if(Twin > Awin){
        cout << 'T' << endl;
    }
    if(Twin < Awin){
        cout << 'A' << endl;
    }
    if(Twin == Awin){
        if(S[N - 1] == 'T'){
            cout << 'A' << endl;
        }
        else{
            cout << 'T' << endl;
        }
    }
    return 0;
}