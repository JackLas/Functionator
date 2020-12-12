cmake_minimum_required(VERSION 3.5)

add_subdirectory(Functionator)
add_subdirectory(Application)

add_executable(${PROJECT_NAME} 
	"main.cpp"
)

target_link_libraries(${PROJECT_NAME} ${FUNCLIB_NAME} ${APPLIB_NAME})

target_include_directories(${PROJECT_NAME} 
	PRIVATE "${PROJECT_SOURCE_DIR}/src/Functionator"
	PRIVATE "${PROJECT_SOURCE_DIR}/src/Application"
)