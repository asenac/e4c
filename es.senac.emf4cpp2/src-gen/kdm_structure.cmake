


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-kdm-structure SHARED
	kdm/structure/StructurePackage.cpp
	kdm/structure/AbstractStructureElement.cpp
	kdm/structure/Subsystem.cpp
	kdm/structure/Layer.cpp
	kdm/structure/StructureModel.cpp
	kdm/structure/Component.cpp
	kdm/structure/SoftwareSystem.cpp
	kdm/structure/AbstractStructureRelationship.cpp
	kdm/structure/StructureRelationship.cpp
	kdm/structure/ArchitectureView.cpp
	kdm/structure/StructureElement.cpp
	)

