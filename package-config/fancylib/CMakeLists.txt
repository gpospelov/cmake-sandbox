cmake_minimum_required(VERSION 3.5)
project(fancylib VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

include(configuration)

add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(example)
