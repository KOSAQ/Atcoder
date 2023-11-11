#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

string rot_right(string S){
    string temp = S + S;
    string ans;
    rep(i, S.size()){
        ans.push_back(temp[i + S.size() - 1]);
    }
    return ans;
    
}

int main(void){
    //input-----
    int N, M;
    cin >> N >> M;
    string S;
    cin >> S;
    vector<int> C;
    rep2(i, 1, N){
        int c;
        cin >> c;
        C.push_back(c);
    }
    
    //----------

    
    rep(i, M){
        string temp;
        string temp_rot;
        vector<int> idx;
        rep(j, N){
            if(C[j] == i){
                temp.push_back(S[j]);
                idx.push_back(j);
            }
        }
        temp_rot = rot_right(temp);
        
        rep(j, temp_rot.size()){
            //S[idx[j]]をtemp_rot[j]に変更
            S.replace(idx[j], 1, 1, temp_rot[j]);
        }
    }

    cout << S << endl;

    return 0;
}