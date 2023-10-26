set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(Book book.cpp)

target_include_directories(Book PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
