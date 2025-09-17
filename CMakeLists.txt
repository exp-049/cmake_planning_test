cmake_minimum_required(VERSION 3.10)
project(planning
    VERSION 0.1.0
    DESCRIPTION "A simple CMake project to test CMake features"
    HOMEPAGE_URL "https://github.com/exp-049/cmake_planning_test"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(Process_Dir ${CMAKE_CURRENT_SOURCE_DIR}/src/process)
set(Pnc_Map_Dir ${CMAKE_CURRENT_SOURCE_DIR}/src/pnc_map)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

add_subdirectory(src)