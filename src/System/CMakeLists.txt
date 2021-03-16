set(SOURCE camera.cpp)

add_library(SystemLib STATIC ${SOURCE})
target_include_directories(SystemLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

find_package(OpenCV CONFIG REQUIRED)
target_link_libraries(SystemLib PUBLIC opencv_videoio opencv_highgui)
