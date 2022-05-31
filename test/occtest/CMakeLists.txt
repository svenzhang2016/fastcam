include_directories(${OpenCASCADE_INCLUDE_DIR})

add_executable(occtest Main.cpp 
ApplicationTut.cpp ApplicationTut.h 
ApplicationCommon.h ApplicationCommon.cpp 
Transparency.h Transparency.cpp
Material.h Material.cpp
View.h View.cpp
DocumentCommon.h DocumentCommon.cpp 
DocumentTut.cpp DocumentTut.h 
MakeBottle.cpp 
OcctWindow.h OcctWindow.cpp
MDIWindow.h  MDIWindow.cpp
CommonSample.h
)

target_link_libraries(occtest ${OpenCASCADE_LIBRARIES} ${Qt5Widgets_LIBRARIES})