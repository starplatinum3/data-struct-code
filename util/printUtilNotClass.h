//
// Created by Lenovo on 2021/1/1.
//

#ifndef DATASTRUCT_PRINTUTILNOTCLASS_H
#define DATASTRUCT_PRINTUTILNOTCLASS_H

template<class T>
void printVector(std::vector<T> v);

void printVector(std::vector<long long> v);

//D:/project/cppProject/datastruct/main.cpp:32: undefined reference to
// `printVector(std::vector<long long, std::allocator<long long> >)'
//

void printArr(int *arr, int len) ;


#endif //DATASTRUCT_PRINTUTILNOTCLASS_H
