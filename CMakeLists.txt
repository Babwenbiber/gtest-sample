cmake_minimum_required(VERSION 2.8)
set(This Calculator)
project(${This})

enable_testing()

set(SOURCES
        Calculator.cpp)
set(HEADERS
        Calculator.h)
set(CMAKE_CXX_STANDARD 11)

add_library(${This} STATIC ${SOURCES} ${HEADERS})

add_subdirectory(test)
add_subdirectory(execute)