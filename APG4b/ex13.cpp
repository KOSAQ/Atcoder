#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    cin >> N;
    vector<int> vec(N);
    int sum = 0;
    for(int i = 0; i < N; i++){
        cin >> vec.at(i);
        sum += vec.at(i);
    }

    int average = sum / N;

    for(int j = 0; j < N; j++){
        cout << abs(average - vec.at(j)) << endl;
    }
}