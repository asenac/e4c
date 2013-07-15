


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-kdm-platform SHARED
	kdm/platform/PlatformPackage.cpp
	kdm/platform/AbstractPlatformElement.cpp
	kdm/platform/PlatformModel.cpp
	kdm/platform/AbstractPlatformRelationship.cpp
	kdm/platform/Requires.cpp
	kdm/platform/ResourceType.cpp
	kdm/platform/NamingResource.cpp
	kdm/platform/MarshalledResource.cpp
	kdm/platform/MessagingResource.cpp
	kdm/platform/FileResource.cpp
	kdm/platform/ExecutionResource.cpp
	kdm/platform/PlatformAction.cpp
	kdm/platform/ExternalActor.cpp
	kdm/platform/DataManager.cpp
	kdm/platform/BindsTo.cpp
	kdm/platform/PlatformElement.cpp
	kdm/platform/PlatformRelationship.cpp
	kdm/platform/PlatformEvent.cpp
	kdm/platform/LockResource.cpp
	kdm/platform/DeployedSoftwareSystem.cpp
	kdm/platform/Machine.cpp
	kdm/platform/DeployedComponent.cpp
	kdm/platform/DeployedResource.cpp
	kdm/platform/Loads.cpp
	kdm/platform/Spawns.cpp
	kdm/platform/RuntimeResource.cpp
	kdm/platform/Thread.cpp
	kdm/platform/Process.cpp
	kdm/platform/ReadsResource.cpp
	kdm/platform/WritesResource.cpp
	kdm/platform/ManagesResource.cpp
	kdm/platform/DefinedBy.cpp
	kdm/platform/StreamResource.cpp
	)

