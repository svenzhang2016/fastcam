
add_executable(publisher publisher.cpp)
target_link_libraries(publisher eCAL::core)

add_executable(subscriber subscriber.cpp)
target_link_libraries(subscriber eCAL::core)