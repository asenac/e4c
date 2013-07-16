


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-CST SHARED
	CST/CSTPackage.cpp
	CST/Tree.cpp
	CST/Element.cpp
	CST/Node.cpp
	CST/Leaf.cpp
	)
	
target_link_libraries(e4c-CST e4c)

