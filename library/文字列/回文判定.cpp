#include <bits/stdc++.h>

using ll = long long;
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

bool is_palindrome(string S){
    if(S == string(S.rbegin(), S.rend())){
        return true;
    }
    else{
        return false;
    }
}

int main(void){
    string S = "IAMMAI";
    string S2 = "TOYOTA";
    string S3 = "LKJHJKL";
    string S4 = "KOIok";

    if(is_palindrome(S)){
        cout << S << "は回文である。" << endl;
    }
    else{
        cout << S << "は回文でない。" << endl;
    }

    if(is_palindrome(S2)){
        cout << S2 << "は回文である。" << endl;
    }
    else{
        cout << S2 << "は回文でない。" << endl;
    }

    if(is_palindrome(S3)){
        cout << S3 << "は回文である。" << endl;
    }
    else{
        cout << S3 << "は回文でない。" << endl;
    }

    if(is_palindrome(S4)){
        cout << S4 << "は回文である。" << endl;
    }
    else{
        cout << S4 << "は回文でない。" << endl;
    }



    return 0;
}