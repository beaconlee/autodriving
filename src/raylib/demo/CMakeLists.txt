project(m2)
add_executable(m2 ${CMAKE_CURRENT_SOURCE_DIR}/hello_raylib.cc)
link_directories(${CMAKE_SOURCE_DIR}/lib)


target_link_libraries(m2 ${CMAKE_SOURCE_DIR}/lib/raylib.dll)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin/raylib)