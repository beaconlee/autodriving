# SET(CMAKE_BUILD_TYPE Debug)

add_executable(matrix ${CMAKE_CURRENT_SOURCE_DIR}/matrix.cc)


set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin/eigen)