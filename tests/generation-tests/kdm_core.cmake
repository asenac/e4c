


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-kdm-core SHARED
	kdm/core/CorePackage.cpp
	kdm/core/CoreFactory.cpp
	kdm/core/Element.cpp
	kdm/core/ModelElement.cpp
	kdm/core/KDMEntity.cpp
	kdm/core/KDMRelationship.cpp
	kdm/core/AggregatedRelationship.cpp
	)
	
target_link_libraries(e4c-kdm-core e4c)

