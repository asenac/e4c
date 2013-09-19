


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-myDsl SHARED
	myDsl/MyDslPackage.cpp
	myDsl/MyDslFactory.cpp
	myDsl/Model.cpp
	myDsl/Import.cpp
	myDsl/Type.cpp
	myDsl/SimpleType.cpp
	myDsl/Entity.cpp
	myDsl/Property.cpp
	)
	
target_link_libraries(e4c-myDsl e4c)

