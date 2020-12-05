cmake_minimum_required(VERSION 3.5)

set(APPLIB_NAME app)

file(GLOB_RECURSE APP_SRC "*.cpp")

add_library(${APPLIB_NAME} STATIC ${APP_SRC})

target_include_directories(${APPLIB_NAME} 
    PRIVATE ${CMAKE_CURRENT_LIST_DIR}
    PRIVATE "${PROJECT_SOURCE_DIR}/src/Functionator"
)

set(APPLIB_NAME ${APPLIB_NAME} PARENT_SCOPE)