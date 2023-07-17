#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    int N, M;
    cin >> N >> M;
    int P[109];
    int C[109];
    
    vector<set<int> > F;

    rep2(i, 1, N){
        cin >> P[i] >> C[i];
        set<int> st;
        for(int j = 0; j < C[i]; j++){
            int temp;
            cin >> temp;
            st.insert(temp);
        }
        F.push_back(st);
    }

    rep2(i, 1, N){
        rep2(j, 1, N){
            bool flag = true;
            for(auto itr = F[i - 1].begin(); itr != F[i - 1].end(); ++itr) {
                if(!F[j - 1].count(*itr)){
                    flag = false;
                }
            }
            if(flag){
                if(P[i] >= P[j]){
                    if(P[i] > P[j] || F[j - 1].size() > F[i - 1].size()){
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}