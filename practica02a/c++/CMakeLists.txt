cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(practica02a VERSION 1.0)

file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(practica02a main.cpp ${SRC_FILES})
target_include_directories(practica02a PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

find_package (Threads REQUIRED)

target_link_libraries(practica02a ${CMAKE_THREAD_LIBS_INIT})
