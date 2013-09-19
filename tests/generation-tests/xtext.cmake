


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-xtext SHARED
	xtext/XtextPackage.cpp
	xtext/XtextFactory.cpp
	xtext/Grammar.cpp
	xtext/AbstractRule.cpp
	xtext/AbstractMetamodelDeclaration.cpp
	xtext/GeneratedMetamodel.cpp
	xtext/ReferencedMetamodel.cpp
	xtext/ParserRule.cpp
	xtext/TypeRef.cpp
	xtext/AbstractElement.cpp
	xtext/Action.cpp
	xtext/Keyword.cpp
	xtext/RuleCall.cpp
	xtext/Assignment.cpp
	xtext/CrossReference.cpp
	xtext/TerminalRule.cpp
	xtext/AbstractNegatedToken.cpp
	xtext/NegatedToken.cpp
	xtext/UntilToken.cpp
	xtext/Wildcard.cpp
	xtext/EnumRule.cpp
	xtext/EnumLiteralDeclaration.cpp
	xtext/Alternatives.cpp
	xtext/UnorderedGroup.cpp
	xtext/Group.cpp
	xtext/CharacterRange.cpp
	xtext/CompoundElement.cpp
	)
	
target_link_libraries(e4c-xtext e4c)

