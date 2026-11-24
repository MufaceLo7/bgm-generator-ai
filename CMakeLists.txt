cmake_minimum_required(VERSION 3.16)
project(bgm-generator-ai CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(bgmgeneratorai
    src/main.cpp
    src/compose.cpp
    src/mood.cpp
    src/render.cpp
    src/cli.cpp
    src/events.cpp
)

target_include_directories(bgmgeneratorai PRIVATE include)

if(WIN32)
    target_link_libraries(bgmgeneratorai PRIVATE userenv)
endif()
