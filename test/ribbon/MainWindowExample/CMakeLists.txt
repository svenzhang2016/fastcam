
set(EXPAMPLE_NAME MainWindowExample)

include_directories(${CMAKE_SOURCE_DIR}/SARibbonBar)

qt5_add_resources(QRCS saribbonresouce.qrc)

qt5_wrap_cpp(Moced "mainwindow.h")

add_executable(${EXPAMPLE_NAME} 
    ${QRCS}
    mainwindow.h
    mainwindow.cpp
    main.cpp
	${Moced}
)

target_link_libraries(${EXPAMPLE_NAME} 
        ${Qt5Widgets_LIBRARIES}
	SARibbonBar
)

# SET_TARGET_PROPERTIES(${EXPAMPLE_NAME} PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

# INSTALL(
# 		TARGETS ${LIB_NAME}
# 		RUNTIME DESTINATION bin
# 		LIBRARY DESTINATION bin
# 		ARCHIVE DESTINATION lib
# 	)

