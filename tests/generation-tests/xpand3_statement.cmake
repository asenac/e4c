


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-xpand3-statement SHARED
	xpand3/statement/StatementPackage.cpp
	xpand3/statement/StatementFactory.cpp
	xpand3/statement/AbstractStatement.cpp
	xpand3/statement/ExpandStatement.cpp
	xpand3/statement/ExpressionStatement.cpp
	xpand3/statement/ErrorStatement.cpp
	xpand3/statement/AbstractStatementWithBody.cpp
	xpand3/statement/FileStatement.cpp
	xpand3/statement/ForEachStatement.cpp
	xpand3/statement/IfStatement.cpp
	xpand3/statement/LetStatement.cpp
	xpand3/statement/ProtectStatement.cpp
	xpand3/statement/TextStatement.cpp
	)
	
target_link_libraries(e4c-xpand3-statement e4c)

