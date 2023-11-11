#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    int N;
    string S;
    cin >> N >> S;

    
    //----------

    for(int i = 0; i < N - 1; i++){
        if((S[i] == 'a' && S[i + 1] == 'b') || (S[i] == 'b' && S[i + 1] == 'a')){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl; 
    return 0;
}