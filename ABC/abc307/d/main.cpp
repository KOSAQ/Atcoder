//https://programming-hiroba.com/abc307-d/
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    int N;
    string S;
    cin >> N;
    cin >> S;
    vector<char> stk;
    int count = 0;

    rep(i, N){
        if(S[i] == '('){
            count++;
            stk.push_back('(');
        }
        else if(S[i] == ')'){
            if(count > 0){
                while(1){
                    char temp = stk.back();
                    stk.pop_back();
                    if(temp == '('){
                        count--;
                        break;
                    }
                }
            }
            else{
                stk.push_back(S[i]);
            }
        }
        else{
            stk.push_back(S[i]);
        }
    }

    rep(i, stk.size()){
        cout << stk[i];
    }
    cout << endl;
    return 0;
}