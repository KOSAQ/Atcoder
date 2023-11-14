#include <bits/stdc++.h>

using ll = long long;
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    int N, M;
    N = 3;
    M = 7;
    string T;
    T = "abcdefg";
    //----------

    string forward, back;
    forward = T.substr(0, N);
    back = T.substr(M - N, N);




    cout << "接頭辞" << forward << endl;
    cout << "接尾辞" << back << endl; 
    return 0;
}