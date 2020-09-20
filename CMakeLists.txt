cmake_minimum_required(VERSION 3.5)

set(EXECUTABLE_OUTPUT_PATH "../bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "../bin")

project(functionator VERSION 1.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++14")

file(GLOB APP "src/Application/*.cpp")
file(GLOB FUNCLIB "src/Functionator/*.cpp")

include_directories("${PROJECT_SOURCE_DIR}/src/Functionator")
include_directories("${PROJECT_SOURCE_DIR}/src/Application")

set(FUNCLIB_NAME "func")
add_library(${FUNCLIB_NAME} ${FUNCLIB})

add_executable(${PROJECT_NAME} 
	${APP}
	"src/main.cpp"
)

target_link_libraries(${PROJECT_NAME} ${FUNCLIB_NAME})