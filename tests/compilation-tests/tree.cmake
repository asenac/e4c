


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-tree SHARED
	tree/TreePackage.cpp
	tree/TreeFactory.cpp
	tree/TreeNode.cpp
	tree/Leaf.cpp
	tree/NonTerminal.cpp
	)
	
target_link_libraries(e4c-tree e4c)

