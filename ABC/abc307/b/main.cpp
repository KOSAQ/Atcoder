#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

bool kaibun(string si, string sj){
    string s = si + sj;
    bool flag = false;
    flag = equal(s.begin(), s.begin() + s.size()/2, s.rbegin());
    return flag;
}

int main(void){
    int N;
    cin >> N;
    string S[109];
    rep2(i, 1, N){
        cin >> S[i];
    }

    rep2(i, 1, N){
        rep2(j, 1, N){
            if(i != j){
                if(kaibun(S[i], S[j])){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}