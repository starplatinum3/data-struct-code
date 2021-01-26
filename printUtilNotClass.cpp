//
// Created by Lenovo on 2020/10/16.
//
#include "../mylib.h"
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include "printUtilNotClass.h"
int println(const char *__format, ...) {
//    int printf (const char *__format, ...)
//     printf(__format, ...);
    printf("\n");
    //failed
    return 1;
}

template<class T>
void printVector(std::vector<T> v) {
    for (auto val:v) {
        std::cout << val << " ";
    }
    std::cout << "\n";
//    std::for_each(begin(some_list), end(some_list), [&, value, this](int x)
//    {
//        total += x * value * this->some_func();
//    });
//    https://www.cnblogs.com/jimodetiantang/p/9016826.html
}
void printArr(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        printf("%4d ", arr[i]);
    }
    printf("\n");
}