//
//  Hash_Sort.cpp
//  algorithm_and_data_structure
//
//  Created by 田野辺開 on 2021/09/05.
//

#include <iostream>
using namespace std;

#define M 1046527
#define NIL (-1)
#define L 14

char H[M][L]; //Hash Table

//文字から数字に変換
int getChar(char ch) {
    if ( ch == 'A') {
        return 1;
    } else if (ch == 'C') {
        return 2;
    } else if (ch == 'G') {
        return 3;
    } else if (ch == 'T') {
        return 4;
    }
    return 0;
}


//文字列から数値へ変換してkeyを生成する
long long getKey(char str[]) {
    long long sum = 0, p = 1, i;
    for (i = 0; i < strlen(str); i++) {
        sum += p*(getChar(str[i]));
        p *= 5;
    }
    return sum;
}

int h1(int key) {
    return key % M;
}

int h2(int key) {
    return 1 + (key % (M - 1));
}

int find(char str[]) {
    long long key, i, h;
    for (i = 0;; i++) {
        <#statements#>
    }
}
