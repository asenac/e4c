

include(kdm_action.cmake)
include(kdm_build.cmake)
include(kdm_code.cmake)
include(kdm_conceptual.cmake)
include(kdm_core.cmake)
include(kdm_data.cmake)
include(kdm_event.cmake)
include(kdm_source.cmake)
include(kdm_platform.cmake)
include(kdm_structure.cmake)
include(kdm_kdm.cmake)
include(kdm_ui.cmake)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-kdm SHARED
	kdm/KdmPackage.cpp
	kdm/KdmFactory.cpp
	)
	
target_link_libraries(e4c-kdm e4c)

