


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-kdm-build SHARED
	kdm/build/BuildPackage.cpp
	kdm/build/BuildFactory.cpp
	kdm/build/AbstractBuildElement.cpp
	kdm/build/BuildResource.cpp
	kdm/build/BuildDescription.cpp
	kdm/build/SymbolicLink.cpp
	kdm/build/AbstractBuildRelationship.cpp
	kdm/build/LinksTo.cpp
	kdm/build/Consumes.cpp
	kdm/build/BuildModel.cpp
	kdm/build/BuildComponent.cpp
	kdm/build/Supplier.cpp
	kdm/build/Tool.cpp
	kdm/build/BuildElement.cpp
	kdm/build/BuildRelationship.cpp
	kdm/build/SuppliedBy.cpp
	kdm/build/Library.cpp
	kdm/build/BuildStep.cpp
	kdm/build/Produces.cpp
	kdm/build/SupportedBy.cpp
	kdm/build/BuildProduct.cpp
	kdm/build/DescribedBy.cpp
	)
	
target_link_libraries(e4c-kdm-build e4c)

