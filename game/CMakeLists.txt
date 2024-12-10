cmake_minimum_required(VERSION 3.30)


project(2048 VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set( SOURCES
    src/main.cpp
    src/spawn_print.cpp
    src/swipes.cpp
    src/game.cpp
    src/field.cpp
)




add_executable(Goida ${SOURCES})
target_include_directories(Goida PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)


