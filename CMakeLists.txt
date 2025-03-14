cmake_minimum_required(VERSION 3.10)

project(CPPyBird)

find_package(SDL2 REQUIRED)

set(CMAKE_CXX_STANDARD 17)

add_executable(CPPyBird src/main.cpp src/game.cpp src/renderer.cpp src/controller.cpp src/bird.cpp src/pipe.cpp)

# Link SDL2 to your project
target_link_libraries(CPPyBird SDL2::SDL2)
