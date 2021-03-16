set(SOURCE main_window.cpp
           exception_window.cpp)

add_library(GUILib STATIC ${SOURCE})

target_include_directories(GUILib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

find_package(dlib CONFIG REQUIRED)
target_link_libraries(GUILib PRIVATE dlib::dlib)