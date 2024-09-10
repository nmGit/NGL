# set(CMAKE_AUTOMOC ON)
# set(CMAKE_AUTORCC ON)
# set(CMAKE_AUTOUIC ON)

include(cmake/dependency_mgmt.cmake)

macro(setup_qt_project MY_PROJECT_NAME)

set(CMAKE_PREFIX_PATH "D:\\Qt\\6.7.2\\msvc2019_64")


find_package(Qt6 REQUIRED COMPONENTS Widgets Core)

qt_standard_project_setup()
qt_add_executable(${MY_PROJECT_NAME})
target_link_libraries(NGL_Dev PRIVATE Qt6::Widgets Qt6::Core)

copy_after_build(Qt6::Widgets)
copy_after_build(Qt6::Core)
copy_after_build(Qt6::Gui)
#copy_after_build(Qt6::windows)

qt_generate_deploy_app_script(
    TARGET ${MY_PROJECT_NAME}
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)

##### Qt Dependency Management #####
# This scans the executable and copies all necessary 
# dependencies (dll's) to the build output directory.
# add_custom_command(TARGET ${MY_PROJECT_NAME} POST_BUILD
#    COMMAND D:\\Qt\\6.7.2\\msvc2019_64\\bin\\windeployqt ${CMAKE_CURRENT_BINARY_DIR}
#)

add_custom_command(TARGET ${MY_PROJECT_NAME} POST_BUILD 
    COMMAND ${CMAKE_COMMAND} -E copy_if_different 
    ${CMAKE_PREFIX_PATH}/plugins/platforms/qwindowsd.dll
    $<TARGET_FILE_DIR:NGL_Dev>/platforms/qwindowsd.dll

)

##### Installation #####
# See https://www.qt.io/blog/cmake-deployment-api

install(TARGETS ${MY_PROJECT_NAME}
	BUNDLE DESTINATION .
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})

install(SCRIPT ${deploy_script})

endmacro()