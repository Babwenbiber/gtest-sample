cmake_minimum_required(VERSION 2.8)
set(This Tester)
project(${This})

set(SOURCES
        tester.cpp)

add_executable(${This} ${SOURCES})

target_link_libraries(${This}
        gtest_main
        gtest
        Calculator
        rt
        pthread)

add_test(NAME ${This}
        COMMAND ${This})