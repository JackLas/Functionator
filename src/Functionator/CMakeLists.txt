cmake_minimum_required(VERSION 3.5)

set(FUNCLIB_NAME funclib)

file(GLOB_RECURSE FUNC_SRC "*.cpp")

add_library(${FUNCLIB_NAME} SHARED ${FUNC_SRC})

target_include_directories(${FUNCLIB_NAME} PRIVATE ${CMAKE_CURRENT_LIST_DIR})

set(FUNCLIB_NAME ${FUNCLIB_NAME} PARENT_SCOPE)