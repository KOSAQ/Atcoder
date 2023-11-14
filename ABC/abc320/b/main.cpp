#include <bits/stdc++.h>

using ll = long long;
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    string S;
    cin >> S;
    vector<string> ans;

    rep(i, S.size()){
        for(int j = i + 1; j <= S.size(); j++){
            string subS = S.substr(i, j - i);
            if(subS == string(subS.rbegin(), subS.rend())){
                ans.push_back(subS);
            }
        }
    }

    int answer = 0;
    rep(i, ans.size()){
        answer = max(answer, (int)ans[i].size());
    }
    
    cout << answer << endl;
    //----------

    return 0;
}