//
// Created by Lenovo on 2021/1/25.
//

#ifndef DATASTRUCT_HUIWEN_H
#define DATASTRUCT_HUIWEN_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
int dpMostMoney[1001][1001];

void printCharArr(char *arr, int len) {
    for (int i = 0; i < len; i++) {
        putchar(arr[i]);
    }
    putchar('\n');
}

void printCharArrMark(char *arr, int len, int markPos) {
    for (int i = 0; i < len; i++) {
        if (i == markPos) {
            putchar('(');
            putchar(arr[i]);
            putchar(')');
        } else {
            putchar(arr[i]);
        }

    }
    putchar('\n');
}
struct node{
    int a;

    bool operator<(const node &rhs) const {
        return a < rhs.a;
    }

    bool operator>(const node &rhs) const {
        return rhs < *this;
    }

    bool operator<=(const node &rhs) const {
        return !(rhs < *this);
    }

    bool operator>=(const node &rhs) const {
        return !(*this < rhs);
    }
};
#include "MathUtil.h"

int main() {
//    int arr[4] = {17, 32, 56, 0};
//    int arr[4] = {17, 32, 56, 0};
    int arr[4] = {37 ,37 ,37, 0};
    KWay(arr, 4,true).run();
}


#endif //DATASTRUCT_HUIWEN_H
