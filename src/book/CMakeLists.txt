set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(Book book.cxx)

target_include_directories(Book PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
