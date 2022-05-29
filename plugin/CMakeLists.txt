add_definitions(-DPLUGIN_LIB)

set(SOURCE_FILES iplugin.h pluginhandler.h plugin_global.h pluginmanager.h pluginmanager.cpp)

add_library(plugin SHARED ${SOURCE_FILES})
target_link_libraries(plugin ${CMAKE_DL_LIBS})