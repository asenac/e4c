


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-kdm-source SHARED
	kdm/source/SourcePackage.cpp
	kdm/source/SourceFactory.cpp
	kdm/source/SourceRef.cpp
	kdm/source/SourceRegion.cpp
	kdm/source/InventoryModel.cpp
	kdm/source/AbstractInventoryElement.cpp
	kdm/source/InventoryItem.cpp
	kdm/source/SourceFile.cpp
	kdm/source/Image.cpp
	kdm/source/ResourceDescription.cpp
	kdm/source/Configuration.cpp
	kdm/source/InventoryContainer.cpp
	kdm/source/Directory.cpp
	kdm/source/Project.cpp
	kdm/source/AbstractInventoryRelationship.cpp
	kdm/source/BinaryFile.cpp
	kdm/source/ExecutableFile.cpp
	kdm/source/DependsOn.cpp
	kdm/source/InventoryElement.cpp
	kdm/source/InventoryRelationship.cpp
	)
	
target_link_libraries(e4c-kdm-source e4c)

