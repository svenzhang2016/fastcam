
include_directories(${CMAKE_SOURCE_DIR}/SARibbonBar)

set(SOURCE_FILES 
    main.cpp
    mainwindow.cpp 
    mainwindow.h
)

add_executable(fastcam ${SOURCE_FILES})
target_link_libraries(fastcam ${Qt5Widgets_LIBRARIES} SARibbonBar)