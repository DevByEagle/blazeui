project(examples)

# Gather all directories inside examples/
file(GLOB CHILDREN RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *)

foreach(child ${CHILDREN})
    if(IS_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/${child}")
        # If the child is a directory, try to build an executable from its source files
        file(GLOB_RECURSE EXAMPLE_SOURCES
            "${CMAKE_CURRENT_SOURCE_DIR}/${child}/*.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/${child}/*.c"
        )

        if(EXAMPLE_SOURCES)
            add_executable(${child} ${EXAMPLE_SOURCES})
            target_link_libraries(${child} PUBLIC BlazeUI)
        endif()
    endif()
endforeach()
