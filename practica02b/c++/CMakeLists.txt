cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(practica02b VERSION 1.0)

file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(practica02b main.cpp ${SRC_FILES})
target_include_directories(practica02b PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

find_package (Threads REQUIRED)

target_link_libraries(practica02b ${CMAKE_THREAD_LIBS_INIT})
