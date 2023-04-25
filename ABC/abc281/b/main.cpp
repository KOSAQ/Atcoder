#include <bits/stdc++.h>
using namespace std;

int main(void){
    string S;
    cin >> S;
    bool flag = false;
    if(S.length() != 8){
        cout << "No" << endl;
        return 0;
    }

    if(65 <= int(S[0]) && int(S[0]) <= 90 && 65 <= int(S[7]) && int(S[7]) <= 90){
        if(49 <= int(S[1]) && int(S[1]) <= 57){
            for(int i = 2; i < 7; i++){
                if(48 <= int(S[i]) && int(S[i]) <= 57){
                    flag = true;
                }
                else{
                    flag = false;
                    break;
                }
            }
            if(flag){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    
    cout << "No" << endl;
    return 0;
}