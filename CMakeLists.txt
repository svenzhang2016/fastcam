cmake_minimum_required(VERSION 3.5)

set(CMAKE_FIND_PACKAGE_PREFER_CONFIG ON)

project(pluginframe VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

find_package(eCAL REQUIRED)
find_package(OpenCASCADE REQUIRED)
if(${OpenCASCADE_FOUND})
message(${OpenCASCADE_INCLUDE_DIR})
endif()

add_subdirectory(googletest)
add_subdirectory(utest)
add_subdirectory(plugin)
add_subdirectory(test)
add_subdirectory(SARibbonBar)
add_subdirectory(app)