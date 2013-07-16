add_executable(e4c-ecore-test test.cpp)
target_link_libraries(e4c-ecore-test e4c e4c-ecore)

add_test(e4c-ecore-test e4c-ecore-test)

