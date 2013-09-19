cmake_minimum_required(VERSION 2.8)
project(e4c CXX)

set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -Werror -pedantic")

enable_testing()

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/ecore)

add_subdirectory(e4c)
add_subdirectory(ecore)
add_subdirectory(tests EXCLUDE_FROM_ALL)

add_custom_target(generator 
    ant -f ${CMAKE_CURRENT_SOURCE_DIR}/es.senac.emf4cpp2/build.xml
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

