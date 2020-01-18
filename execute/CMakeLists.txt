cmake_minimum_required(VERSION 2.8)
set(This Executor)
project(${This})

enable_testing()

set(SOURCES
        executor.cpp)

add_executable(${This} ${SOURCES})

target_link_libraries(${This}
        Calculator)