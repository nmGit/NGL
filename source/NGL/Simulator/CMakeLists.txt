cmake_minimum_required(VERSION 3.22)
project(NGLSimulator)

##### Qt Setup #####
#add_executable(NGL_Dev)
include(${CMAKE_CURRENT_LIST_DIR}/cmake/find_qt.cmake)
setup_qt_project(NGL_Dev)
##### Simulator #####
target_sources(NGL_Dev PRIVATE 
	${CMAKE_CURRENT_LIST_DIR}/main.cpp 
	${CMAKE_CURRENT_LIST_DIR}/MainWindow.cpp)

##### Qt Advanced Docking System #####
set(BUILD_EXAMPLES FALSE)
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/external/ads)
target_link_libraries(NGL_Dev PRIVATE ads::qt6advanceddocking)



include(cmake/dependency_mgmt.cmake)
copy_after_build(ads::qt6advanceddocking)
