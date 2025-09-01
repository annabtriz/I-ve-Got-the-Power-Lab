cmake_minimum_required(VERSION 3.24)

project(ive-got-the-power)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(lab2_test src/lab2.cpp tests/lab2_test.cpp)

target_link_libraries(lab2_test PRIVATE Catch2::Catch2WithMain)
