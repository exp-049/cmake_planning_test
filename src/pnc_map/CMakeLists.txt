project(pnc_map)

add_library(${PROJECT_NAME}
SHARED
pnc_map.cpp
)
target_include_directories(
${PROJECT_NAME}
PUBLIC
${Process_Dir}
)