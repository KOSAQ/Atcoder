#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N = 5;

    //配列
    int X[N];//１次元配列
    int XX[N][N];//二次元配列


    //vector型
    vector<int> A(N, 0);//vector型一次元、初期値0
    vector<vector<int> > AA(N, vector<int>(N, 0));//vector型二次元、初期値0


    //map
    map<string, int> mp;//map



    //set
    cout << "集合" << endl;
    set<int> st;//set
    st.insert(4); st.insert(1); st.insert(3); st.insert(2); st.insert(3); st.insert(15); st.insert(30); st.insert(23);//追加
    st.erase(3);//消去
    st.count(4);//存在するなら1,存在しなければ0を返す
    st.size();//集合のサイズ
    //全要素の列挙
    cout << "st = { ";
    for(auto itr = st.begin(); itr != st.end(); itr++){
        cout << *itr << " "; 
    }
    cout << "}" << endl;

    //二分探索を用いる
    //20以上で最小の値にitr2が該当
    auto itr2 = st.lower_bound(20);
    if(itr2 == st.end()){
        cout << "-1" << endl;
    }
    else{
        cout << (*itr2) << endl;
    }
    //1つ前の要素に移動
    itr2--;
    cout << (*itr2) << endl;
    cout << "\n\n";





    //pair
    pair<int, int> P; //pair

}