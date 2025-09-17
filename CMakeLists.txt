cmake_minimum_required(VERSION 3.10)
project(cmake_planning_test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# 源码
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LIST)

# 静态库 / 动态库
add_library(common SHARED ${SRC_LIST})
target_include_directories(common PUBLIC ${PROJECT_SOURCE_DIR}/include)

# 可执行程序
add_executable(planning_main planning_main.cpp)
target_link_libraries(planning_main PRIVATE common)
target_include_directories(planning_main PRIVATE ${PROJECT_SOURCE_DIR}/include)
