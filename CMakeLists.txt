cmake_minimum_required(VERSION 3.20)

project(NGL)

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

target_include_directories(NGL PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include)