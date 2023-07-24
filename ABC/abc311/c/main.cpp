//https://atcoder.jp/contests/abc311/editorial/6820

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    int N;
    cin >> N;
    vector<int> A(N + 1);
    rep2(i, 1, N){
        cin >> A[i];
    }
    //----------

    vector<int> fl(N + 1, 0);
    vector<int> s;

    int point = 1;
    while(fl[point] == 0){
        fl[point] = 1;
        s.push_back(point);
        point = A[point];
    }

    vector<int> ans;

    for(auto &next : s){
        if(next == point){
            point = -1;
        }
        if(point == -1){
            ans.push_back(next);
        }
    }

    cout << ans.size() << endl;
    rep(i, ans.size()){
        cout << ans[i] << " ";
    }
    cout << endl;
    
    

    



    return 0;
}