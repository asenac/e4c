include(ecore.cmake)

add_custom_target(regenerate-ecore
    java -jar ${CMAKE_CURRENT_SOURCE_DIR}/../generator/es.senac.emf4cpp2.jar Ecore.ecore
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

