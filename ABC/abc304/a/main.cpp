#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N;
    cin >> N;
    vector<string> name(N);
    vector<int> age(N);

    rep(i, N){
        cin >> name[i];
        cin >> age[i];
    }

    int point = 0;
    int min_age = age[0];

    rep(i, N){
        if(age[i] < min_age){
            min_age = age[i];
            point = i;
        }
    }

    for(int i = point; i < N; i++){
        cout << name[i] << endl;
    }
    for(int i = 0; i < point; i++){
        cout << name[i] << endl;
    }
    return 0;
}