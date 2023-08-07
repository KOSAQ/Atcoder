#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    vector<int> B(M);
    rep(i, N){
        cin >> A[i];
    }
    rep(j, M){
        cin >> B[j];
    }
    //----------
    vector<int> C;
    rep(i, N){
        C.push_back(A[i]);
    }
    rep(i, M){
        C.push_back(B[i]);
    }
    

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());
    

    if(*min_element(A.begin(), A.end()) > *max_element(B.begin(), B.end())){
        cout << *max_element(B.begin(), B.end()) + 1 << endl;
        return 0;
    }



    int ans = 200009;
    rep(i, C.size()){
        int seller, buyer;
        int X = C[i];
        auto itr1 = lower_bound(B.begin(), B.end(), X);
        auto itr2 = lower_bound(A.begin(), A.end(), X);
        

        seller = A.end() - itr2;
        buyer = itr1 - B.begin();
        if(buyer <= seller){
            ans = min(ans, X);
        }
        
        
        
    }
    cout << ans << endl;

    return 0;
}