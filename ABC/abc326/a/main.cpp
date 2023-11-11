#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    int X, Y;
    cin >> X >> Y;
    int diff = Y - X;

    if(diff < 0 && abs(diff) <= 3){
        cout << "Yes" << endl;
    }
    else if(diff > 0 && abs(diff) <= 2){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
    
    //----------

    return 0;
}