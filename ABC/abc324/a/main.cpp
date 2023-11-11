#include <bits/stdc++.h>

using ll = long long;
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    int N;
    cin >> N;
    int A[N];
    rep(i, N){
        cin >> A[i];
    }
    //----------

    set<int> st;
    rep(i, N){
        st.insert(A[i]);
    }
    if(st.size() == 1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}