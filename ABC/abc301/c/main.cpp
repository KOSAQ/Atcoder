//https://programming-hiroba.com/abc301-c/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    string S, T;
    cin >> S >> T;
    int size = S.size();

    map<char, int> mpS;
    map<char, int> mpT;

    rep(i, size){
        mpS[S[i]]++;
        mpT[T[i]]++;
    }

    bool flag = true;
    for(char ch = 'a'; ch <= 'z'; ch++){
        if(ch == 'a' || ch == 't' || ch == 'c' || ch == 'o' || ch == 'd' || ch == 'e' || ch == 'r'){
            if(mpS[ch] > mpT[ch]){
                mpT['@'] -= abs(mpS[ch] - mpT[ch]);
            }
            else if(mpS[ch] < mpT[ch]){
                mpS['@'] -= abs(mpS[ch] - mpT[ch]);
            }
        }
        else{
            if(mpS[ch] != mpT[ch]){
                flag = false;
            }
        }
    }

    if(mpS['@'] < 0 || mpT['@'] < 0){
        flag = false;
    }

    if(flag){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    
    return 0;
}