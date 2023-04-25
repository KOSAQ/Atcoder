#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    cin >> N;
    vector<int> A(N);

    for(int i = 0; i < N; i++){
        cin >> A.at(i);
    }

    vector<bool> called(N, false);

    for(int i = 0; i < N; i++){
        if(called.at(i) == false){
            called.at(A.at(i)-1) = true; 
        }
    }

    int count = 0;
    for(int i = 0; i < N; i++){
        if(called.at(i) == false){
            count++;
        }
    }
    cout << count << endl;

    for(int i = 0; i < N; i++){
        if(called.at(i) == false){
            cout << i+1 << " ";
        }
    }
    cout << endl;
}