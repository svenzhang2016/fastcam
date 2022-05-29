project(plugin_utest)

include_directories(${CMAKE_SOURCE_DIR}/plugin)
include_directories(googletest/include)

add_executable(usegtest usegtest.h usegtest_main.cpp)
target_link_libraries(usegtest PRIVATE gtest)

add_executable(simpleplugin simpleplugin_main.cpp)
target_link_libraries(simpleplugin PRIVATE gtest plugin)

