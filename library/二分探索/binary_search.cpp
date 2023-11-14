//参考にしたホームページ↓
//https://qiita.com/ganyariya/items/33f1326154b85db465c3

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){

    cout << "----------lower_bound----------" << endl << endl;
    //配列はソートする必要がある
    vector<int> A = {1, 4, 4, 7, 7, 8, 8, 11, 13, 19};

    //イテレータを返す
    auto Iter1 = lower_bound(A.begin(), A.end(), 4);
    auto Iter2 = lower_bound(A.begin(), A.end(), 6);
    auto Iter3 = lower_bound(A.begin(), A.end(), 7);
    auto Iter4 = lower_bound(A.begin(), A.end(), 19);
    auto Iter5 = lower_bound(A.begin(), A.end(), 20);

    //先頭からの距離
    cout << "----------from（未満）----------" << endl;
    cout << "Iter1 = " << Iter1 - A.begin() << endl; //Iter1 = 1
    cout << "Iter2 = " << Iter2 - A.begin() << endl; //Iter2 = 3
    cout << "Iter3 = " << Iter3 - A.begin() << endl; //Iter3 = 3
    cout << "Iter4 = " << Iter4 - A.begin() << endl; //Iter4 = 9
    cout << "Iter5 = " << Iter5 - A.begin() << endl; //Iter5 = 10

    //末尾までの距離
    cout << "----------to（以上）----------" << endl;
    cout << "Iter1 = " << A.end() - Iter1 << endl; //Iter1 = 9
    cout << "Iter2 = " << A.end() - Iter2 << endl; //Iter2 = 7
    cout << "Iter3 = " << A.end() - Iter3 << endl; //Iter3 = 7
    cout << "Iter4 = " << A.end() - Iter4 << endl; //Iter4 = 1
    cout << "Iter5 = " << A.end() - Iter5 << endl; //Iter5 = 0
    cout << endl;

    cout << "----------upper_bound----------" << endl << endl;
    vector<int> a = {1, 4, 4, 7, 7, 8, 8, 11, 13, 19};

    //イテレータを返す
    auto Iter6 = upper_bound(a.begin(), a.end(), 4);
    auto Iter7 = upper_bound(a.begin(), a.end(), 6);
    auto Iter8 = upper_bound(a.begin(), a.end(), 7);
    auto Iter9 = upper_bound(a.begin(), a.end(), 19);
    auto Iter10 = upper_bound(a.begin(), a.end(), 20);

    //先頭からの距離
    cout << "----------from（以下）----------" << endl;
    cout << "Iter6 = " << Iter6 - a.begin() << endl; //Iter6 = 3
    cout << "Iter7 = " << Iter7 - a.begin() << endl; //Iter7 = 3
    cout << "Iter8 = " << Iter8 - a.begin() << endl; //Iter8 = 5
    cout << "Iter9 = " << Iter9 - a.begin() << endl; //Iter9 = 10
    cout << "Iter10 = " << Iter10 - a.begin() << endl; //Iter10 = 10

    //末尾までの距離
    cout << "----------to（より大きい）----------" << endl;
    cout << "Iter6 = " << a.end() - Iter6 << endl; //Iter6 = 7
    cout << "Iter7 = " << a.end() - Iter7 << endl; //Iter7 = 7
    cout << "Iter8 = " << a.end() - Iter8 << endl; //Iter8 = 5
    cout << "Iter9 = " << a.end() - Iter9 << endl; //Iter9 = 0
    cout << "Iter10 = " << a.end() - Iter10 << endl; //Iter10 = 0




    return 0;
}