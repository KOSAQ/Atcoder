#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N = 923;
    string N_string = to_string(N);//int -> string
    int N_int = stoi(N_string);//string -> int

    int a, b, c;
    a = N_string[0] - '0';//9
    b = N_string[1] - '0';//2
    c = N_string[2] - '0';//3
    cout << a << " " << b << " " << c << endl;

    return 0;
}