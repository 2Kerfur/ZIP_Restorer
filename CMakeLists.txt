cmake_minimum_required(VERSION 3.0)

project(passwordtester)

add_executable(passwordtester main.cpp)

install(TARGETS passwordtester RUNTIME DESTINATION bin)
