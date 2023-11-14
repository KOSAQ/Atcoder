#include <bits/stdc++.h>

using ll = long long;
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    int N, M;
    cin >> N >> M;
    string S, T;
    cin >> S >> T;
    //----------

    string forward, back;
    forward = T.substr(0, N);
    back = T.substr(M - N, N); 

    if(S == forward && S == back){
        cout << 0 << endl;
    }
    else if(S == forward && S != back){
        cout << 1 << endl;
    }
    else if(S != forward && S == back){
        cout << 2 << endl;
    }
    else{
        cout << 3 << endl;
    }

    return 0;
}