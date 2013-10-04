cmake_minimum_required(VERSION 2.8)
project(e4c CXX)

set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -Werror -pedantic")

enable_testing()

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/ecore)

set(GENERATOR "${CMAKE_CURRENT_SOURCE_DIR}/generator/es.senac.emf4cpp2.jar")

add_subdirectory(e4c)
add_subdirectory(ecore)
add_subdirectory(tests EXCLUDE_FROM_ALL)

add_custom_target(generator 
    ant -f ${CMAKE_CURRENT_SOURCE_DIR}/es.senac.emf4cpp2/build.xml
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

add_custom_target(regenerate)
file(GLOB_RECURSE METAMODELS "*.ecore")
foreach(METAMODEL ${METAMODELS})
    get_filename_component(NAME ${METAMODEL} NAME_WE)
    get_filename_component(DIR ${METAMODEL} PATH)
    message(STATUS "Adding target regenerate-${NAME}")
    add_custom_target(regenerate-${NAME}
        java -jar ${GENERATOR} ${METAMODEL}
        WORKING_DIRECTORY ${DIR})
    add_dependencies(regenerate regenerate-${NAME})
endforeach()

