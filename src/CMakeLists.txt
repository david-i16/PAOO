cmake_minimum_required(VERSION 3.10)

project(PAOO)

# Include the book directory
add_subdirectory(book)

# Create the main executable
add_executable(PAOO main.cpp)
target_link_libraries(PAOO BookLibrary)

# Specify the include directories for the main executable
target_include_directories(PAOO PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/book)
