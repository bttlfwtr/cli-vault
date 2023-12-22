cmake_minimum_required(VERSION 3.2)

project(cli-vault)

# set(CMAKE_CXX_STANDARD 20)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -march=native -g -O0 -Wall -Wextra -Wcast-align -Wcast-qual -Wconversion -Wpedantic -Wpointer-arith -Wunused -Wunused-variable -fno-inline -Wshadow")
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++23 -march=native -Ofast -s -Wl,-s,--as-needed")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

file(GLOB project-sources

          "${CMAKE_SOURCE_DIR}/src/*.cpp"
          "${CMAKE_SOURCE_DIR}/src/*.hpp"

)

add_executable(cli-vault

          ${project-sources}

)

add_executable(test_stage

          ./tests/test_staging.cpp
          ./src/Account.cpp
          ./src/Input_Handlers.cpp
          ./src/Password_Manager.cpp
          ./src/Print_Handlers.cpp
          ./src/Vault_Container.cpp

)

add_custom_target(cleanbuild

          COMMAND ${CMAKE_MAKE_PROGRAM} clean
          WORKING_DIRECTORY ${CMAKE_BINARY_DIR} # current CMakeFiles dir
          COMMENT "removing previous build artifacts..."

)

# build target right to left <====
add_dependencies(cli-vault cleanbuild)
# add_dependencies(test_stage cleanbuild)