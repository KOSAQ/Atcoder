#include <bits/stdc++.h>

using ll = long long;
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    int N, X;
    cin >> N >> X;
    vector<int> A(N - 1);
    rep(i, N - 1){
        cin >> A[i];
    }
    vector<int> ans;
    
    //----------
    int sum = accumulate(A.begin(), A.end(), 0);

    for(int i = 0; i <= 100; i++){
        A.push_back(i);
        int max_A = *max_element(A.begin(), A.end());
        int min_A = *min_element(A.begin(), A.end());
        if((sum + i - max_A - min_A) >= X){
            ans.push_back(i);
            A.pop_back();
            break;
        }
        A.pop_back();
    }

    if(ans.size() == 0){
        cout << -1 << endl;
    }
    else{
        cout << *min_element(ans.begin(), ans.end()) << endl;
    }

    return 0;
}