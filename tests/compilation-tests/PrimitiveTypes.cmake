


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-PrimitiveTypes SHARED
	PrimitiveTypes/PrimitiveTypesPackage.cpp
	PrimitiveTypes/PrimitiveTypesFactory.cpp
	)
	
target_link_libraries(e4c-PrimitiveTypes e4c)

