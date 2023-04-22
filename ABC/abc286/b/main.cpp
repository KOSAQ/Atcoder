#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    cin >> N;
    string S;
    cin >> S;

    for(int i = 0; i < S.length(); i++){
        if((S[i] == 'n') && (S[i + 1] == 'a')){
            cout << "nya";
            i++;
        }
        else{
            cout << S.at(i);
        }
    }
    cout << endl;
    return 0;
}