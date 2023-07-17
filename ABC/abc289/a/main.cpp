#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    string s;
    cin >> s;

    rep(i, s.size()){
        if(s[i] == '0'){
            s[i] = '1';
        }
        else{
            s[i] = '0';
        }
    }
    cout << s << endl;

    return 0;
}