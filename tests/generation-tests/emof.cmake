


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-emof SHARED
	emof/EmofPackage.cpp
	emof/EmofFactory.cpp
	emof/Class.cpp
	emof/Comment.cpp
	emof/DataType.cpp
	emof/Element.cpp
	emof/Enumeration.cpp
	emof/EnumerationLiteral.cpp
	emof/Extent.cpp
	emof/MultiplicityElement.cpp
	emof/NamedElement.cpp
	emof/Object.cpp
	emof/Operation.cpp
	emof/Package.cpp
	emof/Parameter.cpp
	emof/PrimitiveType.cpp
	emof/Property.cpp
	emof/Tag.cpp
	emof/Type.cpp
	emof/TypedElement.cpp
	emof/URIExtent.cpp
	)
	
target_link_libraries(e4c-emof e4c)

