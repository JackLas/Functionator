cmake_minimum_required(VERSION 3.5)

add_subdirectory(Functionator)

file(GLOB APP "Application/*.cpp")

add_executable(${PROJECT_NAME} 
	${APP}
	"main.cpp"
)

target_link_libraries(${PROJECT_NAME} ${FUNCLIB_NAME})

target_include_directories(${PROJECT_NAME} 
	PRIVATE "${PROJECT_SOURCE_DIR}/src/Functionator"
	PRIVATE "${PROJECT_SOURCE_DIR}/src/Application"
)