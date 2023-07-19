cmake_minimum_required(VERSION 3.21)
project(AltairChessEngine)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS_DEBUG "-Wall")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -flto")

# Default build type
if(NOT CMAKE_BUILD_TYPE)
        set(CMAKE_BUILD_TYPE Release)
endif()

find_package(Threads REQUIRED)

#set(GCC_COVERAGE_LINK_FLAGS "-static")

#set(CMAKE_EXE_LINKER_FLAGS "${GCC_COVERAGE_LINK_FLAGS}")
include_directories(.)

add_executable(Altair
        src/main.cpp
        src/move.cpp
        src/perft.cpp
        src/position.cpp
        src/search.cpp
        src/useful.cpp
        src/uci.cpp
        src/bench.cpp
        src/see.cpp
        src/bitboard.cpp
        src/evaluation.cpp
        src/move_ordering.cpp)

target_link_libraries(Altair Threads::Threads)
