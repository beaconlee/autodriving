project(sdl2)
add_executable(demo ${CMAKE_CURRENT_SOURCE_DIR}/demo.cc)
link_directories(${CMAKE_SOURCE_DIR}/lib)


target_link_libraries(demo ${CMAKE_SOURCE_DIR}/lib/libSDL2.dll.a)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin/sdl)

