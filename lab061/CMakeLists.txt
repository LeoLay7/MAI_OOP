cmake_minimum_required(VERSION 3.10)
project(FiguresProject)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror=maybe-uninitialized")

include_directories(${CMAKE_SOURCE_DIR}/include)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.15.2
  TLS_VERIFY false
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

file(GLOB_RECURSE SOURCES
    ${CMAKE_SOURCE_DIR}/npc/*.cpp
)

add_executable(lab06 main.cpp ${SOURCES})

file(GLOB_RECURSE TEST_SOURCES ${CMAKE_SOURCE_DIR}/tests/*.cpp)
add_executable(lab_tests ${TEST_SOURCES} ${SOURCES})

target_link_libraries(lab_tests PRIVATE gtest gtest_main)

enable_testing()

add_test(NAME lab_tests COMMAND lab_tests)
