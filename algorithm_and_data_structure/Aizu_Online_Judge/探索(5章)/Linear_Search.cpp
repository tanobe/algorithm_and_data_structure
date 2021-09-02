//
//  Linear_Search.cpp
//  algorithm_and_data_structure
//
//  Created by 田野辺開 on 2021/08/27.
//

#include <iostream>
using namespace std;

bool Linear_Search_algorithm (int n, int Array[], int a){
    int i = 0;
    Array[n] = a;
    while (Array[i] != a) {
        i ++;
    }
    return  i != n;
}




void Linear_Search() {
    int n, q, Array[11000], a, count = 0;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> Array[i];
    }
    
    /**
     下3行今回の上手い書き方でありポイントである。番兵というので一致するかを調べる数字を
     調べられる数字配列の最後尾に常に入れてfor文で回すのがポイント。
     番兵の方が効率が良く計算量が少ないという理論を忘れがちなので忘れた場合は以下のURLを参照する。
     https://programgenjin.hatenablog.com/entry/2019/02/22/210539
     */
    cin >> q;
    for (int i = 0; i < q; i ++) {
        cin >> a;
        if (Linear_Search_algorithm(n, Array, a)) {
            count ++;
        }
    }
    cout << count << endl;
}
