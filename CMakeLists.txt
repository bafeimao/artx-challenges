cmake_minimum_required(VERSION 3.24)
project(artx_challenges)

set(CMAKE_CXX_STANDARD 14)

add_executable(artx_challenges
        algorithm/highPrecision/add/add.cpp
        algorithm/highPrecision/sub/sub.cpp
        algorithm/search/bsearch.cpp
        algorithm/sort/mergeSort/MergeSort.cpp
        algorithm/highPrecision/multiple/multiple.cpp
        algorithm/highPrecision/div/div.cpp algorithm/prefixSum/preFix.cpp)
