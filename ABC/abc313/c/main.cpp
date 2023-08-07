#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    long long N;
    cin >> N;
    vector<long long> A(N);
    rep(i, N){
        cin >> A[i];
    }
    //----------
    sort(A.begin(), A.end());
    long long maxA, minA;
    maxA = *max_element(A.begin(), A.end());
    minA = *min_element(A.begin(), A.end());
    long long diff = maxA - minA;
    long long ans = 0;
    //int count = 0;

    while(diff > 1){
        // count++;
        // if(count == 5) break;

        // cout << endl;
        // rep(i, A.size()){
        //     cout << A[i] << " ";
        // }
        // cout << endl;


        maxA = *max_element(A.begin(), A.end());
        minA = *min_element(A.begin(), A.end());
        auto itrmax = lower_bound(A.begin(), A.end(), maxA);
        auto itrmin = lower_bound(A.begin(), A.end(), minA);
        long long idxmax = itrmax - A.begin();
        long long idxmin = itrmin - A.begin();
        diff = maxA - minA;
        // cout << "max, min, diff" << endl;
        // cout << maxA << " " << minA << " " << diff << endl;
        // cout << "idxmax, idxmin" << endl;
        // cout << idxmax << " " << idxmin << endl;
        if(diff <= 1) break;

        if(diff >= 2 && diff % 2 == 0){
            A[idxmax] -= (diff / 2);
            A[idxmin] += (diff / 2);
            ans += (diff / 2);
        }
        if(diff >= 2 && diff % 2 == 1){
            A[idxmax] -= ((diff - 1) / 2);
            A[idxmin] += ((diff - 1) / 2);
            ans += ((diff - 1) / 2);
        }
        sort(A.begin(), A.end());
        
        
    }
    cout << ans << endl;

    
    return 0;
}