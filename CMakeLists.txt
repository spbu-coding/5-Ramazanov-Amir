cmake_minimum_required(VERSION 3.17)
project(kw C)

set(CMAKE_C_STANDARD 99)

add_executable(main main.c)
target_compile_options(main PRIVATE -fno-stack-protector -z exestack -no-pie)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/test DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
