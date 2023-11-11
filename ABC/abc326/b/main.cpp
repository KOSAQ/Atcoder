#include <bits/stdc++.h>

using ll = long long;
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    int N;
    cin >> N;
    
    //----------

    

    for(int i = N; i <= 919; i++){
        string N_string = to_string(i);
        int a = N_string[0] - '0';
        int b = N_string[1] - '0';
        int c = N_string[2] - '0';
        if(a * b == c){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}