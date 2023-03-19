cmake_minimum_required(VERSION 3.24)
project(artx_challenges)

set(CMAKE_CXX_STANDARD 14)

add_executable(artx_challenges
        algorithm/highPrecisionAdditionAndSubtraction/add/add.cpp
        algorithm/highPrecisionAdditionAndSubtraction/sub/sub.cpp
        algorithm/search/bsearch.cpp
        algorithm/sort/mergeSort/MergeSort.cpp algorithm/highPrecisionAdditionAndSubtraction/multiple/multiple.cpp algorithm/highPrecisionAdditionAndSubtraction/div/div.cpp)
