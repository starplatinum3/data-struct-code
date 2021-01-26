//
// Created by Lenovo on 2021/1/1.
//

#ifndef DATASTRUCT_LISTUTIL_H
#define DATASTRUCT_LISTUTIL_H

#include <vector>
#include <algorithm>
#include <iterator>

class ListUtil {
    template<typename T>
    static bool haveSame(std::vector<T> v1, std::vector<T> v2) {
        for (auto val:v1) {
//            if (std::find(v2.begin(), v2.end(), val) != v2.end()) {
//                return true;
//            }
            if (isFound(v2, val)) {
                return true;
            }
        }
        return false;
    }

    template<typename T>
    static typename std::vector<T>::iterator find(std::vector<T> v, T val) {
        return std::find(v.begin(), v.end(), val);
    }

    template<typename T>
    static typename std::vector<T>::iterator isFound(std::vector<T> v, T val) {
        return find(v, val) != v.end();
    }

    template<typename T>
    static typename std::vector<T>::iterator notFound(std::vector<T> v, T val) {
        return !isFound(v, val);
    }

public:
    static std::string toString(int *arr, int len) {
        std::string str;
        for (int i = 0; i < len - 1; i++) {
//                str+=arr[i]+" ";
            str += std::to_string(arr[i]) + ",";
//                https://blog.csdn.net/program_anywhere/article/details/63720261
//                str.append(arr[i]);
        }
        str += std::to_string(arr[len - 1]);
//        str += "\n";
        return str;
    }

    template<typename T>
    static std::string toString(std::vector<T> v) {
        std::string str = "[";

        for (int i = 0; i < v.size() - 1; i++) {
            str += std::to_string(v[i]) + ", ";
        }
        str += std::to_string(v.back());
        str += "]";

        return str;
    }


    static int min(int *arr, int len) {
        int minIndex = 0;
        for (int i = 0; i < len; i++) {
            if (arr[minIndex] > arr[i]) {
                minIndex = i;
            }
        }
        return arr[minIndex];
    }

    static int list0Cnt(const int *arr, int len) {
        return listNumCnt(arr, len, 0);
    }

    static int listNumCnt(const int *arr, int len, int val) {
//        std::find(arr,arr+len,val);
        int cnt = 0;
        for (int i = 0; i < len; i++) {
            if (arr[i] == val)cnt++;
        }
        return cnt;
    }
};

#endif //DATASTRUCT_LISTUTIL_H
