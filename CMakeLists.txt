cmake_minimum_required(VERSION 3.15)
project(datastruct)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")
#https://blog.csdn.net/weixin_43851212/article/details/90485420
add_executable(datastruct  main.cpp util/printUtilNotClass.h util/printUtilNotClass.cpp
        MathUtil.h
        cutLog.h)