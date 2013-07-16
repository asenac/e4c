add_executable(e4c-ecore-test test.cpp)
target_link_libraries(e4c-ecore-test e4c e4c-ecore)

add_test(e4c-ecore-test e4c-ecore-test)
add_test(NAME e4c-ecore-valgrind-test 
    COMMAND valgrind --leak-check=full --show-reachable=yes --log-file=e4c-ecore-test-valgrind.log ./e4c-ecore-test
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

