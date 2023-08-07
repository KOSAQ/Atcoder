#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;
    //----------

    set<int> st;
    st.insert(A);
    st.insert(B);
    st.insert(C);
    st.insert(D);
    st.insert(E);
    cout << st.size() << endl;


    return 0;
}