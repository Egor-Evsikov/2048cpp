cmake_minimum_required(VERSION 3.30)


project(MyGame VERSION 0.1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set( SOURCES 
    src/spawn_print.cpp
    src/swipes.cpp
    src/game.cpp
    src/field.cpp
)




add_executable(game main.cpp)
add_library(engine ${SOURCES} )
target_include_directories(header PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(game PRIVATE header engine
)