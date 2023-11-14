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
    if(N < 10){
        cout << "Yes" << endl;
        return 0;
    }

    string N_string = to_string(N);
    
    for(int i = 0; i < N_string.size() - 1; i++){
        if(N_string[i] <= N_string[i + 1]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}