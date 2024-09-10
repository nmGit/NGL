
function(copy_after_build TARGET_NAME)
add_custom_command(
    TARGET NGL_Dev POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E echo 
        "Copying $<TARGET_FILE:${TARGET_NAME}> to $<TARGET_FILE_DIR:NGL_Dev>..."
)
add_custom_command(
    TARGET NGL_Dev POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different 
        $<TARGET_FILE:${TARGET_NAME}>
        $<TARGET_FILE_DIR:NGL_Dev>
)

endfunction()