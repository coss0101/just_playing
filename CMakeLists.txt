cmake_minimum_required(VERSION 3.28)
project(just_playing)

set(CMAKE_CXX_STANDARD 14)

find_package(SFML COMPONENTS system window graphics audio network REQUIRED)
add_executable(just_playing src/main.cpp)
target_link_libraries(just_playing sfml-system sfml-window sfml-graphics sfml-audio)
