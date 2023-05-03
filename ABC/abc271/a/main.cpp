#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N;
    cin >> N;

    int first, second;
    first = N / 16;
    second = N % 16;

    if(first > 9){
        cout << (char)(first - 10 + 'A');
    }
    else{
        cout << first;
    }

    if(second > 9){
        cout << (char)(second - 10 + 'A');
    }
    else{
        cout << second;
    }
    cout << endl;
    return 0;
}