


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-bintree SHARED
	bintree/BintreePackage.cpp
	bintree/BintreeFactory.cpp
	bintree/BinTreeNode.cpp
	)
	
target_link_libraries(e4c-bintree e4c)

