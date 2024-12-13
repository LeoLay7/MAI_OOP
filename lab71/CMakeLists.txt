cmake_minimum_required(VERSION 3.10)
project(FightProject2)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Добавление опций компиляции
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror=maybe-uninitialized")

# Добавляем заголовочные файлы Google Test в путь поиска компилятора
include_directories(${googletest_SOURCE_DIR}/googletest/include)

# Установка Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.15.2
  TLS_VERIFY false
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include_directories(${googletest_SOURCE_DIR}/googletest/include)

include_directories(include)

add_executable(FightProject2  src/Dragon.cpp src/NPC.cpp src/knight.cpp src/Frog.cpp  src/main.cpp )
