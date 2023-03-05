cmake_minimum_required(VERSION 3.24)
project(CodeHelp_Learning)

set(CMAKE_CXX_STANDARD 23)

add_executable(CodeHelp_Learning patterns/main.cpp patterns/rough.h patterns/printSetBits.h patterns/factorial.h patterns/pascalTriangle.h patterns/pascalTriangle1.h )
add_executable(CodeHelp_Learning_1 arrays/main.cpp)
add_executable(CodeHelp_Learning_2 searching/main.cpp searching/findSqrt.h searching/binarySeachIn2DArray.h searching/pivotElement.h searching/divionUsingBinarySearch.h searching/findOddOneInArray.h searching/exponentialSearch.h)
add_executable(CodeHelp_Learning_3 search & sorting/main.cpp)
add_executable(CodeHelp_Learning_4 pointers/main.cpp)