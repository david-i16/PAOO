cmake_minimum_required(VERSION 3.10)

project(PAOO)

add_subdirectory(book)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(PAOO main.cpp)

target_link_libraries(PAOO PUBLIC Book)

