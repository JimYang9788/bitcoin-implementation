cmake_minimum_required (VERSION 3.10)

    # C++version config
    set(CMAKE_CXX_STANDARD 17)
    set(CMAKE_CXX_STANDARD_REQUIRED True)

    project (bitcoin)


    add_executable(bitcoin.tsk bitcoin.m.cpp)
