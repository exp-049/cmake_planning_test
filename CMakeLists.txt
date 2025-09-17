cmake_minimum_required(VERSION 3.10)
project(cmake_planning_test)
set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
aux_source_directory(. SRC_LIST)
add_executable(cmake_planning_test ${SRC_LIST})