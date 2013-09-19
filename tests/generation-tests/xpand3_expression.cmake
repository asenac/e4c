


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-xpand3-expression SHARED
	xpand3/expression/ExpressionPackage.cpp
	xpand3/expression/ExpressionFactory.cpp
	xpand3/expression/AbstractExpression.cpp
	xpand3/expression/BooleanOperation.cpp
	xpand3/expression/Cast.cpp
	xpand3/expression/ChainExpression.cpp
	xpand3/expression/ConstructorCallExpression.cpp
	xpand3/expression/FeatureCall.cpp
	xpand3/expression/CollectionExpression.cpp
	xpand3/expression/OperationCall.cpp
	xpand3/expression/TypeSelectExpression.cpp
	xpand3/expression/GlobalVarExpression.cpp
	xpand3/expression/IfExpression.cpp
	xpand3/expression/LetExpression.cpp
	xpand3/expression/ListLiteral.cpp
	xpand3/expression/Literal.cpp
	xpand3/expression/BooleanLiteral.cpp
	xpand3/expression/IntegerLiteral.cpp
	xpand3/expression/NullLiteral.cpp
	xpand3/expression/RealLiteral.cpp
	xpand3/expression/StringLiteral.cpp
	xpand3/expression/SwitchExpression.cpp
	xpand3/expression/Case.cpp
	xpand3/expression/BinaryOperation.cpp
	xpand3/expression/UnaryOperation.cpp
	)
	
target_link_libraries(e4c-xpand3-expression e4c)

