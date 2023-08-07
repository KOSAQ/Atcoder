#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    string S;
    cin >> S;
    //----------

    if(S[0] == 'M'){
        cout << 5 << endl;
    }
    else if(S[0] == 'W'){
        cout << 3 << endl;
    }
    else if(S[0] == 'F'){
        cout << 1 << endl;
    }
    else if(S == "Tuesday"){
        cout << 4 << endl;
    }
    else{
        cout << 2 << endl;
    }

    return 0;
}