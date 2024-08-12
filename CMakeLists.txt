cmake_minimum_required(VERSION 3.20)

project(NGL)

##### Build Setup #####
if(MSVC)
	add_compile_options(/std:c++17)
endif()

##### Library #####
add_library(NGL)

target_sources(NGL PRIVATE
	${CMAKE_CURRENT_LIST_DIR}/source/NGL/Label.cpp
	${CMAKE_CURRENT_LIST_DIR}/source/NGL/Widget.cpp
	${CMAKE_CURRENT_LIST_DIR}/source/NGL/List.cpp
	${CMAKE_CURRENT_LIST_DIR}/source/NGL/Screen.cpp
	${CMAKE_CURRENT_LIST_DIR}/source/NGL/Core/Core.cpp
	${CMAKE_CURRENT_LIST_DIR}/source/NGL/Renderer/Renderer.cpp
	${CMAKE_CURRENT_LIST_DIR}/source/NGL/Renderer/Text.cpp
	${CMAKE_CURRENT_LIST_DIR}/source/NGL/Renderer/Font.cpp
	${CMAKE_CURRENT_LIST_DIR}/source/NGL/Renderer/RasterObject.cpp
)

##### Development #####
if(${NGL_BUILD_DEVELOPMENT})
	add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/source/NGL/Simulator)
endif()

target_include_directories(NGL PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include)