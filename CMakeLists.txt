cmake_minimum_required(VERSION 3.27)

project(cli-vault)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0 -Wall -Wcast-align -Wcast-qual -Wconversion -Wextra -Wpedantic -Wpointer-arith -Wunused -Wunused-variable -fno-inline -g -Wshadow")
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Ofast -Wall -Wextra -s -Wl,-s,--as-needed")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

file(GLOB project-sources

          "${CMAKE_SOURCE_DIR}/src/*.cpp"
          "${CMAKE_SOURCE_DIR}/src/*.hpp"
)

add_executable(cli-vault

          ${project-sources}
)

add_custom_target(cleanbuild

          COMMAND ${CMAKE_MAKE_PROGRAM} clean
          WORKING_DIRECTORY ${CMAKE_BINARY_DIR} # current CMakeFiles dir
          COMMENT "removing previous build artifacts..."
)

add_dependencies(cli-vault cleanbuild)