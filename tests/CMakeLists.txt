add_subdirectory(ecore)

add_custom_target(generate-examples
    ${CMAKE_CURRENT_SOURCE_DIR}/generate-examples.sh
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

