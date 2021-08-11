//
//  Bubble_Sort.cpp
//  algorithm_and_data_structure
//
//  Created by 田野辺開 on 2021/08/08.
//
//バブルソート
#include<iostream>
using namespace std;

void output(int count, int array[], int n) {
    for (int i = 0; i < n; i ++) {
        if (i > 0) {
            cout << " ";
        }
        cout << array[i];
    }
    cout << endl;
    cout << count << endl;
}



void Bubble_Sort_algorithm(int array[], int n) {
    int flag = 1, i = 0, count = 0, k, c;
    while (flag) {
        flag = 0;
        /*
         iを＋1にして、範囲指定する理由は配列添字1までにしておけば比べる2者間の左隣の数はjで-1される為添字番号1で大丈夫。
         iを＋1しなければj−１の添字でarray配列の添字-1を指定することになり、結果挙動がおかしくなる。
        ↓ これだと挙動がおかしくなる。
        for (int j = n - 1; j >= i; j--) {
        */
        for (int j = n - 1; j >= i + 1; j--) {
            if (array[j] < array[j - 1]) {
                k = array[j -1];
                c = array[j];
                array[j] = k;
                array[j -1] = c;
                flag= 1;
                count ++;
            }
            //↓44~50はデバック用のためのコード。ここは問題には本来いらない。
            for (int i = 0; i < n; i ++) {
                if (i > 0) {
                    cout << " ";
                }
                cout << array[i];
            }
            cout << endl;
        }
        i++;
    }
    output(count, array, n);
}


void Bubble_Sort() {
    // ↓ 入力された行を配列に入れる
    int n;
    cin >> n;
    int array[100];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    Bubble_Sort_algorithm(array, n);
}
