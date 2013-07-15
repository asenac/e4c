


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-kdm-kdm SHARED
	kdm/kdm/KdmPackage.cpp
	kdm/kdm/KDMFramework.cpp
	kdm/kdm/KDMModel.cpp
	kdm/kdm/Audit.cpp
	kdm/kdm/Segment.cpp
	kdm/kdm/Attribute.cpp
	kdm/kdm/Annotation.cpp
	kdm/kdm/TagDefinition.cpp
	kdm/kdm/ExtendedValue.cpp
	kdm/kdm/Stereotype.cpp
	kdm/kdm/ExtensionFamily.cpp
	kdm/kdm/TaggedRef.cpp
	kdm/kdm/TaggedValue.cpp
	)

