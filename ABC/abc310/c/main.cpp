#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    int N;
    cin >> N;
    set<string> st;
    rep2(i, 1, N){
        string s;
        cin >> s;
        if(st.count(string(s.rbegin(), s.rend())) == false){
            st.insert(s);
        }
    }

    int ans = st.size();
    cout << ans << endl;


    return 0;
}