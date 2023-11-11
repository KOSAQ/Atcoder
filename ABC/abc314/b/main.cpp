#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    int N;
    cin >> N;
    map<int, set<int> > mp;
    rep2(i, 1, N){
        int c;
        cin >> c;
        rep(j, c){
            int a;
            cin >> a;
            mp[i].insert(a);
        }
    }
    int X;
    cin >> X;
    
    //----------

    bool flag = false;
    rep2(i, 1, N){
        if(mp[i].count(X)){
            flag = true;
        }
    }
    if(flag == false){
        cout << 0 << endl;
        return 0;
    }

    vector<int> ans_N;

    rep2(i, 1, N){
        if(mp[i].count(X)){
            ans_N.push_back(i);
        }
    }

    int min_value = mp[ans_N[0]].size();

    rep(i, ans_N.size()){
        if(mp[ans_N[i]].size() < min_value){
            min_value = mp[ans_N[i]].size();
        }
    }

    vector<int> ans;

    rep(i, ans_N.size()){
        if(mp[ans_N[i]].size() == min_value){
            ans.push_back(ans_N[i]);
        }
    }

    
    cout << ans.size() << endl;
    rep(i, ans.size()){
        cout << ans[i] << " ";
    }
   
    

    



    return 0;
}