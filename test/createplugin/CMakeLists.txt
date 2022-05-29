
include_directories(${CMAKE_SOURCE_DIR}/plugin)

add_library(pluginfirst SHARED pluginfirst.h pluginfirst.cpp)
target_link_libraries(pluginfirst PRIVATE plugin)

add_library(pluginsecond SHARED pluginsecond.h pluginsecond.cpp)
target_link_libraries(pluginsecond PRIVATE plugin)

add_executable(loadplugin simpleload.cpp)
target_link_libraries(loadplugin PRIVATE plugin)
