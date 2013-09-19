

include(xpand3_expression.cmake)
include(xpand3_statement.cmake)
include(xpand3_declaration.cmake)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-xpand3 SHARED
	xpand3/Xpand3Package.cpp
	xpand3/Xpand3Factory.cpp
	xpand3/SyntaxElement.cpp
	xpand3/File.cpp
	xpand3/ImportStatement.cpp
	xpand3/Identifier.cpp
	xpand3/DeclaredParameter.cpp
	)
	
target_link_libraries(e4c-xpand3 e4c)

