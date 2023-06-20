#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N;
    cin >> N;
    int A[300009];
    vector<int> f(N);

    for(int i = 1; i <= 3*N; i++){
        cin >> A[i];
    }
    
    multiset<int> st;
    for(int i = 1; i <= 3*N; i++){
        if(st.count(A[i]) == 0){
            st.insert(A[i]);
        }
        else if(st.count(A[i]) == 1){
            f[A[i] - 1] = i;
            st.insert(A[i]);
        }
    }

    vector<int> index(f.size());
    rep(i, N){
        index[i] = i;
    }

    sort(index.begin(), index.end(), [&f](int a, int b) {return f[a] < f[b];});

    for (auto x : index){
        cout << x + 1 << " ";
    }

    return 0;
}