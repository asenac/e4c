


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-json SHARED
	json/JsonPackage.cpp
	json/JsonFactory.cpp
	json/ObjectValue.cpp
	json/NVPair.cpp
	json/Value.cpp
	json/StringValue.cpp
	json/NumberValue.cpp
	json/BooleanValue.cpp
	json/ArrayValue.cpp
	json/NullValue.cpp
	)
	
target_link_libraries(e4c-json e4c)

