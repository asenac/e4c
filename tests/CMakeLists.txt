
add_subdirectory(test-ecore)
add_subdirectory(generation-tests)
add_subdirectory(compilation-tests)

add_custom_target(generate-examples
    ${CMAKE_CURRENT_SOURCE_DIR}/generate-examples.sh
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

