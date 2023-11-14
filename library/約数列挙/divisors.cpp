#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

vector<long long> divisor(long long N){
    vector<long long> ans;
    for(long long i = 1; i * i <= N; i++){
        if(N % i == 0){
            ans.push_back(i);
            if(i * i != N){
                ans.push_back(N / i);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main(void){
    long long N;
    cin >> N;
    vector<long long> temp;
    temp = divisor(N);

    cout << "約数の個数は" << temp.size() << endl;
    cout << "約数は";
    for(int i = 0; i < temp.size(); i++){
        cout << temp[i] << " ";
    }
    cout << endl;


}