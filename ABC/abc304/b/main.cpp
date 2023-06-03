#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N;
    cin >> N;

    int temp = 0;

    if(N <= (pow(10,3) - 1)){
        cout << N << endl;
    }
    else if(N >= pow(10, 3) && N <= (pow(10, 4) - 1)){
        temp = N / 10;
        cout << temp * 10 << endl;
    }
    else if(N >= pow(10, 4) && N <= (pow(10, 5) - 1)){
        temp = N / 100;
        cout << temp * 100 << endl;
    }
    else if(N >= pow(10, 5) && N <= (pow(10, 6) - 1)){
        temp = N / 1000;
        cout << temp * 1000 << endl;
    }
    else if(N >= pow(10, 6) && N <= (pow(10, 7) - 1)){
        temp = N / 10000;
        cout << temp * 10000 << endl;
    }
    else if(N >= pow(10, 7) && N <= (pow(10, 8) - 1)){
        temp = N / 100000;
        cout << temp * 100000 << endl;
    }
    else if(N >= pow(10, 8) && N <= (pow(10, 9) - 1)){
        temp = N / 1000000;
        cout << temp * 1000000 << endl;
    }

    return 0;
}