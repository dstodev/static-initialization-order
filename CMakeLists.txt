# 2020 Daniel Stotts

cmake_minimum_required(VERSION 3.15.x)
project(StaticInitializationOrder)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/lib/cmake)

if (MSVC)
	add_compile_options(/W4 /WX)
endif()

set(CMAKE_CXX_STANDARD 17)

# Set global runtime output directory so .dll files are placed adjacent to .exe files
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Enable testing for all subsequent subdirectories
include(CTest)

add_subdirectory(src)
add_subdirectory(lib)
add_subdirectory(test)
