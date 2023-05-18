#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    string S;
    string T;
    cin >> S;
    cin >> T;

    map<char, int> mpS;
    map<char, int> mpT;

    rep(i, S.size()){
        mpS[S[i]]++;
    }
    rep(i, T.size()){
        mpT[T[i]]++;
    }

    for(auto& pair : mpS){
        while(pair.first >= 1 && mpT[pair.first] >= 1){
            mpS[pair.first]--;
            mpT[pair.first]--;
        }
    }

    for(auto& pair : mpS){
        if(pair.second > 0){
            
        }
    }

    return 0;
}