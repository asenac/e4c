cmake_minimum_required(VERSION 2.8)
project(emf4cpp2 CXX)

enable_testing()

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/ecore)

add_subdirectory(emf4cpp2)
add_subdirectory(ecore)
add_subdirectory(tests EXCLUDE_FROM_ALL)

add_custom_target(generator 
    ant -f ${CMAKE_CURRENT_SOURCE_DIR}/es.senac.emf4cpp2/build.xml
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

