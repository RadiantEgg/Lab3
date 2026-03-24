cmake_minimum_required(VERSION 3.10)

project(word_cleaner C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(test_text_utlis
    tests/test_text_utlis.c
    src/text_utlis.c
)
target_include_directories(test_text_utlis PUBLIC include)