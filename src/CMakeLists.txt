project(planning_main)

add_subdirectory(pnc_map)
add_subdirectory(process)

add_executable(${PROJECT_NAME} planning_main.cpp)


target_include_directories(
${PROJECT_NAME}
PUBLIC
${CMAKE_CURRENT_SOURCE_DIR}/process) 

target_link_libraries(${PROJECT_NAME} PUBLIC process)