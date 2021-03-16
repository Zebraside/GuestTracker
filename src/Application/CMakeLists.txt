add_executable(GuestTracker main.cpp application.cpp)
target_include_directories(GuestTracker PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(GuestTracker PUBLIC SystemLib GUILib)